#include<iostream>
#include<vector>

using namespace std;


void addOne(vector<int>& a){
	int n = a.size();
	
	a[n-1] +=1;
	int carry = a[n-1] / 10;
	a[n-1] %= 10;
	
	// traversing from the second last digit
	for(int i=n-2; i>=0; i++){
		if(carry == 1){
			a[i] += 1;
			carry = a[i] / 10;
			a[i] %= 10;
		}
	}
	
	if(carry == 1)
		a.insert(a.begin(), 1);
	
}


int main(){
	
	vector<int> v{1, 7, 8, 9};
	
	addOne(v);
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}

    return 0;
}


