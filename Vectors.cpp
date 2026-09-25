#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector - dynamic array
    vector<int> tickets = {1000, 2005, 1500};

    cout<<'{';
    for (int ticket:tickets){
        cout<<ticket<<' ';
    }
    cout<<'}'<<endl;
    
    cout<<tickets.size()<<endl;
    cout<<tickets.empty()<<endl;
}