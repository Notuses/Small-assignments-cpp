#include <iostream>
#include <vector>

using namespace std;

int collection [] { 5, 3, 7, 10, 1 };
int searchFor = 3;

vector<int> foundAt;

int main()
{
	int arrSize = sizeof(collection) / sizeof(collection[0]);

	for (int i = 0; i < arrSize; i++)
	{
		if (collection[i] == searchFor)
		{
			foundAt.push_back(i);
		}
	}


	if (foundAt.size() > 0)
	{
		string foundTxt = foundAt.size() > 1 ? "indexes: " : "index: ";

		cout << "Number was found at " << foundTxt;
		for (auto i = foundAt.begin(); i != foundAt.end(); i++)
		{
			cout << *i;
			if (i+1 != foundAt.end())
				cout << ", ";
			else
				cout << ".";
		}
	}
}
