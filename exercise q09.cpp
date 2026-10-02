#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double baseTuition, feePercent, downPayment;
    int months;

    cout << "Enter base tuition: ";
    cin >> baseTuition;

    cout << "Enter processing fee percentage: ";
    cin >> feePercent;

    cout << "Enter down payment: ";
    cin >> downPayment;

    cout << "Enter number of monthly installments: ";
    cin >> months;

    double processingFee = baseTuition * (feePercent / 100.0);
    double adjustedTuition = baseTuition + processingFee;
    double remainingBalance = adjustedTuition - downPayment;
    double monthlyInstallment = remainingBalance / months;

    cout << fixed << setprecision(2);

    cout << "\nProcessing fee = " << processingFee << endl;
    cout << "Adjusted tuition = " << adjustedTuition << endl;
    cout << "Balance = " << remainingBalance << endl;
    cout << "Monthly = " << monthlyInstallment << endl;

    return 0;
}