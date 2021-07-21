//Codechef atm problem
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int withdrawAmt;
	float bal;
	
	cin>>withdrawAmt;
	cin>>bal;
	
	
	if(withdrawAmt%5==0 && (bal-withdrawAmt)>=0.50 && withdrawAmt!=0)
	{
	    cout<<fixed<<setprecision(2)<<(bal-withdrawAmt-0.50);   
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<bal;
	}
	return 0;
}
