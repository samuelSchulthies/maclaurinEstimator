//YOU MAY NOT MODIFY THIS DOCUMENT
/*
 * jk its yours ;)
 */

#pragma once
using namespace std;

class MaclaurinInterface {
public:
    MaclaurinInterface(){}
    virtual ~MaclaurinInterface(){}

    //Calculates and estimation for sine with its Maclaurin Series
    virtual double sinSeriesEstimation(double x) = 0;

    //Calculates and estimation for cosine with its Maclaurin Series
    virtual double cosSeriesEstimation(double value) = 0;

    //Calculates and estimation for arctangent with its Maclaurin Series
    virtual double arctanSeriesEstimation(double value) = 0;
private:
};