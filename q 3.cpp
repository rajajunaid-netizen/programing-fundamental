#include<iostream>
using namespace std;

int main(){
    int inches, feet, remInches;
    cout<<"Enter height in inches: ";
    cin>>inches;

    feet = inches / 12;
    remInches = inches % 12;

    cout<<"Height = "<<feet<<" feet and "<<remInches<<" inches";
}
