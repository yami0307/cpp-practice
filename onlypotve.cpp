#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n>0){
        sum+=n;
        cout<<"Enter another number:"<<endl;
        cin>>n;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}