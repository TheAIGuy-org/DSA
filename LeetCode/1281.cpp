#include<iostream>
using namespace std;

int main(){
    int n, i, prod = 1, sum = 0, sub, p;
    cout<<"Enter an Integer: ";
    cin>>n;
    i=n;
    while(i>0){
        p=i%10;
        prod*=p;
        sum+=p;
        i = i / 10;
    }
    sub=prod-sum;
    cout<<"The difference between the product and sum of the digits is: "<<sub;
}