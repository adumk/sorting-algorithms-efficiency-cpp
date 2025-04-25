#include <iostream>
#include <fstream>
#include "timer.h"
#include <algorithm>

template<class T>
std::vector<T> QuickSort<T>::quickSort(const std::vector<T>& copy, int size, int pivot) {
    std::vector<T> kopia = copy;
    double time = 0;

    std::ofstream file4("QS_results.txt", std::ios::app);

    StartCounter();
    quickSort(kopia, 0, size - 1, pivot);
    time += GetCounter();
    std::cout << "The sorting time was: " << time << "ms" << std::endl;
    file4 << time << std::endl;
    file4.flush();
    file4.close();
    return kopia;
}

template<class T>
void QuickSort<T>::quickSort(std::vector<T>& array, int left, int right, int pivot) {
    if (left < right) {
        int bound = partition(array, left, right, pivot);
        quickSort(array, left, bound - 1, pivot);
        quickSort(array, bound + 1, right, pivot);
    }
}

template<class T>
int QuickSort<T>::partition(std::vector<T>& array, int left, int right, int pivot) {
    T pivotValue;
    if (pivot == 1)
        pivotValue = array[left];
    else if (pivot == 2)
        pivotValue = array[right];
    else if (pivot == 3)
        pivotValue = array[(left + right) / 2];
    else {
        std::cout << "Chosen pivot is invalid!" << std::endl;
    }
    int smaller = left;
    int equal = left;
    int bigger = right;

    while (equal <= bigger) {
        if (array[equal] < pivotValue) {
            std::swap(array[smaller], array[equal]);
            smaller++;
            equal++;
        } else if (array[equal] == pivotValue) {
            equal++;
        } else {
            std::swap(array[equal], array[bigger]);
            bigger--;
        }
    }

    return smaller;
}
