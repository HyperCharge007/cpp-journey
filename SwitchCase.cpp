#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string items[] = {"red potion", "green potion", "blue potion", "hamburger", "super red potion"};

    int item = 4; //index refers to item

    switch (item){
        case 4:
            cout<<"attack strength increased"<<endl;
        case 3:
        case 0:
            cout<<"recovered 50 HP"<<endl;
            break;

        case 1:
            cout<<"cured poison status"<<endl;
            break;

        case 2:
            cout<<"recovered 20 MP"<<endl;
            break;

        default:
            cout<<"Nothing happened."<<endl;
            break;
    }

    
}