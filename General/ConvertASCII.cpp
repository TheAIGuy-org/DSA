#include<iostream>
using namespace std;

void ConvertASCII(char c){
    int asciiValue=int(c);
    int asciiConvertValue=0;
    if(asciiValue>=97 && asciiValue<=122){
        asciiConvertValue=asciiValue-32;
        cout<<char(asciiConvertValue)<<endl;
    }
    if(asciiValue>=65 && asciiValue<=90){
        asciiConvertValue=asciiValue+32;
        cout<<char(asciiConvertValue)<<endl;
    }
}

int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    cout<<"The converted character is: ";
    ConvertASCII(c);
}