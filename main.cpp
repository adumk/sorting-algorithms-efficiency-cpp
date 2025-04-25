#include <iostream>
#include <array>
#include <random>
#include <algorithm>
#include "service1.h"
#include "service2.h"
#include "quickSortDesc.h"

using namespace std;

template<typename T>
vector<T> check1(const string& fileName) {
    ObslugaPrzykladu1<T> service;
    return service.check1(fileName);
}


template<typename T>
vector<T> check2(const vector<T>& array, int size) {
    service2<T> obsluga;
    return obsluga.check2(array, size);
}


int main() {
    srand(time(NULL));
    int type;
    int choice;
    int size;
    string file;
    vector<int> result_int;
    vector<float> result_float;
    service2<int> int_handler;
    service2<float> float_handler;

    cout << "Welcome to a program investigating the efficiency of selected sorting algorithms in terms of computational complexity"
            << endl;
    while (true) {
        powrot:
        cout << endl;
        cout << "Choose option: " << endl;
        cout << "1. Load arrays from a file with the specified name (check the correctness of operation of the algorithm)" << endl;
        cout << "2. Generate an array of a given size containing random values (check the correctness of operation of the algorithm)"
             << endl;
        cout << "3. Exit " << endl;

        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Provide file name:" << endl;
                cin >> file;
                if (file.find("int") != string::npos) {
                    auto result = check1<int>(file);
                    cout << endl;
                } else if (file.find("float") != string::npos) {
                    auto result = check1<int>(file);
                    cout << endl;
                } else {
                    cout << "The file with the specified name could not be found" << endl;
                }
                break;

            case 2: {
                cout << "Provide array size:" << endl;
                cin >> size;
                cout << "Provide type of data for the draw:" << endl;
                cout << "1. int" << endl;
                cout << "2. float" << endl;
                cout << "3. Go back" << endl;
                cin >> type;
                switch (type) {
                    case 1: {
                        result_int = int_handler.randomize(size);
                        break;
                    }
                    case 2: {
                        result_float = float_handler.randomize(size);
                        break;
                    }
                }


                switch (type) {
                    case 1: {
                        auto result = check2<int>(result_int, size);
                        cout << endl;
                        break;
                    }
                    case 2: {
                        auto result = check2<float>(result_float, size);
                        cout << endl;
                        break;
                    }
                    case 3: {
                        goto powrot;
                    }
                    default:
                        cout << "Chosen option is invalid" << endl;
                        break;
                }
                break;
            }
            case 3: {
                exit(0);
            }
            default:
                    cout << "Chosen option is invalid" << endl;
            }
        }
    }
