#include<iostream>
#include<algorithm>
using namespace std;
# define NO_OF_CHARS 256

// O(n^2)
// O(1)
void printDistinct1(string str){
	
	for(int i=0; i<str.length(); i++){
		int flag = 0;
		
		for(int j=0; j<str.length(); j++){
			
			if(i != j && str[i] == str[j]){
				flag = 1;
				break;
			}
			
		}
		
		if(flag == 0)
			cout<<str[i];
	}
	cout<<endl;
}

//O(n)
//O(n)
void printDistinct2(string str){
	
	int count[NO_OF_CHARS] = {0};
	
	int i;
	for(i=0; i<str.length(); i++){
		if(str[i] != ' ')
			count[str[i]]++;
	}
	
	int n = i;
	
	for(int i=0; i<n; i++){
		if(count[str[i]] == 1)
			cout<<str[i];
		
	}
	cout<<endl;
	
}

//O(n)
//O(n)
void printDistinct3(string str){
	
	int count[NO_OF_CHARS] = {0};
	int index[NO_OF_CHARS];
	
	int n = str.length();
	for(int i=0; i<NO_OF_CHARS; i++){
		index[i] = n;
	}
	
	for(int i=0; i<n; i++){
		
		char x = str[i];
		

		++count[x];
		
		// If this is first occurrence, then set value
        // in index as index of it.
		if(count[x] == 1 && x != ' ')
			index[x] = i;
		
		// If character repeats, then remove it from
        // index[]
        if(count[x] == 2)
        	index[x] = n;
	}
	
	
	// Since size of index is constant, below operations
    // take constant time.
    sort(index, index+NO_OF_CHARS);
    
    for(int i=0; i<NO_OF_CHARS && index[i] != n; i++){
    	cout<<str[index[i]];
	}
	
}

int main(){
	
	string str = "geeksforgeeks";
	
	printDistinct1(str);
	
	printDistinct2(str);
	
	printDistinct3(str);

	return 0;
}
