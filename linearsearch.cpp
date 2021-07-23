//linear search in arrays
//Input:array-size,array elements,key to be searched
//Output:position of the key in the array.. if not found returning -1
//Time Complexity = O(n)

#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}