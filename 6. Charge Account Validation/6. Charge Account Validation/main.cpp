#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;



/* PROGRAMMING CHALLENGE: Charge Account Validation
 Write a program that lets the user enter a charge account number.
 The program should determine if the number is valid by checking for it in the following list:
 
 5658845 4520125 7895122 8777541 8451277 1302850
 8080152 4562555 5552012 5050552 7825877 1250255
 1005231 6545231 3852085 7576651 7881200 4581002
 
 The list of numbers above should be initialized in a single-dimensional array.
 A simple linear search should be used to locate the number entered by the user.
 If the user enters a number that is in the array,
 the program should display a message saying that the number is valid.
 If the user enters a number that is not in the array,
 the program should display a message indicating that the number is invalid. */



int linearSearch(int[], int, int);

int main()
{
    const int size = 18;
    int acctNums[size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                          8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                          1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
   
    int accountNum;
    int result;

    cout << "Enter a 7 digit numeric account number:\n";
    cin >> accountNum;

    result = linearSearch(acctNums, size, accountNum);

    if(result == -1)
            cout << "Please enter a valid number\n";
        else
            cout << "Thanks for valid number!\n";

return 0;
}



int linearSearch(int acctNums[], int size, int account)
{
    int index = 0;       // subscript
    int position = -1;  // -1 to indicate an invalid search
    bool found = false;
    
    while (index < size && !found)
    {
        if(acctNums[index] == account) // if the account is found
        {
            found = true;
            position = index;
        }
        index++;
    }
    
    // Return the position or -1
    return position;
}
