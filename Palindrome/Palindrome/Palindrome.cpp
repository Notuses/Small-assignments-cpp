#include <iostream>

using namespace std;

string word;
void WriteWord();

void CheckIfPalindrome(string word)
{
    string reversedWord;
    for (int i = word.size() - 1; i >= 0; i--)
    {
        reversedWord += word[i];
    }

    if (word == reversedWord)
        cout << endl << word << " is an polidrome (" << word << " & " << reversedWord << ")." << endl;
    else
        cout << endl << word << " is NOT an polidrome (" << word << " & " << reversedWord << ")." << endl;
    WriteWord();
}

void WriteWord()
{
    cout << "Type a word to check if it is a palindrome." << endl;
    cin >> word;
    CheckIfPalindrome(word);
}



int main()
{
    WriteWord();

    return 0;
}
