

#include <iostream>
using namespace std;

int main()
{
	int n, k; //n is the number of contestents and k is the place of the k-th contestent and n>k
	cin >> n >> k;
	int place[50]; //place is an int array with max size of 50 since n<= 50
	int count = 0;
	if(n >= k && k >= 1)
	{
		for(int i=1; i < n; i++)
		{
			cin >> place[i];
		}
		
		for (int i = 1; i < n; i++)
		{
			if (place[i] >= place[i+1] || place[i] >= 0)
			{
				if (place[i] > 0 && place[i] >= place[k])
				{
					count++;
				}
			} else
			{
				cout << "Wrong" << endl;
			}
		}
		cout << count << endl;
	}
	else
	{
		return 0;
	}
}

