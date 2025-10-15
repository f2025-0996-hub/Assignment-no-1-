#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num1, num2;
    cout << " Enter two floating-point number:";
    cin >> num1 >> num2;

    cout << fixed << setprecision(3);
    cout << "\nSum:" << num1 + num2 << endl;
    cout << "\nDifference:" << num1 - num2 << endl;
    cout << "\nProduct:" << num1 * num2 << endl;
    cout << "\nQuotient:" << num1 / num2 << endl;

    //casting to int
    int a = static_cast<int>(num1);
    int b = static_cast<int>(num2);

    cout << "\nAfter converting to int:\n";
    cout << "\nSum:" << a + b;
    cout << "\nDifferent:" << a - b;
    cout << "\nProduct:" << a * b;
    cout << "\nQuotient:" << a / b;
    return 0;
}