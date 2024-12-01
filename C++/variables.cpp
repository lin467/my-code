#include <iostream>

using namespace std;

int main()
{
    string characterName = "John";
    int characterAge;
    characterAge = 30;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge <<" years old" << endl; 

    characterName = "Mike";
    //名字被更新为Mike
    cout << "He looked like " << characterName << endl;

    return 0;
}