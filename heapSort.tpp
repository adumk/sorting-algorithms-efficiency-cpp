#include <fstream>
#include <iostream>
#include <algorithm>
#include "timer.h"

template<typename T>
std::vector<T> HeapSort<T>::heapSort(const std::vector<T>& arr, int size) {
    std::vector<T> arr_copy(arr);

    std::ofstream plik2("HS_results.txt", std::ios::app);

    double czas = 0;
    int n = size;
    StartCounter();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr_copy, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr_copy[0], arr_copy[i]);
        heapify(arr_copy, i, 0);
    }
    czas += GetCounter();
    std::cout << "The sorting time was: " << czas << "ms" << std::endl;

    plik2 << czas << std::endl;
    plik2.flush();
    plik2.close();

    return arr_copy;
}

template<typename T>
void HeapSort<T>::heapify(std::vector<T>& array, int n, int root) {
    int max1 = root;
    int lewy = 2 * root + 1;
    int prawy = 2 * root + 2;

    if (lewy < n && array[lewy] > array[max1]) {
        max1 = lewy;
    }
    if (prawy < n && array[prawy] > array[max1]) {
        max1 = prawy;
    }
    if (max1 != root) {
        std::swap(array[root], array[max1]);
        heapify(array, n, max1);
    }
}
