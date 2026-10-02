#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string productName;
    double unitPrice, discountPercent, shippingPerBox;
    int quantity, unitsPerBox;

    cout << "Enter product name: ";
    getline(cin, productName);

    cout << "Enter unit price: ";
    cin >> unitPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter discount percentage: ";
    cin >> discountPercent;

    cout << "Enter shipping fee per box: ";
    cin >> shippingPerBox;

    cout << "Enter units per box: ";
    cin >> unitsPerBox;

    double subtotal = unitPrice * quantity;
    double discount = subtotal * (discountPercent / 100.0);
    double merchandiseTotal = subtotal - discount;

    double exactBoxes =
        static_cast<double>(quantity) / unitsPerBox;

    int boxesRequired = static_cast<int>(ceil(exactBoxes));

    double shippingTotal = boxesRequired * shippingPerBox;
    double amountDue = merchandiseTotal + shippingTotal;

    cout << fixed << setprecision(2);

    cout << "\n--- ONLINE STORE INVOICE ---\n";
    cout << "\tProduct: " << productName << endl;
    cout << "\tSubtotal: " << subtotal << endl;
    cout << "\tDiscount: " << discount << endl;
    cout << "\tMerchandise total: " << merchandiseTotal << endl;
    cout << "\tExact boxes: " << exactBoxes << endl;
    cout << "\tBoxes required: " << boxesRequired << endl;
    cout << "\tShipping total: " << shippingTotal << endl;
    cout << "\tAmount due: " << amountDue << endl;

    return 0;
}