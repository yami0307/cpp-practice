#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout<<"The first integer after swapping : "<<x<<endl;
    cout<<"The second integer after swapping : "<<y<<endl;
}
int main(){
    int x,y;
    cout<<"Enter the first integer : "<<endl;
    cin>>x;
    cout<<"Enter the second integer : "<<endl;
    cin>>y;
    swap(x,y);
    return 0;
}