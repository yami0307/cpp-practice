#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    char c;
    cout<<"Enter an operator:"<<endl;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Enter another operator."<<endl;
        break;
    }
    return 0;
}