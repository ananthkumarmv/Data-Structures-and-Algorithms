#include<iostream>
#include<cstring>

using namespace std;


void minMax(string input, string &minword, string &maxword){
	
	
	int len = input.length();
	int si=0, ei = 0;
	int min_len=len, min_start_index=0;
	int max_len=0, max_start_index = 0;
	
	while(ei<=len){
		if(ei<len && input[ei]!=' ')
			ei++;
		else
		{
			int curr_len = ei-si;
			
			if(curr_len<min_len){
				min_len = curr_len;
				min_start_index=si;
			}
			
			if(curr_len < min_len){
				min_len=curr_len;
				min_start_index = si;
			}
			
			if(curr_len>max_len){
				max_len=curr_len;
				max_start_index=si;
			}
			ei++;
			si = ei;
		}
	}
	
	minword = input.substr(min_start_index, min_len);
	maxword = input.substr(max_start_index, max_len);
}


int main(){
	
	string a = "program to find smallest and largest word string";
	string minword, maxword;
	minMax(a, minword, maxword);
	
	cout<<"Min len word: "<<minword<<endl<<"max len word: "<<maxword<<endl;
	return 0;
}

