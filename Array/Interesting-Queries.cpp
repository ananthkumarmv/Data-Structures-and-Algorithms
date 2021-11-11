#include<iostream>
#include<vector>
using namespace std;

vector<int> SolveQueries(vector<int>nums, vector<vector<int>>Queries, int k){
	vector<int> vec;
	
	for(int i=0; i<Queries.size(); i++){
		
		int c=0;
		
		for(int j= Queries[i][0]; j<=Queries[i][1]; j++){
			if(k == nums[j-1]) c++;
		}
		
		vec.push_back(c);
	}
	
	return vec;
}



int main(){
	
	vector<int> num{7,6,5,4,5,6,4,3,2,5,9};
	
	vector<vector<int>> Queries{{1,11}, {2,6}};
	
	vector<int> s =  SolveQueries(num, Queries, 4);
	
	for(int i=0; i<s.size(); i++){
		cout<<s[i]<<" ";
	}

    return 0;
}


