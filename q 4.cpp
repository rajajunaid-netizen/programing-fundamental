#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    if(a % b == 0)
        cout<<b<<" is multiple of "<<a;
    else
        cout<<"Not a multiple";
}
