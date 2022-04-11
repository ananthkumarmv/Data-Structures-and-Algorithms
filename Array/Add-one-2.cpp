#include<iostream>
#include<vector>

using namespace std;


void addOne(vector<int>& a){
	
	int index = a.size() -1;
	
	
	// while the index is valid and the value at
	// [index] == 9 setting it as 0
	while(index >= 0 && a[index] == 9)
		a[index--] = 0;
		
	// if index < 0 (if all the digits were 9)
	if(index<0)
		a.insert(a.begin(), 1, 1);
		
	// else incrementing the value at [index]
	else
		a[index]++;
	
}


int main(){
	
	vector<int> v{1, 7, 8, 9};
	
	addOne(v);
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}

    return 0;
}


