#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string lineOfText = "Hello";

int main()
{
    unordered_map<char, int> occurrences;

    transform(lineOfText.begin(), lineOfText.end(), lineOfText.begin(), toupper);
    cout << lineOfText << endl;

    for (char c : lineOfText)
    {
        if (occurrences.find(c) == occurrences.end())
            occurrences.insert({ c, 1 });
        else
            occurrences[c]++;    
    }

    for (auto i = occurrences.begin(); i != occurrences.end(); ++i)
        cout << i->first << ": " << i->second << "." << endl;

    return 0;
}