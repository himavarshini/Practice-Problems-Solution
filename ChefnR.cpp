#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	if(a>b)
	cout<<a;
	else
	cout<<b;
	cout<<" "<<a+b;
	}	 
	return 0;
}