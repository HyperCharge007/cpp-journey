#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    //break - terminate the loop
    //continue - skip the current iteration of the loop

    //paint colors
    
    vector<string> colors = {"blue", "red", "green", "white", "black"};
    int paintCost = 10;

    vector<string> colorOrder = {"blue", "red", "blue", "green", "white", "black"};
    vector<int> quantityOrder = {6, 15, 9, 5, 3, 5};
    int budget = 200;

    for (size_t i = 0; i < colorOrder.size(); i++){
        string color = colorOrder[i];
        int quantity = quantityOrder[i];
        int cost = paintCost*quantity;
        cout<<"Order#"<< i<<": "<<color<<" x"<<quantity<<endl;
        if (budget==0){
            cout<<"Out of budget, cancelling remaining orders!"<<endl;
            break;
        }
        if (cost>budget){
            cout<<"Skipping order, not enough budget."<<"\n\n";
            continue;
        }
        budget -= cost;
        cout<<"-$"<<cost<<" Remaining budget: $"<<budget<<"\n\n";
    }
}