# Sorting Algorithms Efficiency in C++

This project is a C++ program designed to investigate the efficiency and computational complexity of selected sorting algorithms. It provides implementations, benchmarking, and interactive testing for several classic sorting techniques.
Implementation allows to see arrays before and after sorting or to see only the time of sorting - in case of big arrays, printing them could be problematic.

## Features

- **Insertion Sort**  

- **Heap Sort**  

- **Shell Sort**  
  - Gap sequence: size/2  
  - Gap sequence: size/5 

- **Quick Sort**  
  - Pivot selection: leftmost, rightmost, or middle element  
  - Ascending and descending order variants

- **Interactive Menu**  
  - Load arrays from file or generate random arrays  
  - Select and apply any sorting algorithm/variant  
  - View timing and (optional) sorted/unsorted arrays


## Usage

1. **Build the project** with your preferred C++ compiler.
2. **Run the executable**.
3. **Choose an option** from the interactive menu:
   - Load an array from a file (supports both int and float types)
   - Generate a random array of a specified size and type
   - Select a sorting algorithm and its variant
   - View timing results and sorted arrays

## Project Structure

- `main.cpp` - Program entry point and interactive menu
- `insertionSort.h/.tpp` - Insertion Sort (with variants)
- `heapSort.h/.tpp` - Heap Sort
- `shellSort.h/.tpp` - Shell Sort (with gap sequence variants)
- `quickSort.h/.tpp` - Quick Sort (ascending)
- `quickSortDesc.h/.tpp` - Quick Sort (descending)
- `service1.h/.tpp` - File-based array loading and sorting
- `service2.h/.tpp` - Random array generation and sorting
- `timer.h` - Timing utilities

## Benchmark
