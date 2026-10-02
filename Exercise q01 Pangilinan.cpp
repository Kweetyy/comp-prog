/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealPrice, servicePercent;
    int quantity, students;

    cout << "Enter meal price: ";
    cin >> mealPrice;

    cout << "Enter quantity ordered: ";
    cin >> quantity;

    cout << "Enter service charge percentage: ";
    cin >> servicePercent;

    cout << "Enter number of students: ";
    cin >> students;

    double subtotal = mealPrice * quantity;
    double serviceCharge = subtotal * (servicePercent / 100.0);
    double finalBill = subtotal + serviceCharge;
    double sharePerStudent = finalBill / students;

    cout << fixed << setprecision(2);

    cout << "\nSubtotal: " << subtotal << endl;
    cout << "Service charge: " << serviceCharge << endl;
    cout << "Final bill: " << finalBill << endl;
    cout << "Share per student: " << sharePerStudent << endl;

    return 0;
}