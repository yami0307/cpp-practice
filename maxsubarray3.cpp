//3. Kadane's Algorithm
/* In this approach instead of creating an auxillary array we maintain a variable which stores the current sum.
If the current sum < 0. we change the current sum to 0.
If it is not < 0. We change the value of sum i.e. the answer.

Time Complexity : O(n)
Space Complexity : O(1)*/

#include<bits/stdc++.h>
using namespace std;
int maxsubsum(int a[], int n){
    int sum = 0;
    int curr = 0;
    for(int i = 0; i<n; i++){
        curr += a[i];
        if(curr<0){
            curr = 0;
        }
        sum = max(curr,sum);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<maxsubsum(a,n)<<endl;
    return 0;
}