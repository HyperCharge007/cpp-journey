#include<iostream>

using namespace std;

int main()
{
    int s[4];

    int counter = 0;
    
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
        counter++;

        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                counter--;
                break;
            }
        }
    }

    cout << 4-counter << endl;

    return 0;
}