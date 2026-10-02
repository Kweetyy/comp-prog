#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Enter starting x1: ";
    cin >> x1;

    cout << "Enter starting y1: ";
    cin >> y1;

    cout << "Enter target x2: ";
    cin >> x2;

    cout << "Enter target y2: ";
    cin >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    double distance = sqrt(pow(dx, 2) + pow(dy, 2));
    long long roundedDistance = static_cast<long long>(round(distance));

    cout << fixed << setprecision(3);

    cout << "\ndx = " << dx << endl;
    cout << "dy = " << dy << endl;
    cout << "Distance = " << distance << endl;
    cout << "Rounded distance = " << roundedDistance << endl;

    return 0;
}