#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter three integers:";
    cin >> a >> b >> c;
    
    int largest, smallest;
    if (a >= b && a >= c)
    largest = a;
    else if (b >= a && b >= c)
    largest = b;
    else
    largest = c;
    if (a <= b && a <= c)
    smallest = a;
    else if (b <= a && b <= c)
    smallest = b;
    else 
    smallest = c;
     
    cout << "largest:" << largest  << endl;
    cout << "smallest:" << smallest << endl;
    if (a == b && b == c)
    cout << "All the numbers are equal." << endl;
    else
    cout << "All the numbers are not equal." << endl;
    return 0;
}