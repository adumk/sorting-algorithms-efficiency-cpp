#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>

template<class T>
class InsertionSort {
public:
    std::vector<T> copy;

    std::vector<T> insertionSort(const std::vector<T>& array, int size);
};

#include "insertionSort.tpp" // Implementation for template class

#endif // INSERTION_SORT_H
