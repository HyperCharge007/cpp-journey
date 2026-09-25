#include<iostream>
#include<random>

using namespace std;

int main()
{
    mt19937 mt{ std::random_device{}() };

    return 0;
}