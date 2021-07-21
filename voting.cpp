#include<bits/stdc++.h>
using namespace std;
bool checkEligibility(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age <= 0){
        cout<<"Please enter a valid age."<<endl;
    }
    else{
        if(checkEligibility(age)){
            cout<<"You are eligible for voting. "<<endl;
        }
        else{
            cout<<"You are not eligible for voting. "<<endl;
        }
    }
    return 0;
}