#include <iostream>

using namespace std;

int NumberA = 3;
int NumberB = 7;

int& a = NumberA;
int& b = NumberB;

int *aPtr = &NumberA;
int *bPtr = &NumberB;


void ShowNumbers() {
    cout << "Number A: " << NumberA << " Number B: " << NumberB << endl; 
}

void SwapUsingSTL() {
    swap(NumberA, NumberB);
    cout << "Swapped Number A and Number B using STL swap" << endl;
    ShowNumbers();
}

void SwapUsingReferences() {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Swapped Number A and Number B using refrences" << endl;
    ShowNumbers();
}

void SwapUsingPointers() {
    int temp;
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
    cout << "Swapped Number A and Number B using pointers" << endl;
    ShowNumbers();
}


int main()
{
    ShowNumbers();
    SwapUsingSTL();
    SwapUsingReferences();
    SwapUsingPointers();

    return 0;
}
