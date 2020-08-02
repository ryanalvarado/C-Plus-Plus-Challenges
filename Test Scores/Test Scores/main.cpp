#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

//prototypes
void bubbleSort(double* , int);
void arrayPointer(double* , int);
void getAverage(double, int);



int main()
{
    //dyn. allocate array, accumulator, variqble for number of test scores
    double *scores, total = 0, numScores;
    
    cout << "How many test scores do you have?";
    cin >> numScores;

    //Dyn. allocate  array to hold test scores
    scores = new double[numScores];
    if (scores == nullptr)
        return 0;

    cout << "Enter the test scores below.\n";
    for (int count = 0; count < numScores; count++)
    {
        cout << "Test score " << (count + 1) << ": ";
        cin >> *(scores + count);
    }

    

    //Calculate total
    for (int count = 0; count < numScores; count++)
        total += *(scores + count);

    getAverage(total, numScores);
    bubbleSort(scores, numScores);

    cout << "Here are the test scores: \n";
    arrayPointer(scores, numScores);
    

    //Free allocated memory
    delete[] scores;
    scores = 0;
    
    

    return 0;

    
}




// bubble sort
void bubbleSort(double *array, int size)
{
    int temp;
    bool swap;
    do
    {

        swap = false;

        for (int count = 0; count < (size - 1); count++)
        {
            if (*(array + count) > *(array + count + 1))
            {

                temp = *(array + count);
                *(array + count) = *(array + count + 1);
                *(array + count + 1) = temp;
                swap = true;
            }
        }
    } while (swap);
}


// sort
void arrayPointer(double *array, int size)
{
    for (int count = 0; count< size; count++)
        cout << *(array + count) << " ";
        cout << endl;
}




// average
void getAverage(double total, int numScores)
{
    // local
    double average;
    average = total / numScores;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Average: " << average << endl;
}
