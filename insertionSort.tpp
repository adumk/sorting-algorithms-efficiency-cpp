#include <iostream>
#include <fstream>
#include "timer.h"

template<class T>
std::vector<T> InsertionSort<T>::insertionSort(const std::vector<T>& array, int size) {
    copy = array;
    double time = 0;

    std::ofstream file("IS_results.txt", std::ios::app);

    StartCounter();
    for (int i = 1; i < size; ++i) {
        T key = copy[i];
        int j = i - 1;
        while (j >= 0 && copy[j] > key) {
            copy[j + 1] = copy[j];
            j = j - 1;
        }
        copy[j + 1] = key;
    }
    time += GetCounter();
    file << time << std::endl;
    file.flush();

    std::cout << "The sorting time was: " << time << "ms" << std::endl;

    file.close();
    return copy;
}
