 
#include <iostream>
#include <cmath>
using namespace std;

/* CHALLENGE:
 The volume of a sphere is V = (4.0/3.0)πr3 and the surface area is A = 4.0πr2, where r is the radius of the sphere.  Given the radius (user input), design a program that computes the volume and surface area of the sphere.  Assume the value of π = 3.141592.

  Amount = Principal x (1 + Rate / T)T

*/
 
int main()
{
    // VARIABLES
    double interestRate,
    timesCompounded,
    principleCalc,
    justInterest,
    amountSavings;
    
    
    
    // Q & A
    cout << "This program does" << endl;
    
    cout << "Please enter your savings account balance (principal): " << endl;
    cin >> principal;
    
    cout << "Please enter your interest rate: %" << endl;
    cin >> interestRate;
    
    cout << "How many times will the interest compound this year? " << endl;
    cin >> timesCompounded;
    
    
    // MATH
    savingsWithInterest = principal x (1 + interestRate / timesCompounded)timesCompounded;

    
    cout << "Interest Rate:  " << interestRate;
    cout << "Times Compounded:  " << timesCompounded;
    cout << "Principal:  " << principal;
    cout << "Interest:  " << justInterest;
    cout << "Amount in Savings:  " << savingsWithInterest;
    

    return 0;
}

/* It should display a report similar to:
 Interest Rate:  4.25%
 Times Compounded: 12
 Principal: $1000.00
 Interest:  $43.34
 Amount in Savings:  $1043.34
 */
