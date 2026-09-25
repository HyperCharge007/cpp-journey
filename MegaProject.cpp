#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    cout<<"=====NOCHOICE CAFE====="<<endl;
    cout<<"1 for Menu"<<endl;
    cout<<"2 for Order Food"<<endl;
    cout<<"3 for View Cart"<<endl;
    cout<<"4 for Checkout"<<endl;
    cout<<"5 for Exit"<<endl;

    vector<string> Items = {"Burger", "Pizza", "Sandwich", "Coffee", "Fries"};
    vector<string> UserItems;
    vector<int> Prices = {120, 250, 100, 80, 90};
    int userPriceTotal=0;

    int choiceNumberInput;
    cout<<"Enter input number: ";
    cin>>choiceNumberInput;

    if (choiceNumberInput==1){
        //view menu
        cout<<"=====MENU====="<<endl;
        for (int i=0; i<Items.size(); i++){
            cout<<Items[i]<<"- $"<<Prices[i]<<endl;;
        }

        main();
    }
    else if (choiceNumberInput==2){
        //order food
        int userItemNumber;
        cout<<"Enter item number: ";
        cin>>userItemNumber;
        UserItems.push_back(Items[userItemNumber-1]);
        userPriceTotal += Prices[userItemNumber-1];

        cout<<"Thank you for ordering! Your cart is: "<<endl;

        for (int i=0; i<UserItems.size(); i++){
            cout<<UserItems[i]<<endl;
            cout<<"Net Total: $"<<userPriceTotal<<endl;
        }

        string userCheckoutInput;
        cout<<"Proceed for checkout? (Y/N)"<<endl;
        cin>>userCheckoutInput;
        if (userCheckoutInput=="Y"){
            int userAmount;
            cout<<"Type the amount to proceed payout: "<<endl;
            cin>>userAmount;
            if(userAmount==userPriceTotal){
                cout<<"Bill paid. Thanks and do visit again!"<<endl;
                main();
            }
            else{
                cout<<"Invalid amount, transaction failed!"<<endl;
                main();
            }
        }
    }   
    else if (choiceNumberInput==4){
        //checkout
    }   
    else if (choiceNumberInput==5){
        //exit
        return 0;
    }
}