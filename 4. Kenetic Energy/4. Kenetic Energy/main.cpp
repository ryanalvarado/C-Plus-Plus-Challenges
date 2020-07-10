#include <iostream>
#include <cmath>
// #include <iomansip>
using namespace std;

/*
 
 http://www.cplusplus.com/forum/general/81012/
 
 
  https://jesushilarioh.com/chapter-6-6-kinetic-energy-tony-gaddis-starting-out-with-c-plus-plus/

Write kineticEnergy function that accepts arguments:
    cin Mass (in kg)
    cin Velocity (in m/s)
 
Function returns kinetic energy of object.

 KE = 1/2 * mv2

  KE   kinetic energy,
  m    object's mass in kilograms
  v    object's velocity, in meters/second

 

*/

// Global

// Prototypes
double kineticEnergy(double, double);
void display(double, double, double);




int main()
{
    double
           // keneticEnergy is this needed with prototype?
           mass,
           velocity;
    
    cout << "Enter the object's mass: ";
    cin >> mass;
    
    cout << "\nEnter the object's velocity: ";
    cin >> velocity;
    
    // Calls
    kineticEnergy(mass, velocity, keneticEnergy);
    display(
    
    return 0;
}




// Function
double kineticEnergy(double mass, double velocity, double keneticEnergy)
    {
        
        return (0.5) * mass * pow(velocity, 2);
    }
