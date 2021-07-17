#include<iostream>
using namespace std;
int main (){
    char c;
    int isLowerCase, isUpperCase;
    cin>>c;
    isLowerCase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUpperCase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isLowerCase || isUpperCase){
        cout<<c<<" is a vowel."<<endl;
    }
    else{
        cout<<c<<" is a consonant."<<endl;
    }
    return 0;
}