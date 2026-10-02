#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double wallWidth, wallHeight;
    int coats;
    double coveragePerCan;

    cout << "Enter wall width: ";
    cin >> wallWidth;

    cout << "Enter wall height: ";
    cin >> wallHeight;

    cout << "Enter number of coats: ";
    cin >> coats;

    cout << "Enter coverage per can: ";
    cin >> coveragePerCan;

    double wallArea = wallWidth * wallHeight;
    double totalPaintArea = wallArea * coats;
    double exactCans = totalPaintArea / coveragePerCan;
    int cansToBuy = ceil(exactCans);

    cout << fixed << setprecision(2);

    cout << "\nWall area = " << wallArea << endl;
    cout << "Total paint area = " << totalPaintArea << endl;
    cout << "Exact cans = " << exactCans << endl;
    cout << "Cans to buy = " << cansToBuy << endl;

    return 0;
}