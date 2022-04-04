#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool check(vector<string> v, int len){
	int n = v.size();
	for(int i=0; i<n; i++)
		sort(v[i].begin(), v[i].end());
		
	for(int i=0; i<len-1; i++)
		for(int j=0; j<n; j++)
			if(v[i][j] > v[i+1][j])
				return false;
	
	return true;
		
}

int main(){
	vector<string> v = { "ebcda", "ihgfj", "klmno", 
                            "pqrst", "yvwxu" };
    
	// len of strings       
    int len = 5;
    check(v, len) ? cout<<"Yes" : cout<<"No";
    
    return 0;
}


