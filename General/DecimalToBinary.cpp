#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n, ans=0,i=0;
    cout<< "Enter a decimal number: ";
    cin>>n;
    while(n!=0){
        int bit=n%2;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }

    cout<<"The binary equivalent of: "<<n<<" is: "<<ans<<endl;

}
