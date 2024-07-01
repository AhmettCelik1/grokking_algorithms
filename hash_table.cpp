#include <iostream>
#include <vector>
#include <list>
#include <functional>

template <typename KeyType, typename ValueType>
struct HashNode {
    KeyType key;
    ValueType value;
    HashNode(const KeyType& k, const ValueType& v) : key(k), value(v) {}
};


template <typename KeyType, typename ValueType>
class HashTable {
private:
    std::vector<std::list<HashNode<KeyType, ValueType>>> table;
    int numBuckets;
    int size;
    std::hash<KeyType> hashFunction;

    int getBucketIndex(const KeyType& key) const {
        return hashFunction(key) % numBuckets;
    }

public:
    HashTable(int buckets) : numBuckets(buckets), size(0) {
        table.resize(numBuckets);
    }

    void insert(const KeyType& key, const ValueType& value) {
        int bucketIndex = getBucketIndex(key);
        for (auto& node : table[bucketIndex]) {
            if (node.key == key) {
                node.value = value; 
                return;
            }
        }
        table[bucketIndex].emplace_back(key, value);
        ++size;
    }

    bool remove(const KeyType& key) {
        int bucketIndex = getBucketIndex(key);
        auto& bucket = table[bucketIndex];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->key == key) {
                bucket.erase(it);
                --size;
                return true;
            }
        }
        return false;
    }

    bool search(const KeyType& key, ValueType& value) const {
        int bucketIndex = getBucketIndex(key);
        for (const auto& node : table[bucketIndex]) {
            if (node.key == key) {
                value = node.value;
                return true;
            }
        }
        return false;
    }

    int getSize() const {
        return size;
    }

    bool isEmpty() const {
        return size == 0;
    }
};

int main() {
    HashTable<int, std::string> hashTable(10);

    hashTable.insert(1, "Value1");
    hashTable.insert(2, "Value2");
    hashTable.insert(3, "Value3");

    std::string value;
    if (hashTable.search(2, value)) {
        std::cout << "Found: " << value << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }

    hashTable.remove(2);
    if (hashTable.search(2, value)) {
        std::cout << "Found: " << value << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }

    return 0;
}
