//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

#include<iostream>
using namespace std;
int fact(int t){
    int factorial=1;
    for(int i=2;i<=t;i++){
        factorial*=i;
    }
    return factorial;
}
void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pascal(n);
    return 0;
}