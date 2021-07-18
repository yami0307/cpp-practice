#include<iostream>
using namespace std;

void fib(int n){
    int t1 = 0,t2 = 1,t3=1;
    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return;
}
int main(){
     int n;
     cin>>n;

    fib(n);
    return 0;
}