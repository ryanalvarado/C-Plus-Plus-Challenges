#include <iostream>
#include <string>
#include <chrono>
#include <unistd.h>
using namespace std;

/*----------------- 
| Co-written by:  |
| Brad Branan     |
| Asahi Pritchard |
| Leah Schmitz    |  
| Ryan Alvarado   |
| Elias Vallejo   |
-----------------*/







// GLOBAL VARIABLES:
    // Brad Module 1
    bool garyFedBoolean; // 0 or 1 
    string tieColor; // any color

    // Integer Module 2 Asahi
    int spongebobPath; // 1, 2, 3, or 4

    // Module 3 Leah
    string spongebobCookOrRegister = "cook"; // cook or register








// Function prototypes
void topAsciiArt();
void brad();
void asahi();
void midAsciiArt();
void leah();
void ryan();
void elias();







int main()
{
    // Function calls
    topAsciiArt();
    brad();
    midAsciiArt();
    asahi();
    
    leah();
    ryan();
    elias();


}












// 0. ASCII Art
//Line2, Line2 are copies of temp1, temp2
void topAsciiArt()
    {
        cout << "      .--..--..--..--..--..--." << endl;
cout << "    .' ⍀  (`._   (_)     _   ⍀ "<< endl;
cout << "  .'    |  '._)         (_)  |" << endl;
cout << "  ⍀ _.')⍀      .----..---.   /" << endl;
cout << "  |(_.'  |    /    .-⍀-.  ⍀  |" << endl;
cout << "  ⍀     0|    |   ( O| O) | o|" << endl;
cout << "   |  _  |  .--.____.'._.-.  |" << endl;
cout << "   ⍀ (_) | o         -` .-`  |" << endl;
cout << "    |    ⍀   |`-._ _ _ _ _⍀ /" << endl;
cout << "    ⍀    |   |  `. |_||_|   |" << endl;
cout << "    | o  |    ⍀_      ⍀     |     -.   .-." << endl;
cout << "    |.-.  ⍀     `--..-'   O |     `.`-' .'" << endl;
cout << "  _.'  .' |     `-.-'      /-.__   ' .-'" << endl;
cout << ".' `-.` '.|='=.='=.='=.='=|._/_ `-'.'" << endl;
cout << "`-._  `.  |________/⍀_____|    `-.'" << endl;
cout << "   .'   ).| '=' '='⍀/ '=' |" << endl;
cout << "   `._.`  '---------------'" << endl;
cout << "           //___⍀   //___⍀ " << endl;
cout << "             ||       ||" << endl;
cout << "             ||_.-.   ||_.-." << endl;
cout << "            (_.--__) (_.--__)" << endl;

cout << "\n\n\n  -------------------------------" << endl;
cout << "~*SPONGEBOB MAKES A KRABBY PATTY*~" << endl;
cout << "  -------------------------------\n\n\n";

usleep(3000000);
    } 
















// 1. Brad
void brad()
    {
        string garyFedYesNo;
    
        cout << "SPONGEBOB's AM ALARM GOES OFF! \n\n";

        usleep(2000000);

        cout << "Spongebob rambunctiously opens his closet.\n";
        
        usleep(1000000);
        
        cout << "What color tie should Spongebob pick? (Type then press enter)\n";

        cin >> tieColor;

        cout << tieColor << " is an excellent choice!\n\n";
        
        usleep(2000000);

        cout << "Spongebob is running late. \nShould Spongebob feed Gary his pet snail now?\n(lower-case yes/no):" << endl;

 

        cin >> garyFedYesNo;
        
    
        if( garyFedYesNo == "yes" ) 
            {
                garyFedBoolean = 1; 
            
                cout << "\nGood choice.";
                usleep(2000000);
                cout << "\nGary is starting to gain weight though...";
                usleep(3000000);    
            } 
            else
                { 
                garyFedBoolean = 0; 
            
                cout << "\nGary's is on a diet after all.\nIt'll benefit him in to wait.";
        
            }
             usleep(3000000); 
    } 












void midAsciiArt()
    {
    cout << "\n\n" << endl;
cout << "             .-'''-." << endl;  
cout << "     ;  .-. ;      oo" << endl;
cout << "  _.('.__.' :-..__//" << endl;
cout << "i'.._'-.__.'_.._.-" << endl;
    }




