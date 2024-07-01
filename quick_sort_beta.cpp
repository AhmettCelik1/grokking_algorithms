#include <iostream>
#include <algorithm> // std::swap

void quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return; // Eğer alt dizi boyutu 1 veya daha küçükse, bir şey yapma
    }
    
    int pivot = arr[left]; // Pivot olarak ilk elemanı seç
    int i = left + 1; // Sol işaretçi
    int j = right; // Sağ işaretçi

    while (i <= j) {
        // Sol işaretçiyi pivot'tan büyük bir değer bulana kadar ilerlet
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        // Sağ işaretçiyi pivot'tan küçük veya eşit bir değer bulana kadar gerilet
        while (i <= j && arr[j] > pivot) {
            j--;
        }
        // Eğer sol işaretçi sağ işaretçiyi geçmediyse, bu iki elemanı takas et
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }

    // Pivot'u doğru konuma yerleştir
    std::swap(arr[left], arr[j]);

    // Alt diziyi ve üst diziyi rekürsif olarak sırala
    quick_sort(arr, left, j - 1);
    quick_sort(arr, j + 1, right);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {3, 6, 8, 10, 1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Orijinal dizi: ";
    printArray(arr, size);

    quick_sort(arr, 0, size - 1);

    std::cout << "Sıralanmış dizi: ";
    printArray(arr, size);

    return 0;
}
