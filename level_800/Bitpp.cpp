#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, count = 0;
	string text;
	string plus = "++";
	string minus = "--";
	cin >> n;
	for(int i =1; i <= n; i++)
	{
		cin >> text;
		if(text.find(plus) != string::npos)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	cout << count << endl;
	return 0;

}
