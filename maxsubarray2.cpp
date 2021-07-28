//2. Auxillary Array Method
/* IDEA: In this method we create an auxillary array. We calculate the cumulative sum of the given array and store
it in the auxillary array with a condition. The condition is if the cumulative sum >0, we store the cumsum 
at the ith position in the aux array. But, if the cumsum <= 0, we store the ith element of the given array in the ith
position of the aux array. 
After that, the only thing we need is the max element in the aux_array.
So, we traverse again through the array and store the max sum in a new int variable called ans.
then we print ans.

Time Complexity : O(n)
Space Complexity : O(n) ~ For storing the auxillary array.*/

#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[], int n){
    int b[n];
    b[0] = a[0];
    for(int i = 1; i<n; i++){
        if(a[i] + b[i-1]>0){
            b[i] = a[i] + b[i-1];
        }
        else{
            b[i] = a[i];
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
       ans = max(ans,b[i]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<maxsum(a, n)<<endl;
    return 0;
}