#ifndef OBSLUGA_PRZYKLADU2_H
#define OBSLUGA_PRZYKLADU2_H

#include <vector>

template<class T>
class service2 {
public:
    std::vector<T> check2(const std::vector<T>& array, int size);
    std::vector<T> randomize(int size);
};

#include "service2.tpp"

#endif // OBSLUGA_PRZYKLADU2_H
