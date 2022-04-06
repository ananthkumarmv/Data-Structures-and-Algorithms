#include<iostream>

using namespace std;


int solve(int x, int y){
	int ans=0;
	
	while(x !=0 || y != 0){
		
		if(x%2 == y%2)
			ans++;
			
		x = x>>1;
		y = y>>1;
	}
	
	return ans;
}


int main(){
	int x, y;
	cin>>x>>y;
	
	cout<<solve(x, y);

    return 0;
}


