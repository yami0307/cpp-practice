#include<iostream>
using namespace std;
bool oef(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(oef(n)){
        cout<<"Even number."<<endl;
    }
    else{
        cout<<"Odd number."<<endl;
    }
    return 0;
}