// 2. Asahi
void asahi()
{
    bool planktonfound;
    
    //Description of input task
    cout << "\n\nOn the way to work, Spongebob hears Plankton but can't see him..." << endl;
      
      usleep(3000000);

    cout << "Choose which path Spongebob takes to work.\n " << endl;

      usleep(3000000);

    while (planktonfound!=true)
    {
        //Instructions on input task
        cout << "Enter a number between 1-4 to "<< endl;
        cout<< "CHOOSE SPONGEBOB's PATH:" <<endl;

        //Input choice of path
        cin >> spongebobPath;

        //First choice of path
        if(spongebobPath == 1)
            {
            cout << "\n\nSpongebob skips down Eel Avenue. " << endl;
            usleep(3000000);
            cout <<"towards the Krusty Krab.";
            planktonfound=true;
            }
        //Second choice of path
        else if(spongebobPath == 2)
            {
                cout << "\n\nSpongebob turns down Starfish Lane." << endl;
                usleep(3000000);
                cout <<"and sees a small figure..."<< endl;
                usleep(3000000);
                cout <<"It reveals itself to be a jellyfish!"<<endl;
                usleep(3000000);
                cout <<"\n\nSpongebob laughs and heads to the Krusty Krab.";
                usleep(3000000);
                planktonfound=true;
            }
        //Third choice of path
        else if(spongebobPath == 3)
        {
             cout << "\n\nUh oh, Spongebob was caught by Plankton, try again." << endl <<endl;
             usleep(3000000);
        }
        //Fourth choice of path
        else if(spongebobPath == 4)
        {
            cout << "\n\nSpongebob walks down Beach Street." << endl;

            cout<<"to the Krusty Krab." << endl;
            planktonfound=true;
            usleep(3000000);
        }
        //Informing user of invalid choice of path
        else
        {
            cout << "\n\nBarnacles! You entered an invalid choice."<< endl;
            usleep(1000000);
            cout <<"Please enter a number between 1-4." <<endl <<endl;
            usleep(3000000);
        }
    }    
}
     

























// 3. Leah
void leah()
   {
 string decide = "check";

  // use if else statement
  // check if Squidward is at register
  // if he is, Spongebob should cook
  // if he is not, Spongebob will work register
  // use var isSpongebobCooking


  cout << "\n\n\nSPONGEBOB HAS SUCCESSFULLY AVOIDED PLANKTON!\n";
  cout << "-------------------------\n\n\n";
  usleep(3000000);

  cout << "We've safely arrived at the Krusty Krab.\n";
  cout << endl;
  usleep(3000000);
  cout << "What shall we do next?" << endl;
  usleep(3000000);
  cout << "Check the register or go home?" << endl;
  
  cout << "For register, enter 'check', for leave enter 'home':" << endl;
  cout << endl;
  cin >> decide;
  cout << endl;
  
  if ((decide != "home"))
    {
                     cout << "               .--'''''''''--.  " << endl;
    cout << "            .'      .---.      '. " << endl;
    cout << "           /    .-----------.    ⍀ " << endl;
    cout << "          /        .-----.        ⍀ " << endl;
    cout << "          |       .-.   .-.       | " << endl;
    cout << "          |      /   ⍀ /   ⍀      | " << endl;
    cout << "           ⍀    | .-. | .-. |    / " << endl;
    cout << "            '-._| | | | | | |_.-' " << endl;
    cout << "                | '-' | '-' | " << endl;
    cout << "                 ⍀___/ ⍀___/ " << endl;
    cout << "             _.-'  /   ⍀  `-._ " << endl;
    cout << "           .' _.--|     |--._ '. " << endl;
    cout << "           ' _...-|     |-..._ ' " << endl;
    cout << "                  |     | " << endl;
    cout << "                  '.___.' " << endl;
     cout << "                    | | " << endl;
    cout << "           Squidward is grumpy.\n\n" << endl;


    cout << "Spongebob talks to Squidward. He's doesn't care which role he's in today.\n\n";
    usleep(3000000);
    cout << "Time to help out the customers in need!\n";
  
      } else {  
      cout << "----------------" << endl;
      cout << "You can't quit now!\n";
      cout << "----------------" << endl;
      cout << "Spongebob must work in order to feed Gary." << endl;
      cout << endl;
      usleep(3000000);
         
          while ((decide != "check")){
          cout << "Check the register again." << endl;
          cout << "For register, enter 'check', to leave enter 'home'." << endl;
          cin >> decide;
          cout << endl;
          }
        cout << "Spongebob has checked and sees that Squidward is not currently there.\n\n";
        usleep(3000000);
        cout << "Time to help out the customers in need!\n";
        usleep(3000000);
        
      
  }


                 

  cout << endl;
  cout << "Should Spongebob cook today?" << endl;
  cout << "Enter 'cook' for yes, and 'register' to stay." << endl;
  cout << endl;
  cin >> spongebobCookOrRegister;
  cout << endl;

    if ((spongebobCookOrRegister == "cook"))
    {
       
      cout << endl;
      cout << "Squidward hurriedly begins to work the register.\n";
       usleep(4000000);

      cout << "All tentacles busy pressing buttons.\n"; 
       usleep(4000000);
      cout << endl;
      cout << "Spongebob rushes to the back to begin cooking\nhis perfect Krabby Patties.\n\n";
       usleep(4000000);
      


cout << "                            |⍀ /| /|_/|  " << endl;
cout << "                           |⍀||-|⍀||-/|/|  " << endl;
cout << "                            ⍀⍀|⍀|//||/// " << endl;
cout << "           _..----.._       |⍀/⍀||//||||  " << endl;
cout << "         .'     o    '.     |||⍀⍀|/⍀⍀ || " << endl;
cout << "        /   o       o  ⍀    | './⍀_/.' | " << endl;
cout << "       |o        o     o|   |          | " << endl;
cout << "       /'-.._o     __.-'⍀   |          | " << endl;
cout << "       ⍀      `````     /   |          | "<< endl;
cout << "       |``--........--'`|    '.______.' "<< endl;
cout << "        ⍀              /  "<< endl;
cout << "         `'----------'`  "<< endl;

cout << "The pungent aroma of burgers can smelled by all!\n";
    usleep(4000000);

    }
    else {
        usleep(3000000);
      cout << "It looks like Squidward has the cooking all under control, so Spongebob stays at the register to help customers." << endl;
    }
  
  
}
  




