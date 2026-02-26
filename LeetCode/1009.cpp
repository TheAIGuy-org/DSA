#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;
    if(n==0){
        cout<<"The complement of the number is: 1";
        return 0;
    }
    int mask=0, temp=n;
    while(temp){
        mask=(mask<<1)|1;
        temp>>=1;
    }
    cout<<"The complement of the number is: "<<(n^mask)<<endl;
}