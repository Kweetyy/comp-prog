#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double quiz, laboratory, project, examination;

    cout << "Enter quiz score: ";
    cin >> quiz;

    cout << "Enter laboratory score: ";
    cin >> laboratory;

    cout << "Enter project score: ";
    cin >> project;

    cout << "Enter examination score: ";
    cin >> examination;

    double weightedGrade = (quiz * 0.20) +
                           (laboratory * 0.25) +
                           (project * 0.25) +
                           (examination * 0.30);

    cout << fixed << setprecision(2);
    cout << "Weighted grade: " << weightedGrade << endl;
    cout << "Rounded grade: " << round(weightedGrade) << endl;
    cout << "Cast to int: " << static_cast<int>(weightedGrade) << endl;

    return 0;
}