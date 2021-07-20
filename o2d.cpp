#include<bits/stdc++.h>
using namespace std;
int octaltoDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int a = n%10;
        ans = x*a;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<octaltoDecimal(n)<<endl;
    return 0;
}