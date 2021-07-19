#include<bits/stdc++.h>
using namespace std;
bool pt(int a, int b, int c){
    int x = max(a,max(b,c));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    else if(x==b){
        y=a;
        z=c;
    }
    else{
        y=a;
        z=b;
    }
    if((x^2)==((y^2)+(z^2))){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(pt(a,b,c)){
        cout<<"Pythagorian Triplet."<<endl;
    }
    else{
        cout<<"Not a Pythagorian triplet."<<endl;
    }
    return 0;
}