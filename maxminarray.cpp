//Find maximum  annd minimum array of an element
//Approach: Traverse through the array and constantly update maxm and minm
//Time Complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int maxm = INT_MIN;
    int minm = INT_MAX;
    for(int i = 0; i<n; i++){
        maxm = max(maxm,a[i]);
        minm = min(minm,a[i]);
    }
    cout<<"The maximum element is : "<<maxm<<endl;
    cout<<"The minimum element is : "<<minm<<endl;
    return 0;
}

//We can either sort the a[] and then print a[0] and a[n-1] as min and max respectively.
//Time complexity will depend on the sorting algorithm

//We can use structs too - Need too learn that.