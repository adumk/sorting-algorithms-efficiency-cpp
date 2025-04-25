#ifndef TIMER_H
#define TIMER_H

#include <Windows.h>

extern double PCFreq;
extern __int64 CounterStart;

void StartCounter();
double GetCounter();

#endif // TIMER_H