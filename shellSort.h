#ifndef PROJEKT_1_SHELLSORT_H
#define PROJEKT_1_SHELLSORT_H

#include <vector>

template<class T>
class ShellSort {
public:
    std::vector<T> copy;

    std::vector<T> shellSort2(const std::vector<T>& array, int size);
    std::vector<T> shellSort5(const std::vector<T>& array, int size);
};

#include "shellSort.tpp"

#endif // PROJEKT_1_SHELLSORT_H
