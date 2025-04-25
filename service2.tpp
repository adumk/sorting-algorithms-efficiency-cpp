#include <iostream>
#include <cstdlib>
#include <type_traits>
#include "insertionSort.h"
#include "heapSort.h"
#include "shellSort.h"
#include "quickSort.h"
#include "quickSortDesc.h"

template<class T>
std::vector<T> service2<T>::randomize(int size) {
    std::vector<T> array;
    if (std::is_same<T, int>::value) {
        for (int i = 0; i < static_cast<int>(size); i++) {
            array.push_back(static_cast<T>(rand() - (RAND_MAX / 2)));
        }
    } else if (std::is_same<T, float>::value) {
        for (int i = 0; i < static_cast<int>(size); i++) {
            array.push_back(static_cast<T>(rand() - (RAND_MAX / 2)) / RAND_MAX * 1000.0f);
        }
    } else {
        std::cout << "Unsupported type" << std::endl;
    }
    return array;
}

template<class T>
std::vector<T> service2<T>::check2(const std::vector<T>& array, int size) {
    bool printing = true;
    int choice;
    while (true) {
        std::cout << "Select the sorting method:" << std::endl;
        std::cout << "1. Insertion sort" << std::endl;
        std::cout << "2. Heap sort" << std::endl;
        std::cout << "3. Shell sort" << std::endl;
        std::cout << "4. Quick sort ascending" << std::endl;
        std::cout << "5. Quick sort descending" << std::endl;
        std::cout << "6. Choose if you want arrays to be printed (by default they are)" << std::endl;
        std::cout << "7. Go back" << std::endl;

        std::cin >> choice;
        switch (choice) {
            case 1: {
                InsertionSort<T> sorter;
                std::vector<T> sortedArray = sorter.insertionSort(array, size);
                if(printing) {
                    std::cout << "Content of the array before sorting: " << std::endl;
                    for (const auto &element: array) std::cout << element << " ";
                    std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                    for (const auto &element: sortedArray) std::cout << element << " ";
                    std::cout << std::endl;
                }
                break;
            }
            case 2: {
                HeapSort<T> sorter;
                std::vector<T> sortedArray = sorter.heapSort(array, size);
                if(printing) {
                    std::cout << "Content of the array before sorting: " << std::endl;
                    for (const auto &element: array) std::cout << element << " ";
                    std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                    for (const auto &element: sortedArray) std::cout << element << " ";
                    std::cout << std::endl;
                }
                break;
            }
            case 3: {
                int gap;
                std::cout << "Select the size of the gaps in Shell's algorithm " << std::endl;
                std::cout << "1. Size / 2" << std::endl;
                std::cout << "2. Size / 5" << std::endl;
                std::cin >> gap;
                switch (gap) {
                    case 1: {
                        ShellSort<T> sorter;
                        std::vector<T> sortedArray = sorter.shellSort2(array, size);
                        if(printing) {
                            std::cout << "Content of the array before sorting: " << std::endl;
                            for (const auto &element: array) std::cout << element << " ";
                            std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                            for (const auto &element: sortedArray) std::cout << element << " ";
                            std::cout << std::endl;
                        }
                        break;
                    }
                    case 2: {
                        ShellSort<T> sorter;
                        std::vector<T> sortedArray = sorter.shellSort5(array, size);
                        if(printing) {
                            std::cout << "Content of the array before sorting: " << std::endl;
                            for (const auto &element: array) std::cout << element << " ";
                            std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                            for (const auto &element: sortedArray) std::cout << element << " ";
                            std::cout << std::endl;
                        }
                        break;
                    }
                }
                break;
            }
            case 4: {
                int pivot;
                std::cout << "Choose how to select the pivot: " << std::endl;
                std::cout << "1. Extreme left" << std::endl;
                std::cout << "2. Extreme right" << std::endl;
                std::cout << "3. Middle" << std::endl;
                std::cin >> pivot;
                QuickSort<T> sorter;
                std::vector<T> sortedArray = sorter.quickSort(array, size, pivot);
                if(printing) {
                    std::cout << "Content of the array before sorting: " << std::endl;
                    for (const auto &element: array) std::cout << element << " ";
                    std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                    for (const auto &element: sortedArray) std::cout << element << " ";
                    std::cout << std::endl;
                }
                break;
            }
            case 5: {
                int pivot;
                std::cout << "Choose how to select the pivot: " << std::endl;
                std::cout << "1. Extreme left" << std::endl;
                std::cout << "2. Extreme right" << std::endl;
                std::cout << "3. Middle" << std::endl;
                std::cin >> pivot;
                QuickSortDesc<T> sorter;
                std::vector<T> sortedArray = sorter.quickSortDesc(array, size, pivot);
                if(printing) {
                    std::cout << "Content of the array before sorting: " << std::endl;
                    for (const auto &element: array) std::cout << element << " ";
                    std::cout << std::endl << "Content of the array after sorting: " << std::endl << std::endl;
                    for (const auto &element: sortedArray) std::cout << element << " ";
                    std::cout << std::endl;
                }
                break;
            }
            case 6:{
                int printed;
                std::cout << "Do you want arrays to be printed? " << std::endl;
                std::cout << "1. Yes " << std::endl;
                std::cout << "2. No" << std::endl;
                std::cin >> printed;
                if(printed == 1){
                    printing = true;
                }
                else if (printed == 2){
                    printing = false;
                }
                break;
            }
            case 7:
                return array;
            default:
                std::cout << "Chosen option is invalid" << std::endl;
        }
    }
    return array;
}
