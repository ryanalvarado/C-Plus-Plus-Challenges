 
#include <iostream>
#include <cmath>
using namespace std;

/*
 Asks for
 the principal
 the interest rate,
 number of times the interest is compounded.
 
 
 Balance in savings acct after 1 year calculation:

  Amount = Principal x (1 + Rate / T)T

Principal balance = savings acct balance
Rate = interest rate
T = number of times the interest is compounded during a year
T is 4 if the interest is compounded quarterly


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
