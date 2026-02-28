#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(float &a, float &b){
    float temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=5, b=10;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;

    float x=2.5, y=3.5;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
}