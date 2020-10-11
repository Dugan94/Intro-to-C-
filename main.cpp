#include <iostream>
using namespace std;

int main()

{
  char corroded; //Silent when Key is turned, Y or N
  char clicking; // Not silent when key is turned, Y or No
  char cranking; // When car fails to start
  char silent; // No sound
  char noise; // sound

  cout << "Answer the following questions\n";
  cout << "with either Y for Yes or ";
  cout << "N or No.\n";
  cout << "Is the car silent when you turn the key?\n";
  cin >> silent;
  cout << "Are the battery terminals corroded?\n";
  cin >> corroded;
  cout << "Does the car make a clicking noise?\n";
  cin >> clicking;
  cout << "Does the car crank up but fail to start?\n";
  cin >> cranking;

  // Determine the battery terminals
  if (corroded == 'Y')
  {
    cout << "Clean the terminals and try starting again.\n";
  }
else // Batteries corroded
{
  cout << "Replace the cables and try again.\n";
}
// Determine if the car makes a clicking sound
if (clicking == 'Y')
{
  cout << "Replace the battery.\n";
}
else // Not clicking
{
  cout << " Does the car crank up but fail to start?\n";
}
if (cranking == 'Y')
{
  cout << "Check the spark plug connections.\n";
}
else // fail to start
{
  cout << "Take car in for service.\n";
}
return 0;
}











































