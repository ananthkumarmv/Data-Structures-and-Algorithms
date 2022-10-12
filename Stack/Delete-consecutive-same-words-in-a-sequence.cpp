#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int removeConsecutiveSame(vector<string> v){
	
	int n = v.size();
	
	stack<string> st;
	
	for(int i=0; i<n; i++){
		
		if(st.empty())
			st.push(v[i]);
			
		else{
			
			string str = st.top();
			if(str.compare(v[i]) == 0)
				st.pop();
				
			else
				st.push(v[i]);
		}
		
	}
	return st.size();
	
}

int main(){
	
	vector<string> v = {"ab", "aa", "aa", "bcd", "ab"};
	
	cout<<removeConsecutiveSame(v);

	return 0;
}
