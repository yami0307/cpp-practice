#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i = 1; i<=T; i++){
	    int N;
	    cin>>N;
	    int sum = 0;
	    while(N>0){
	        sum += (N%10);
	        N /= 10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}