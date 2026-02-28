#include<iostream>
using namespace std;

int SumOfNum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the num: ";
    cin>>n;

    cout<<"The sum of the number you entered is: "<<SumOfNum(n)<<endl;
}