#include<iostream>
#include<string>

using namespace std;

int main(){
    int a,b,c;
    cout<<"enter three numbers: "<<endl;
    cin>>a>>b>>c;

    if ((a>=c && a<=b)|| (a>=b && a<=c)){
        cout<<a<<" is 2nd largest"<<endl;
    }
    else if ((b>=c && b<=a)|| (b>=a && b<=c)){
        cout<<b<<" is 2nd largest"<<endl;
    }
    else if ((c>=a && c<=b)|| (c>=b && c<=a)){
        cout<<c<<" is 2nd largest"<<endl;
    }
}