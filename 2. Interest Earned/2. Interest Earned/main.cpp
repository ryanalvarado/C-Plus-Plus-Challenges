 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

 
int main()
{
    // VARIABLES
    double interestRate,
           timesCompounded,
           principal,
           justInterest,
           savingsWithInterest,
           totalInterest,
           interestRateForMath;
    
    
    
    // Q & A
    cout << "This program helps you calculate your saving's interest earnings this year.\n" << endl;
    
    cout << "\nPlease enter your savings account balance (principal): ";
    cin >> principal;
    
    cout << "\nlease enter your interest rate: %";
    cin >> interestRate;
    
    cout << "\nHow many times will the interest compound this year? ";
    cin >> timesCompounded;
    
    
    // MATH
    interestRateForMath = interestRate / 100; // makes interest percentage math operable
    justInterest = interestRate * 10;
    
    savingsWithInterest = principal * pow((1 + interestRateForMath/timesCompounded), timesCompounded);
    
    totalInterest = savingsWithInterest - principal;
    

    // COUT
    cout << setprecision(2) << fixed << right << endl;
    
    cout << "\nInterest Rate:  %" << interestRate << endl;
    cout << "Times Compounded:  " << timesCompounded << endl;
    cout << "Principal:  " << principal << endl;
    cout << "Interest:  " << totalInterest << endl;
    cout << "Amount in Savings:  " << savingsWithInterest << setw(10) << endl;
    

    return 0;
}
