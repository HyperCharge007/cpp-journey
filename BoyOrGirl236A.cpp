#include<iostream>
#include<string>

using namespace std;

int main()
{
    string username;
    cin >> username;

    int counter = 0;

    for (int i = 0; i < username.length(); i++)
    {
        counter++;

        for (int j = 0; j < i; j++)
        {
            if (username[j] == username[i])  
            {
                counter--;
                break;
            }

        }
    }

    if (counter % 2 == 1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

    return 0;
}