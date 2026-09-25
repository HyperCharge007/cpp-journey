#include<iostream>

using namespace std;

int main()
{
    int n,k;
    int counter = 0;
    cin >> n >> k;

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[k-1] && scores[i] > 0) counter++;
    }

    cout << counter;
}