//binary search in arrays
//Input:array-size,array elements,key to be searched
//Output:position of the key in the array.. if not found returning -1
//Time complexity is o(logn) : less than linear search

#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements of the array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<endl<<"Enter the key : ";
    cin>>key;
    cout<<endl;
    cout<<"Index of the key in the array "<<binarySearch(arr,n,key)<<endl;
}