#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
     int number = (rand() % 100) + 1; 
      int guess = 0;
  
  do
  {
     cout << "Enter a Number (1-100): ";
     cin >> guess;
    
      
      if (guess > number)
      cout << "Guess lower Number!" << endl;
      
      else if (guess < number)
      cout << "Guess higher Number!" << endl;
      
      else
      cout << "You won the Game!" << endl;
       
       } 
       
       while (guess != number);
   
  return 0;
}
    