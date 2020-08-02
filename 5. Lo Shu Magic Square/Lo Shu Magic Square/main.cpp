#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;


/*
 Lo Shu Magic Square
 
 The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in Figure 7-19. The Lo Shu Magic Square has the following properties:
 • The grid contains the numbers 1 through 9 exactly.
 • The sum of each row, each column, and each diagonal all add up to the same
 number.
 
 This is shown in Figure 7-20.
 
 In a program you can simulate a magic square using a two-dimensional array. Write a function that accepts a two-dimensional array as an argument, and determines whether the array is a Lo Shu Magic Square. Test the function in a program.
 
 */



const int ROWS = 3;
const int COLS = 3;
const int MIN = 1;
const int MAX = 9;




// prototypes
void showResult(int[ ][COLS]);
void showArray(int[ ][COLS]);
bool isMagicSquare(int[ ][COLS]);
bool rangeCheck(int[ ][COLS]);
bool checkUnique(int[ ][COLS]);
bool checkRowSum(int[ ][COLS]);
bool checkColSum(int[ ][COLS]);
bool horzSumCheck(int[ ][COLS]);



int main()
{
     // magic two-dimensional
     int magicArray[ROWS][COLS] = {{4, 9, 2},
                                     {3, 5, 7},
                                     {8, 1, 6}
                                     };
    
     // two-dimensional array template
     int normalArray[ROWS][COLS] = {{10, 2, 3},
                                     {4, 15, 6},
                                     {7, 8, -8}
                                     };
    
    
     showArray(normalArray);
     showResult(normalArray);
     showArray(magicArray);
     showResult(magicArray);
    
     return 0;
}



void showResult(int values[ ][COLS])
{
     //  Magic Square check
     if (isMagicSquare(values))
         cout << "Congrats on your Lo Shu magic square.\n";
     else
         cout << "This is a non-complete Lo Shu magic square.\n";
}



// The showArray accepts a two-dimensional
void showArray(int values[ ][COLS])
{
 // Step through all the values in the array.
 for (int row = 0; row < ROWS; row++)
 {
     for (int col = 0; col < COLS; col++)
     {
     // Display int
     cout << values[row][col] << "  ";
     }
 cout << endl; // Jump to next row
 }
}



// The isMagicSquare accepts a two-dimensional array.
// Returns true if magic square. Otherwise false.
bool isMagicSquare(int values[ ][COLS])
{
     bool status = false;

     bool isBetween = rangeCheck(values);
     bool isUnique = checkUnique(values);
     bool isEqualRows = checkRowSum(values);
     bool isEqualCol = checkColSum(values);
     bool isEqualHorz = horzSumCheck(values);
        
     // Meet equirements?
     if (isBetween && isUnique && isEqualRows && isEqualCol && isEqualHorz)
         status = true;
     return status;
    }



// rangeCheck function accepts two-dimensional array.
// Returns true if the values are within the specified range. Otherwise false.
bool rangeCheck(int values[ ][COLS])
{
     bool status = true;
    
     for (int row = 0; row < ROWS; row++)
     {
         for (int col = 0; col < COLS; col++)
         {
             if (values[row][col] < MIN || values[row][col] > MAX)
             status = false;
         }
     }
     return status;
}



// checkUnique function accepts a two-dimensional array
// Returns true if array item are unique.
bool checkUnique(int values[ ][COLS])
{
 bool status = true;    // Initialize to true.
 int searchValue = MIN; // Initialize search value.
 int count = 0;         // Initialize  counter.
    
    
 // Perform the search while the maximum value, not been reached and is are unique.
 while (searchValue <= MAX && status == true)
 {
     // Step through all the values in the array.
     for (int row = 0; row < ROWS; row++)
     {
         for (int col = 0; col < COLS; col++)
         {
             if (values[row][col] == searchValue)
                 count++; // ^Determine if current value is the search value
         if (count > 1)
                 status = false;
         }
     }
     searchValue++;
     count = 0;  // Reset counter.
 }
 return status;
}




// The checkRowSum function accepts a two-dimensional array
// Returns true if array's rows are equal.
bool checkRowSum(int values[ ][COLS])
{
     // Initialize status to true.
     bool status = true;
   
     int sumArow = values[0][0] + values[0][1] + values[0][2]; // First row sum.
     int sumBrow = values[1][0] + values[1][1] + values[1][2]; // 2nd row sum.
     int sumCrow = values[2][0] + values[2][1] + values[2][2]; // Third row sum.
    
     // Determine if the sum of the columns is not equal
     if ( (sumArow != sumBrow) ||
     (sumArow != sumCrow) ||
     (sumBrow != sumCrow) )
         status = false;
     return status;
}





// The checkColSum function accepts a two-dimensional array as an argument,
// Returns true if sum of array's columns are equal.
bool checkColSum(int values[ ][COLS])
{
     bool status = true;
    
     int SumAcol = values[0][0] + values[1][0] + values[2][0]; // First column sum.
     int SumBcol = values[0][1] + values[1][1] + values[2][1]; // Second column sum.
     int sumCcol = values[0][2] + values[1][2] + values[2][2]; // Third column sum.
    
    // Check column sum isn't equal.
     if ( (SumAcol != SumBcol) ||
     (SumAcol != sumCcol) ||
     (SumBcol != sumCcol) )
         status = false;
     return status;
}



// horzSumCheck function accepts a two-dimensional array.
// Returns true if sum of the diagonal array is equal.
bool horzSumCheck(int values[ ][COLS])
{
     bool status = true;
    
     int sumAdiag = values[0][0] + values[1][1] + values[2][2]; // First diagonal sum.
     int sumBdiag = values[2][0] + values[1][1] + values[0][2]; // 2nd diagonal sum.
    
     // Determine if the sum of the diagonals is not equal.
     if (sumAdiag != sumBdiag)
         status = false;
        
         return status;
}
