#include <iostream>
#include <fstream>
#include "insertionSort.h"
#include "heapSort.h"
#include "shellSort.h"
#include "quickSort.h"
#include "quickSortDesc.h"

template<class T>
std::vector<T> ObslugaPrzykladu1<T>::check1(std::string fileName) {
    std::vector<T> array;
    T size;
    bool printing = true;

    std::ifstream file(fileName.c_str());

    if (!file.is_open()) {
        std::cerr << "File not found or cannot open it" << std::endl;
        throw std::runtime_error("File opening failed");
    }

    T number;
    while(file >> number) {
        size = static_cast<int>(number);
        break;
    }
    while(file >> number) {
        array.push_back(number);
    }
    file.close();

    int choice;
    while(true) {
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
                switch(pivot) {
                    case 1: {
                        QuickSort<T> sorter;
                        std::vector<T> sortedArray = sorter.quickSort(array, size, 1);
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
                        QuickSort<T> sorter;
                        std::vector<T> sortedArray = sorter.quickSort(array, size, 2);
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
                        QuickSort<T> sorter;
                        std::vector<T> sortedArray = sorter.quickSort(array, size, 3);
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
            case 5:{
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
}
