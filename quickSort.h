#ifndef PROJEKT_1_QUICKSORT_H
#define PROJEKT_1_QUICKSORT_H

#include <vector>

template<class T>
class QuickSort {
public:
    std::vector<T> quickSort(const std::vector<T>& copy, int size, int pivot);
private:
    void quickSort(std::vector<T>& array, int left, int right, int pivot);
    int partition(std::vector<T>& array, int left, int right, int pivot);
};

#include "quickSort.tpp"

#endif // PROJEKT_1_QUICKSORT_H
