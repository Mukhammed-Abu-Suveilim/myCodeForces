#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str, new_Str;
    cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] != '+')
		{
			new_Str.push_back(str[i]);
		}
	}
	sort(new_Str.begin(), new_Str.end());
	cout << new_Str[0];
	for (int i = 1; i < new_Str.length(); i++)
	{
		cout << "+" << new_Str[i];
	}
	return 0;
}

