#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastd, rev = 0;
    while(n>0){
        lastd = n%10;
        rev = rev*10 + lastd;
        n = n/10;
    }
    cout<<rev;
    return 0;
}