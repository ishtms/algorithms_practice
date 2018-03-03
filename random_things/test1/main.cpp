// Guys, I made a cool program where you have to guess the random number. It is a bit complicated, however it is almost based on what we learnt till now :)

#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
 // declaring variables
 int randomNumber, option, guess, guesses;
 char option1;
 do
 {
  do
  {
   system("CLS");
   // Title
   cout << "Welcome to the Number Guesser!" << endl <<
    //options
    "1) 10" << endl << "2) 50" << endl << "3) 100" << endl <<
    "Pick an option: ";
   cin >> option;
   if (option != 1 && option != 2 && option != 3)
   {
    cout << "Wrong Option, try again!" << endl;
    system("PAUSE");
   }
   //checking if picked option is legit
  } while (option != 1 && option != 2 && option != 3);

  // Randomizes number based on option picked
  srand(time(0));
  switch (option)
  {
  case 1:randomNumber = 1 + (rand() % 10);
   break;
  case 2:randomNumber = 1 + (rand() % 50);
   break;
  case 3:randomNumber = 1 + (rand() % 100);
   break;
  }
  //Counter to count number of guesses
  guesses = 1;
  do
  {
   //Entering your guess
   cout << "Enter your guess: ";
   cin >> guess;
   //Hints
   if (guess < randomNumber)
   {
    cout << "Too low" << endl;
   }
   else
   {
    if (guess > randomNumber)
    {
     cout << "Too high" << endl;
    }
    else
    {
     //Result
     cout << "You guessed it in ";
     guesses == 1 ? cout<< guesses << " try!" : cout<<guesses <<" tries." << endl;
    }
   }
   //If not guessed, it loops
   guesses++;
  } while (guess != randomNumber);
  cout << "Do you want to quit? (y/n): ";
  cin >> option1;
 } while (option1 == 'n' || option1 == 'N');
  system("PAUSE");
  return 0;
}