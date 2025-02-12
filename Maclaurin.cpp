#include "Maclaurin.h"
#include <iostream>

using namespace std;

Maclaurin::Maclaurin(){}
Maclaurin::~Maclaurin(){}

//Calculates and estimation for sine with its Maclaurin Series
double Maclaurin::sinSeriesEstimation(double x){
    if (n > finalIndex){
        return sinEstimation;
    }
    if (n <= finalIndex) {
        counter = 1;
        int tempn = (2 * n) + 1;
        int sign = powerComputer(-1, tempn);
        double tempx = powerComputer(x, tempn);
        //cout << "tempx: " << tempx << endl;
        long long denominator = factorialComputer((2 * n) + 1);
        n++;
        sinEstimation = (sign * (tempx / denominator));
        return sinEstimation + sinSeriesEstimation(x);
    }
}

//Calculates and estimation for cosine with its Maclaurin Series
double Maclaurin::cosSeriesEstimation(double x){
    if (n > finalIndex){
        return cosEstimation;
    }
    if (n <= finalIndex) {
        counter = 1;
        int tempn = (2 * n);
        int sign = powerComputer(-1, tempn);
        double tempx = powerComputer(x, tempn);
        cout << "tempx: " << tempx << endl;
        long long denominator = factorialComputer(2 * n);
        n++;
        cosEstimation = (sign * (tempx / denominator));
        return cosEstimation + cosSeriesEstimation(x);
    }
}

//Calculates and estimation for arctangent with its Maclaurin Series
double Maclaurin::arctanSeriesEstimation(double value){

}

double Maclaurin::powerComputer(double value, int tempn){
    if (value == -1){
        if (n == 0){
            return 1;
        }
        if (n == 1){
            return -1;
        }
        if (n % 2 == 0){
            return 1;
        }
        if (n % 2 != 0){
            return -1;
        }
    }
    if (value > -1) {
        if (n == 0){
            return value;
        }
        if (counter == tempn) {
            return value;
        }
        if ((tempn > 1) && (counter < tempn)) {
            counter++;
            return value * powerComputer(value, tempn);
        }
    }
}

long long Maclaurin::factorialComputer(long long value){
    if (value == 0){
        return 1;
    }
    if (value == 1){
        return value;
    }
    if (value > 1) {
        return value * factorialComputer(value - 1);
    }
}