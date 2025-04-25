#ifndef PROJEKT_1_QUICKSORTDESC_H
#define PROJEKT_1_QUICKSORTDESC_H

#include <vector>

template<class T>
class QuickSortDesc {
public:
    std::vector<T> quickSortDesc(const std::vector<T>& array, int size, int pivot);
private:
    void quickSortDesc(std::vector<T>& array, int left, int right, int pivot);
    int partitionDesc(std::vector<T>& array, int left, int right, int pivot);
};

#include "quickSortDesc.tpp"

#endif // PROJEKT_1_QUICKSORTDESC_H
