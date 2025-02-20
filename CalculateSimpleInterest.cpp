#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time;
    
    // Taking user input
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    
    // Calculating simple interest
    double interest = calculateSimpleInterest(principal, rate, time);
    
    // Displaying result
    cout << "Simple Interest: " << interest << endl;
    cout << "Total Amount after " << time << " years: " << (principal + interest) << endl;
    
    return 0;
}
