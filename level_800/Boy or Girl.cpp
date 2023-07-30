
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    string input;
    cin >> input;
    int count = input.size();
    sort(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++)
    {
       if (input[i] == input[i + 1])
       {
            count--;
       }
    }
    
    if (count%2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    } else
    {
        cout << "IGNORE HIM!" << endl;
    }
}