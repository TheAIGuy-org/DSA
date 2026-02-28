#include<iostream>
#include<cmath>
using namespace std;

int CountDigit(int n){
    int count=0;
    while(n>0){
        int digit=n%10;
        count++;
        n=n/10;
    }
    return count;
}

int CheckArmstrong(int n){
    int temp=n;
    int count=CountDigit(n);
    int arm=0;
    temp=n;
    while(temp>0){
        int digit=temp%10;
        arm+=pow(digit, count);
        temp=temp/10;
    }

    if(arm==n){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int n=0;
    cout<<"Enter an Integer: ";
    cin>>n;
    cout<<"The number you entered is an Armstrong number: "<<CheckArmstrong(n)<<endl;
}