#include<iostream>

using namespace std;

void permute(string a, int l, int r){
	
	if(l == r)
		cout<<a<<"\n";
		
	else{
		// Permutations made
		for(int i=l; i<=r; i++){
			
			// Swapping done
			swap(a[l], a[i]);
			
			// Recursion called
			permute(a, l+1, r);
			
			// backtrack
			swap(a[l], a[i]);
			
		}
	}
	
}

int main(){

	string str;
	cin>>str;
	
	permute(str, 0, str.length()-1);
	
	return 0;
}
