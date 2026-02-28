#include<iostream>
using namespace std;

int FactorialNum(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;

    cout<<"The factorial of the number you entered is: "<<FactorialNum(n)<<endl;
}