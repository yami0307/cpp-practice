//Selection Sort in an array
//Input : array size and elements
//Output : an array osrted in ascending order
//Logic : Find the minuimum value in the "unsorted" array and swap it with the first element of the "unsorted" array
//Time Complexity : O(n^2)

#include<iostream>
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
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements of the array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    selsort(arr,n);
    return 0;
}