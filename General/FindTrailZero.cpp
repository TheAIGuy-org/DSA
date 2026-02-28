#include<iostream>
using namespace std;

int Factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int CountTrailZero(int n){
    int count=0;
    while(n>0){
        int digit=n%10;
        if(digit==0){
            count++;
        }
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;
    int fact=Factorial(n);
    cout<<"The number of trailing zeros in the factorial of the number you entered is: "<<CountTrailZero(fact)<<endl;
}