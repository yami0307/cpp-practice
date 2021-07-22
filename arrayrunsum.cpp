#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        arr2[i] = sum;
    }
    cout<<"The array of sum is : ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}