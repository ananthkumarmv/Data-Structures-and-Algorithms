#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
    int start = max(a,b);
    int ans = start;
    int end = a*b;
    for(int i=start; i<=end;i++){
    	if(i%a==0 && i%b ==0){
    		ans=i;
    		break;
		}
	}
	cout<<ans;
    return 0;
}


