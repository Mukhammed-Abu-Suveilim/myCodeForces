#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string word = "";
	for(int i = 0; i <= n; i++)
	{
		string temp;
		cin >> temp;
		if (temp.size() > 10)
		{
			word += temp[0] + to_string(temp.size() - 2) + temp[temp.size() -1];
		}
		else
		{
			word += temp;
		}
		if (i != n-1)
		{
			word += "\n";
		}
	}
	cout << word << endl;
   
 
}