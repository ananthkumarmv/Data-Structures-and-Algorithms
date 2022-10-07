#include<iostream>

using namespace std;
#define MAX 26


// O(n)
// O(max(n,26)), where n is the length of the string.
void alternateSort(string& str){
	
	int n = str.length(); 
	
	int uCount[MAX] = {0}, lCount[MAX] = {0};
	for(int i=0; i<n; i++){
		if(isupper(str[i]))
			uCount[str[i] - 'A']++;
		
		if(islower(str[i]))
			lCount[str[i] - 'a']++;
	}
	
	int i=0, j=0, k=0;
	
	while(k<n){
		
		// to print uppercase
		while(i<MAX && uCount[i] == 0)
			i++;
			
		if(i < MAX){
			str[k++] = 'A' + i;
			uCount[i]--;
		}
		
		while(j<MAX && lCount[j] == 0)
			j++;
		
		if(j<MAX){
			str[k++] = 'a' + j;
			lCount[j]--;
		}
		
	}
	
}

int main(){
	
	string str = "bAwutndekWEdkd";
    alternateSort(str);
    cout << str << "\n";

	return 0;
}
