#include <iostream>
#include "Maclaurin.h"
#include <iomanip>
#include <math.h>


int main(int argc, char *argv[]) {
    Maclaurin M;
    string functionSelection = argv[1];
    double userInput = atof(argv[2]);

    if (functionSelection == "sin"){
        cout << "Sine Estimation: " << fixed << setprecision(5) << M.sinSeriesEstimation(userInput) << endl;
        cout << "Sine actual: " << sin(userInput) << endl;
    }

    if (functionSelection == "cos"){
        cout << "Cos Estimation: " << fixed << setprecision(5) << M.cosSeriesEstimation(userInput) << endl;
        cout << "Cos actual: " << cos(userInput) << endl;
    }

    if (functionSelection == "arctan"){
        cout << "Arctan Estimation: " << fixed << setprecision(5) << M.arctanSeriesEstimation(userInput) << endl;
        cout << "Arctan actual: " << (userInput) << endl;
    }

}
