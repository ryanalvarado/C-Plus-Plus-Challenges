// This program adds two numbers entered by the user.
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

/* CHALLENGE
 Prompt user to enter the sales for five stores.
 
 Convert the sales into a chart where
 an astericks * is equivalent to $100.
 */


int main()
{

  int store1,
      store2,
      store3,
      store4,
      store5;
    
 
  int sale1,
      sale2,
      sale3,
      sale4,
      sale5;




  cout << "Enter today's sales for store 1: " ;
  cin  >> store1;
  cout << "Enter today's sales for store 2: " ;
  cin  >> store2;
  cout << "Enter today's sales for store 3: " ;
  cin  >> store3;
  cout << "Enter today's sales for store 4: " ;
  cin  >> store4;
  cout << "Enter today's sales for store 5: " ;
  cin  >> store5;


    cout << "\tSales Bar Chart\t" << endl;
  cout << endl << "Each asterisks respresents $100" << endl;

  sale1 = store1 / 100;
  sale2 = store2 / 100;
  sale3 = store3 / 100;
  sale4 = store4 / 100;
  sale5 = store5 / 100;

  cout << "Store 1: ";
      for (int i = 0; i < sale1; i++)
              cout << '*';
      cout << endl << "Store 2: ";
      for (int i = 0; i < sale2; i++)
              cout << '*';
      cout << endl << "Store 3: ";
      for (int i = 0; i < sale3; i++)
              cout << '*';
      cout << endl << "Store 4: ";
      for (int i = 0; i < sale4; i++)
              cout << '*';
      cout << endl << "Store 5: ";
      for (int i = 0; i < sale5; i++)
              cout << '*';


    

    return 0;
}
