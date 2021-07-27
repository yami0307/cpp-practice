//Understanding call by value and call by reference through pointers
#include<bits/stdc++.h>
using namespace std;

void binary(int arr[], int* addr_n) {
    for(int i = 0; i < (*addr_n); i++) {
        arr[i] += 2;
    }
    (*addr_n) += 10;
}

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    binary(arr, &n);
    for(int i = 0; i<5; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<n<<endl;
    return 0;
}