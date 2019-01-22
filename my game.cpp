#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<fstream>

// This program shows extensive research into all three games with using switch statements, input files, input data and outputting data, and much more. 

using namespace std;


void Game1();
void Game2();
void Game3();
int exit();
int userinput(); 

// using switch statment to choose which gamne to play. 
int main()
{
	int choice=1;
	while (choice != 0)
	{
		cout << "" << endl;
		cout << "" << endl;
		cout << "Welcome to my game menu in which you can choose from three games to play." << endl;
		cout << "please choose from one of the following choice and have fun!" << endl;
		cout << "press 1 for high and low" << endl;
		cout << "press 2 for story time" << endl;
		cout << "press 3 for Hangman " << endl;
		cout << "Press 0 to EXIT" << endl;
		cout << endl;

		choice = userinput();
		switch (choice)
		{
		case 1:
			cout << "you have choosen game 1." << endl;
			Game1();
			break;
		case 2:
			cout << "you have choosen game 2." << endl;
			Game2();
			break;
		case 3:
			cout << "you have choosen game 3" << endl;
			Game3();
			break;
		case 0:
			exit();
			break;
		default:
			cout << "please enter one of the given choices." << endl;
			break;
		}
	}
	
}

int userinput()
{
	int yes;
	cin >> yes;
	return yes;
}
// random number generator and guess what number it is
void Game1()
{
	int choose = 0;
	int randomnumber = rand()%100+1;
	int tries = 5;
	int guess;
	
	cout << " You have choosen the game higher or lower." << endl;
	cout << " In this game you will try and guess the correct all real number between 0 - 100." << endl;
	cout << " the game will tell you whether or not you have guessed the correct number by either saying: " << endl;
	cout << " " << endl;
	do 
	{
		cout << "you have" << tries << "tries remaning\n\n." << endl;
		cout << "enter a number: " << endl;
		cin >> guess;

		tries--;
		if (tries < +0) {
			break;
		}

		if (guess < randomnumber) {
			cout << "that is too low ... \n\n" << endl;
		}
		else if (guess > randomnumber) {
			cout << "that is too high... \n\n" << endl;
		}

	} while (guess != randomnumber);
	if (guess == randomnumber) {
		cout << "congratulations you win!\n\n" << endl;
	}
	else {
		cout << "you lose... \n\n" << endl;
		cout << "the number was" << randomnumber << endl;
	}

}

