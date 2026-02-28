#include<iostream>
using namespace std;

void Change(int n){
    n=10;
    cout<<"Value of n inside function: "<<n<<endl;
}

int main(){
    int n=5;
    cout<<"Value of n before function call: "<<n<<endl;
    Change(n);
    cout<<"Value of n after function call: "<<n<<endl;
}