// 4. Ryan
void ryan()
    {
   

  if(spongebobCookOrRegister == "cook")
    {
       usleep(3000000);
        cout << "\n\n-----------------------" << endl;
        cout << "THE FIRST ORDER IS IN!" << endl;
        cout << "-----------------------\n\n" << endl;
        usleep(4000000);

        cout << "*Pearl Krabs ordered:*\n1. Krabby Patty\n2. Kelp Rings.\n" << endl;
        usleep(5000000);

        cout << "\nSpongebob knows these items will be popular today." << endl;
        usleep(5000000);

        cout << "He bulk prepares the ingredients with love." << endl;

        
    }
  else // register
    {
        usleep(3000000);
        cout << "Squidward already burned his tentacle on the grill.\n\n" << endl;
        usleep(4000000);

        cout << "---------------------------" << endl;
        cout << "THE FIRST CUSTOMER IS HERE!" << endl;
        cout << "---------------------------\n\n" << endl;
        usleep(5000000);

        cout << "*Pearl Krabs* is hungry. Her dad will pay for her...\n1. Krabby Patty\n2. Coral Bits.\n" << endl;
        usleep(5000000);

        cout << "Spongebob charges Pearl 43¢." << endl;
        usleep(5000000);

        cout << "\nSpongebob memorizes the grand total." << endl;
        usleep(5000000);
        cout << "He has a hunch this order will be popular today." << endl;
        usleep(3000000);


        
    }
    
    }

// End. Elias
void elias()
    {
        
        

    cout << "" << endl;
cout << "After work Spongebob goes home.\n\n";
usleep(3000000);

cout << " Today was a successful day at the Krusty Krab for Spongebob. He ";
if ( spongebobCookOrRegister == "cook")
cout << "cooked ";
else if ( spongebobCookOrRegister == "register" )
cout << "was on the register ";

cout << "along with Sqidwards help and served Pearl and other Bikini Bottom residents today. \n\n" << endl ;
usleep(3000000);

cout << "Spongbob returned home using ";
//cout << spongebobPath ;
switch(spongebobPath) 
        { 
            case 1:
            cout << "Eel Avenue";
            break;

            case 2:
            cout << "Starfish Lane";
            break;

            case 3:
            cout << " "; // not a path option
            break;

            case 4:
            cout << "Beach Street";
            break;
            
            default:
            cout << "toward Krusty Crab";
            break;
        }

cout << " and avoids plankton with ease. He arrived home and took off his " << tieColor;
cout << " tie.\n\n";
usleep(3000000);

cout << "He checked on Gary and saw that he was ";

if ( garyFedBoolean == 1 )
    {
cout << "fed and falling asleep.\n\n";
usleep(3000000);
    }

else if ( garyFedBoolean == 0 )
    {
cout << "looking thin thanks to the diet he is on.\n\n" << endl;
usleep(3000000);
    }

cout << "\n\nAfter this long day Spongebob is tired and ready to get a good nights sleep and rest for a busy day tomorrow.\n\n";

usleep(3000000);

    cout << "\n- - - - - - - - - - - - - - " << endl;
    cout << "🎊  THANKS FOR PLAYING! 🎊" << endl;
    cout << "- - - - - - - - - - - - - - " << endl << endl;
    
    } 