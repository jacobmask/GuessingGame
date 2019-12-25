#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int max, guess;

	//Get maximum number to guess
	cout << "This is a guessing number game.\n";
	cout << "Please select the maximum number you'd like to be the range from 1 to infinite: ";
	cin >> max;

	//Generate the number
	srand(time(0)); //random number generator
	int potentiallyLargeRandom = rand();//picks the random number based off time
	int randValue = (potentiallyLargeRandom % max + 1); //gets a random value between 1 and their number, the plus 1 makes it not a 0 value
	cout << "What is your guess? ";
	cin >> guess; //get their first guess
		if (guess == randValue) // seeing if their first guess is right
		{
		cout << "You guess right in your first try!";
		return 0;//had to figure that I needed this because guessing the first time right it showed all If statements as true
		}
		else
		{
			if (guess != randValue)//if they guess wrong they are given another chance
			{
			cout << "Try again, this is your second chance: ";
			cin >> guess;
			}
		}
		if (guess == randValue) //Seeing if their second guess is right
		{
		cout << "You're second guess was right!";
		return 0;
		}

		else
		{
			if (guess != randValue) //if they guess wrong they are given one last chance
			{
			cout << "Try again, this is your last chance: ";
			cin >> guess;
			}
		}
		if (guess == randValue) //seeing if their third guess is right
		{
		cout << "You're third guess was right!";
		return 0;
		}

		else
		{
			if (guess != randValue) //If they guess wrong they are told to try again
			{
			cout << "You've guessed wrong three times, restart and  try again with smaller limits";
			}
		}
	return 0;
}
