#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high]; 
    int i = (low - 1); 

    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quick_sort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high); 
        quick_sort(array, low, pi - 1); 
        quick_sort(array, pi + 1, high); 
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << std::endl;
    int array[] = {11, 2, 21, 24, 534, 23, 34, 32, 32, 54, 23, 235, 1};
    int aranan_deger = 54;
    std::cout << "aranan deger: " << aranan_deger << std::endl;
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << "Before Quick Sort" << std::endl;
    print_array(array, size);
    std::cout << std::endl;
    std::cout << "After Quick Sort" << std::endl;
    quick_sort(array, 0, size - 1);
    print_array(array, size);
    std::cout << std::endl;

    return 0;
}
