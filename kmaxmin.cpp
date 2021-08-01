//To find the kth maximum and minimum element of the array
//Approach: Sort the array using any sorting algorithm in this case we are using selection sort
//Then print a[k-1] as the minimum element 
//and a[n-1-(k-1)] as the maximum element
//Time Complexity : O(n^2)   -   same as the sorting algorithm

#include<bits/stdc++.h>
using namespace std;

void selsort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"The sorted array is : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printa(int a[], int n, int k){
    cout<<"The "<<k<<"th maximum and minimum element is "<<a[n-1-(k-1)]<<" and "<<a[k-1]<<" respectively."<<endl;
}

int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    selsort(a,n);
    printa(a,n,k);
    return 0;
}