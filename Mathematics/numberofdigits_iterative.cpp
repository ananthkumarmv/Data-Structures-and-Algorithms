#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	while(n!=0){
		count++;
		n/=10;
	}
    cout<<count;
    return 0;
}


