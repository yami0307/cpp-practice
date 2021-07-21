#include<bits/stdc++.h>
using namespace std;
int maxm(int a, int b,int c){
    int ans = max(a,max(b,c));
    return ans;
}
int minm(int a,int b,int c){
    int ans2 = min(a,min(b,c));
    return ans2;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximum among the three numbers is "<<maxm(a,b,c)<<endl;
    cout<<"Minimum among the three numbers is "<<minm(a,b,c)<<endl;
}