#include<bits/stdc++.h>

using namespace std;


int main() {
	int a,b, i=1, ans=1;
	cin>>a>>b;
	int c = min(a,b);
	for(int i=1;i<=c;i++){
		if(a%i==0 && b%i==0) ans=i;
	}
	cout<<ans;
}


