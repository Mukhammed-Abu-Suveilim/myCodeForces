
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string word;
	cin >> word;
	string newWord = word;
	newWord[0] = toupper(word[0]);
	cout <<  newWord << endl;
}

