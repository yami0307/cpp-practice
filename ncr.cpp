#include<iostream>
using namespace std;
// int ncr(int n, int r){
//     int nfact=1, rfact=1, nrfact=1;
//     for(int i=1;i<=n;i++){
//         nfact*=i;
//     }
//     for(int i=1;i<=r;i++){
//         rfact*=i;
//     }
//     int t = (n-r);  
//     for(int i=1;i<=t;i++){
//         nrfact*=i;
//     }
//     int ans = nfact/(nrfact*rfact);
//     return ans;    
// }
// int main(){
//     int n,r;
//     cin>>n>>r;
//     if(r>n){
//         cout<<"Not Valid."<<endl;
//     }
//     else{
//     int ans = ncr(n,r);
//     cout<<ans<<endl;
//     }
//     return 0;
// }
// Optimized way
int fact(int t){
    int factorial = 1;
    for(int i = 1; i<=t;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cin>>n>>r;
    if(r>n){
        cout<<"Not Valid."<<endl;
    }
    else{
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    }
    return 0;
}