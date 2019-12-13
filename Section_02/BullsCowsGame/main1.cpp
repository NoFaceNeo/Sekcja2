#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

// the entry point to the game
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain =  AskToPlayAgain();
	}
	while (bPlayAgain);

	return 0; //exit application
}


// introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows!!\n";
	cout << "Be my guest.\n";
	cout << "Get some good beverage, and we are good to go!!\n";
	cout << "You think you will be able to guess the " << WORD_LENGTH;
	cout << " letter isogram, that i'm thinking of?\n ";
	cout << endl;
	cout << "Let's see...";
	cout << endl;
	return;
}

void PlayGame()
 {
	// loop for number of turns f guesses
	constexpr int NUBER_OF_TURNS = 5;
	for (int count = 1; count <= NUBER_OF_TURNS; count++)
	{
		string Guess = GetGuess();
		cout << "So... your guess was: " << Guess << endl;
		cout << endl;
	}

	{
		GetGuess();
		cout << endl;
	}
}

string GetGuess()
{
	// get a guess from the player
	cout << "What's your guess, player?	";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Would you mind another round (y/n)?\n";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

