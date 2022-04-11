#include<iostream>
#include<vector>

using namespace std;

string spaceIntegration(string s, vector<int>& sp){
	int m = s.size(), n = sp.size(), l=0, r=0;
	
	string res(m+n, ' ');
	
	for(int i=0; i<m+n; i++){
		
		if(l < n and i == sp[l] + l)
			l++;
		else
			res[i] = s[r++];
		
	}
	return res;
	
}

int main(){
	
	string s = "AnanthkumarMV";
	
	vector<int> space = {6, 11, 12};
	
	cout<<spaceIntegration(s, space);

    return 0;
}


