//Reversal of an array using while loop and functions
//Time Complexity : O(n)

/*
#include<bits/stdc++.h>
using namespace std;
void reva(int a[], int n){
    int st = 0;
    int en = n-1;
    while(st<en){
        int temp = a[en];
        a[en] = a[st];
        a[st] = temp;
        st++;
        en--;
    }
}
void printar(int a[], int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    reva(a,n);
    cout<<"The reversed array is : "<<endl;
    printar(a,n);
    return 0;
}
*/

//Reversal of an array using recursion
//Approach same as before
//Time Complexity : O(n)

/*
#include<bits/stdc++.h>
using namespace std;
void reva(int a[], int st, int en){
    if(st>=en){
        return;
    }
    int temp = a[en];
    a[en] = a[st];
    a[st] = temp;
    reva(a,st+1,en-1);
}
void printa(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    reva(a,0,n-1);
    cout<<"The reversed array is: ";
    printa(a,n);
    return 0;
}
*/


//In Python we can use list slicing
/*
A = [1, 2, 3, 4, 5]
print(A[::-1])
*/