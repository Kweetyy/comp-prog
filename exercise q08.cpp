#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double t1, t2, t3;

    cout << "Enter first temperature: ";
    cin >> t1;

    cout << "Enter second temperature: ";
    cin >> t2;

    cout << "Enter third temperature: ";
    cin >> t3;

    double average = (t1 + t2 + t3) / 3.0;
    double absoluteDifference = fabs(t1 - t3);

    cout << fixed << setprecision(3);

    cout << "\nAverage = " << average << endl;
    cout << "|T1-T3| = " << absoluteDifference << endl;
    cout << "floor = " << floor(average) << endl;
    cout << "ceil = " << ceil(average) << endl;
    cout << "trunc = " << trunc(average) << endl;
    cout << "round = " << round(average) << endl;

    return 0;
}