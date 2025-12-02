#include<iostream>
using namespace std;

int main(){
    int num, sum=0, max, min;

    cout<<"Enter 10 numbers:\n";
    for(int i=0; i<10; i++){
        cin>>num;
        sum += num;

        if(i==0){
            max = min = num;
        }
        else{
            if(num > max) max = num;
            if(num < min) min = num;
        }
    }

    cout<<"Sum = "<<sum<<endl;
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min<<endl;

    return 0;
}