// using switch statements to choose which story to read and inputting data for the story.
void Game2()
{
	float age;
	string color;
	string eye;
	string movie;
	string name;
	int voice=1;
	string opinion;

	while (voice != 0)
	{
		cout << "Welcome to your story" << endl;
		cout << " please enter your First name" << endl;
		cin >> name;
		cout << "Please enter your age, example, 26 or 26.5." << endl;
		cin >> age;
		cout << "please enter a color" << endl;
		cin >> color;
		cout << "please enter a movie with one word in the movie's name only" << endl;
		cout << "(ex: dog's life= life)" << endl;
		cin >>  movie;
		cout << "please enter your eye color." << endl;
		cin >> eye;
		cout << "with the information you have given, please choose a number between 1 - 4 for a story, or press 0 to go back to menu." << endl;
		cout << " " << endl;

		cout << "" << endl;
		cout << "press 1 for story 1" << endl;
		cout << "press 2 for story 2" << endl;
		cout << "press 3 for story 3 " << endl;
		cout << "press 4 for story 4" << endl;
		cout << "Press any number to exit to EXIT" << endl;
		cout << endl;
		voice = userinput();
		switch (voice)
		{
		case 1:
			cout << "you have choosen story 1." << endl;
			cout << endl << "There once was a dirty goblin named " << name << ", he had " << age << " warts on his face and nobody liked talking to him." << endl;
			cout << "His feet stank and were varying shades of " << color << " and " << eye << '.' << endl;
			cout << "His everyday conversation was said to be not only unbearable, but as annoying as the opening scene of " << movie << '.' << endl;
			cout << "Everyone, even the other goblins hated " << name << ", and he was quite sad.";
			cout << " did you like the story?" << endl;
			cin >> opinion;
			cout << "well since i can't read your feedback i'm sure your opinion was fantastic." << endl;
			system("pause");
			break;
		case 2:
			cout << " You have shoosen story 2" << endl;
			cout << "One rainy day on Halloween," << name << " was walking down the street trying to hurry home." << endl;
			cout << "Today happened to be the day the they turned" << age << "." << endl;
			cout << "They stopped in the rain for a moment when they saw a car drive by that was their favorite color" << color << "." << endl;
			cout << "Once it drove by they realized it started to rain harder so they quickly hurried home to watch" << movie << "." << endl;
			cout << "At the end of the movie they realilzed that the main actor had the same eye color as them which was" << eye << "." << endl;
			cout << "Finally once the movie was over they went to bed awaiting another day." << endl;
			cout << "The end" << endl;
			cin >> opinion;
			cout << "well since i can't read your feedback i'm sure your opinion was fantastic." << endl;
			system("pause");
			break;
		case 3:
			cout << "you have choosen story 3" << endl;
			cout << " Hello " << name << " your, " << age << " years old." << endl;
			cout << " Since your eyes are " << eye << " you should trya and get a cow." << endl;
			cout << " Why a cow? cause why not you just watched " << movie << " and decided to get a cow, enjoy. " << endl;
			cout << " the End." << endl;
			cout << " did you like the story?" << endl;
			cin >> opinion;
			cout << "well since i can't read your feedback i'm sure your opinion was fantastic." << endl;
			system("pause");
			break;
		case 4:
			cout << " You have choosen story 4" << endl;
			cout << " Why's your name " << name << "?"<<  "Why's your eyes " << eye << "?" << endl;
			cout << " Why say your " << age << "years old? Why not say you young or old or whatever." << endl;
			cout << " Why do you like " << movie << " why not like a different movie why does this one appeal to you? " << endl;
			cout << " why am I even asking you these questions? Why are we even here? What is Life?" << endl;
			cout << " the End." << endl;
			cout << " did you like the story?" << endl;
			cin >> opinion;
			cout << "well since i can't read your feedback i'm sure your opinion was fantastic." << endl;
			system("pause");
			break;
		case 0:
			cout << "you have decided not to read a story" << endl;
			system("pause");
			break;
		default:
			cout << "You have decided not to read a story." << endl;
			system("pause");
			return;
		}
		return;
	}
}
// Hangman game, will have infiles worth of words. 
const int MAX_TRIES = 6;
int letterFill(char, string, string&);
int hangman(int State);
ifstream indata;
void Game3()
{
	char letter;
	int num_of_wrong_guesses = 0;
	string word;
	int State=1;
	int set=1;
	int rando = rand() % 10;
	string words;
	//{
		//"america",
	//	"dictator",
		//"lime",
		//"carshow",
		//"puppy",
		//"iphone",
		//"dog",
	//	"jazz",
	//	"dictionary",
	//	"westminster"
	//};
		cout << "" << endl;
		cout<< "Please choose the catagory of words you would like to play with." << endl;
	cout << "press 1 for animals" << endl;
	cout << "press 2 for countris" << endl;
	cout << "press 3 for random words " << endl;
	cout << "Press any number to exit to EXIT" << endl;
	cout << endl;
	set = userinput();

	
	switch (set)
	{
	case 1:
		cout << "you have choosen animal word set." << endl;
		indata.open("animals.txt");
		for (int i = 0;i < rando ; i++) {
			indata >> words;
		
		}
		cout << words;
		break;
	case 2:
		cout << "you have choosen Country word set." << endl;
		indata.open("countries.txt");
		for (int i = 0;i < rando; i++) {
			indata >> words;
		}

		break;
	case 3:
		cout << "you have choosen Random Words word set" << endl;
		indata.open("random.txt");
		for (int i = 0;i < rando; i++) {
			indata >> words;
		}
		break;
	case 0:
		exit();
		break;
	default:
		cout << "please enter one of the given choices." << endl;
		break;
	}


	srand(time(NULL));
	int n = rand() % 10;
	word = words;

	string unknown(word.length(), '*');

	cout << "\n\nWelcome to hangman, Guess the word to live";
	cout << "\n\nEach letter is represented by a star.";
	cout << "\n\nYou have to type only one letter in one try";
	cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
	cout << endl;

	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n" << unknown;
		cout << "\n\nGuess a letter: ";
		cin >> letter;
		if (letterFill(letter, word, unknown) == 0)
		{
			cout << endl << "Whoops! That letter isn't in there!" << endl;
			num_of_wrong_guesses++;
			hangman(State);
			State++;
		}
		else
		{
			cout << endl << "You found a letter! Isn't that exciting!" << endl;
		}

		cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
		cout << " guesses left." << endl;

		if (word == unknown)
		{
			cout << word << endl;
			cout << "Good job Dude!";
			break;
		}
	}
	if (num_of_wrong_guesses == MAX_TRIES)
	{
		cout << "\nSorry, you lose...you've been hanged." << endl;
	hangman(State);  
	cout << "The word was : " << word << endl << endl;

	}
	cin.ignore();
	cin.get();
	return;
}
int letterFill(char guess, string secretword, string &guessword)
{
	
	int i;
	int matches = 0;
	int len = secretword.length();
	for (i = 0; i< len; i++)
	{
		if (guess == guessword[i])
			return 0;
		if (guess == secretword[i])
		{
			guessword[i] = guess;
			matches++;
		}
	}
	return matches;
}
// drawing of the hangman
 
int hangman(int State)
{
	if (State == 6)
	{

		cout << endl << endl
			<< "   +----+     " << endl
			<< "   |    |     " << endl
			<< "   |    O     " << endl
			<< "   |   /|\\   " << endl
			<< "   |   / \\   " << endl
			<< "   |Your Dead " << endl
			<< "  ============" << endl << endl;
	}
	else if (State == 5)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|\\ " << endl
			<< "   |     \\ " << endl
			<< "   |       " << endl
			<< "  ============" << endl << endl;
	}
	else if (State == 4)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|\\ " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 3)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |   /|  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 2)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |    O  " << endl
			<< "   |    |  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	else if (State == 1)
	{
		cout << endl << endl
			<< "   +----+  " << endl
			<< "   |    |  " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "   |       " << endl
			<< "  =============" << endl << endl;
	}
	return 0;
}

	// exit prgram if choosen in the main menu

int exit()
{
	cout << " Hope you had fun and if you didn't even play a game or didn't have fun well, that stinks." << endl;
	return 0 ;
}