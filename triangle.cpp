#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"The triangle is equilateral."<<endl;
    }
    else if(a==b||b==c||c==a){
        cout<<"The triangle is isosceles."<<endl;
    }
    else{
        cout<<"The triangle is scalene."<<endl;
    }
    return 0;
}