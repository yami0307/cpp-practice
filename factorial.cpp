#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact = 1;
    while(n>0){
        fact*=n;
        n--;
    }
    cout<<fact;
}