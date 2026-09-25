#include<iostream>

int main()
{
    int n;
    int counter = 0;
    std :: cin >> n;

    int petya, vasya, tonya;

    for (int i = 0; i < n; i++)
    {
        std :: cin >> petya >> vasya >> tonya;
        int sum = petya + vasya + tonya;
        if (sum >= 2) counter++;
    }

    std :: cout << counter << std :: endl;

    return 0;
}