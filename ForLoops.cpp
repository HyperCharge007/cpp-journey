#include<vector>
#include<iostream>

using namespace std;

int main(){
    //3S= Start, Stop, Step
    vector<int> grades = {97, 95, 98, 97, 94, 83};

    for(size_t i=0; i<grades.size(); i++){
        cout<<grades[i]<<" ";
    }
    cout<<endl;

    for(int i=grades.size()-1; i>=0; i--){
        cout<<grades[i]<<" ";
    }
    cout<<endl;

    for(int grade : grades){
        cout<<grade<<" ";
    }
    cout<<endl;
}