#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t;

    cin >> s >> t;

    string temp_s;

    for (int i = 0; i < s.length(); i++)
    {
        temp_s += s[s.length() - i -1];
    }

    if (temp_s == t)
        cout << "YES" << endl;
    else   
        cout << "NO" << endl;
}