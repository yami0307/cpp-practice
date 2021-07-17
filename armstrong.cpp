#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0,lastd,originaln;
    originaln = n;
    while(n>0){
        lastd = n%10;
        sum += pow(lastd,3);
        n = n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong Number."<<endl;
    }
    else{
        cout<<"Not an armstrong number."<<endl;
    }
    return 0;
}