#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int n,a,d, count=0;
	cin>>a>>d>>n;
	while(n--){
		cout<<a+(++count-1)*d<<endl;
	}
    return 0;
}


