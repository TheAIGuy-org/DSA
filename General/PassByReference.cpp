#include<iostream>
using namespace std;

void ChangeReference(int &n){
    n=10;
    cout<<"Value of n inside function: "<<n<<endl;
}

int main(){
    int n=5;
    cout<<"Value of n before function call: "<<n<<endl;
    ChangeReference(n);
    cout<<"Value of n after function call: "<<n<<endl;
}