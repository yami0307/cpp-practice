#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    bool arr2[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    for(int i = 0;i<n;i++){
        maxNo = max(maxNo,arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]+c>=maxNo){
            arr2[i] = true;
        }
        else{
            arr2[i] = false;
        }
    }
    for(int i = 0 ;i<n;i++){
        arr2[i]==0?cout<<"false ":cout<<"true ";
    }
    return 0;
}