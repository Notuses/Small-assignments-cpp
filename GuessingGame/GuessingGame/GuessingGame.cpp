
#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;

int theNumber;
int tries = 1;
int guessedNumber;
void GuessTime();

void TryAgain(string text)
{
    cout << text << endl;
    cin.clear();
    std::cin.ignore(256, '\n');
    GuessTime();
}

void GuessTime() 
{
    cout << "Guess the number between 1 and 10! " << endl;
    cin >> guessedNumber;
    if (!cin)
        TryAgain("Only numbers allowed! Try again");
    if (guessedNumber != theNumber)
    { 
        TryAgain("Wrong number! Try again");
        tries++;
    }
}


int main()
{
    unsigned seed = time(0);
    srand(seed);
    theNumber = rand() % 3 + 1;
    GuessTime();

    string trytries = tries > 1 ? "tries." : "try.";
    cout << endl << "Congratulations! You have guessed the correct number: " << theNumber << ". It took you " << tries << " " << trytries << endl;
    
    return 0;
}
