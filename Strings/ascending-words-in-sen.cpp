#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(string a, string b){
	return a<b;
}


void removeDupWord(string str){
	string word = "";
	vector<string> s;
	
	for(auto x : str){
		if(x == ' '){
			s.push_back(word);
			word="";
		}
		else{
			word = word + x;
		}
	}
	s.push_back(word);
	
	sort(s.begin(), s.end(), compare);
	
	for(auto i=0; i<s.size(); i++){
		cout<<s[i]<<endl;
	}
}



int main(){
	
	string str = "My name is Amith";
	removeDupWord(str);

    return 0;
}


