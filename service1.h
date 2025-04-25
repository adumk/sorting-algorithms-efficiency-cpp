#ifndef OBSLUGA_PRZYKLADU1_H
#define OBSLUGA_PRZYKLADU1_H

#include <vector>
#include <string>

template<class T>
class ObslugaPrzykladu1 {
public:
    std::vector<T> check1(std::string fileName);
};

#include "service1.tpp"

#endif // OBSLUGA_PRZYKLADU1_H
