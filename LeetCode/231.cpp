#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;
    if(n<=0){
        cout<<"False"<<endl;
    }
    while(n%2==0){
        n/=2;
    }
    if(n==1){
        cout<<"True"<<endl;
    }   else{
        cout<<"False"<<endl;
    }
}

//or

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an Integer: ";
    cin>>n;
    int result = (n > 0) && ((n & (n - 1)) == 0);
    cout<<result<<endl;

}