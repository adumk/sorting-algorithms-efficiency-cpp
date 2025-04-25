cmake_minimum_required(VERSION 3.27)
project(projekt_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(projekt_1 main.cpp
        insertionSort.cpp
        insertionSort.h
        service1.h
        service1.cpp
        service2.h
        service2.cpp
        timer.h
        timer.cpp
        shellSort.h
        quickSort.h
        heapSort.h
        quickSortDesc.h
        insertionSort.tpp
        heapSort.tpp
        heapSort.cpp
        service1.tpp
        quickSort.tpp
        quickSort.cpp
        quickSortDesc.tpp
        quickSortDesc.cpp
        shellSort.tpp
        shellSort.cpp
        service2.tpp
)
