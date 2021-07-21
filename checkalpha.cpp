#include<bits/stdc++.h>
using namespace std;
bool checkAlpha(char c){
    if((c>=65 && c<=90)||(c>=97 && c<=122)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    char c;
    cin>>c;
    if(checkAlpha(c)){
        cout<<"It is an alphabet."<<endl;
    }
    else{
        cout<<"It is not an alphabet."<<endl;
    }
    return 0;
}