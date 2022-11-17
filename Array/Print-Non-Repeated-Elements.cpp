#include<iostream>
#include<unordered_map>
#define ll long long

using namespace std;

void printNonRepeated(int arr[],int n){

    unordered_map<int, int> mp;
    
    for(int i=0; i<n; i++)
        mp[arr[i]]++;
        
    for(int i=0; i<n; i++) 
        if(mp[arr[i]] == 1)
            cout<<arr[i]<<" ";
            
}

int main(){
	
	int arr[] = {1,1,2,2,3,3,4,5,6,7};
	int n = 10;
	
	printNonRepeated(arr, n);

	return 0;
}
