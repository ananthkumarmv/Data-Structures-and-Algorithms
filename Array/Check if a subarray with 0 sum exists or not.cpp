#include <iostream>
#include <unordered_set>
typedef long long ll;
using namespace std;

bool subarrayexist(int a[],int n){
	unordered_map<int,bool> summap;
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		
		if(sum==0||summap[sum]==true) return true;
		
		summap[sum]=true;
	}
	return false;
}


int main(){
	int a[]={1,2,-3,3};
	int n=4;
	if(subarrayexist(a,n) cout<<"true";
	else cout<<"false";

	return 0;
}

