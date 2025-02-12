#pragma once

#include <iostream>
#include "MaclaurinInterface.h"

using namespace std;

class Maclaurin : public MaclaurinInterface {
public:
    Maclaurin();
    ~Maclaurin();

    double sinSeriesEstimation(double x);
    double cosSeriesEstimation(double x);
    double arctanSeriesEstimation(double x);

    double powerComputer(double value, int tempn);
    long long factorialComputer(long long value);

protected:
    int finalIndex = 3;
    int n = 0;
    double sinEstimation;
    double cosEstimation;
    double arctanEstimation;
    int counter;

};