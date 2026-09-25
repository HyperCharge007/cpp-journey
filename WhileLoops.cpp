#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector <string> cities = {"NYC", "London", "Paris", "Tokyo", "Dubai"};

    size_t i = 0;
    while (i<cities.size()){
        cout<<i+1<<":"<<cities[i]<<endl;
        i++;
    }
}