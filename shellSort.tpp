#include <iostream>
#include <fstream>
#include "timer.h"

template<class T>
std::vector<T> ShellSort<T>::shellSort2(const std::vector<T>& array, int size) {
    std::vector<T> kopia = array;
    T buffer;
    double time = 0;
    std::ofstream file3("SS_results.txt", std::ios::app);
    StartCounter();

    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i += 1) {
            buffer = kopia[i];
            int j;
            for (j = i; j >= gap && kopia[j - gap] > buffer; j -= gap) {
                kopia[j] = kopia[j - gap];
            }
            kopia[j] = buffer;
        }
    }
    time += GetCounter();
    std::cout << "The sorting time was: " << time << "ms" << std::endl;
    file3 << time << std::endl;
    file3.flush();
    file3.close();
    return kopia;
}

template<class T>
std::vector<T> ShellSort<T>::shellSort5(const std::vector<T>& array, int size) {
    std::vector<T> kopia = array;
    T buffer;
    double time = 0;
    std::ofstream file3("SS_results.txt", std::ios::app);
    StartCounter();

    for (int gap = size / 5; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i += 1) {
            buffer = kopia[i];
            int j;
            for (j = i; j >= gap && kopia[j - gap] > buffer; j -= gap) {
                kopia[j] = kopia[j - gap];
            }
            kopia[j] = buffer;
        }
    }
    time += GetCounter();
    std::cout << "The sorting time was: " << time << "ms" << std::endl;
    file3 << time << std::endl;
    file3.flush();
    file3.close();
    return kopia;
}
