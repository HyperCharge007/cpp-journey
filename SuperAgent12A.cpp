#include<iostream>
#include<string>

using namespace std;

int main()
{
    char grid[3][3];

    bool symmetric = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] != grid[2-i][2-j])
            {
                symmetric = false;
            }
        }
    }

    if (symmetric)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}