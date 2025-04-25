#ifndef PROJEKT_1_HEAPSORT2_H
#define PROJEKT_1_HEAPSORT2_H

#include <vector>

template<typename T>
class HeapSort {
public:
    HeapSort() {}
    std::vector<T> heapSort(const std::vector<T>& arr, int size);

private:
    void heapify(std::vector<T>& array, int n, int root);
};

#include "heapSort.tpp"

#endif //PROJEKT_1_HEAPSORT2_H
