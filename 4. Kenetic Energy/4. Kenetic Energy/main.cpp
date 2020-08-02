#include <iostream>
#include <cmath>
#include <iomanip>
// #include <iomansip>
using namespace std;

/* CHALLENGE:
 In physics, an object that is in motion is said to have kinetic energy.  The following formula can be used to determined a moving object's kinetic energy:

 KE = 1/2 * mv2

 The variables in the formula are as follows:  KE is the kinetic energy, m is the object's mass in kilograms, and v is the object's velocity, in meters per second.

 Write a function named kineticEnergy that accepts an object's mass (in kg) and velocity (in m/s) as arguments.  The function should return the amount of kinetic energy that the object has.  Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity.
 */

// Prototypes
void KEfunction(double, double);
void displayKE(double, double);


// Global variable
double keneticEnergyTotal;

int main()
{
    double
           // keneticEnergy is this needed with prototype?
           mass,
           velocity;
    
    cout << "Enter the object's mass (kg): ";
    cin >> mass;
    
    cout << "\nEnter the object's velocity (m/s): ";
    cin >> velocity;
    
    // Calls
    KEfunction(mass, velocity);
    displayKE(mass, velocity);
    
    return 0;
}




// Function to calculate kenetic energy
void KEfunction(double mass, double velocity)
    {
        
        keneticEnergyTotal = (0.5) * mass * pow(velocity, 2);
    }



// Function to display calculation
void displayKE(double mass, double velocity)
    {
        cout << setprecision(2) << fixed << right << endl;
        cout << "The kenetic emergy is: ";
        cout << keneticEnergyTotal << endl << endl;
    }
