#include<iostream>
#include<unordered_set>

using namespace std;


void printDuplicates(int arr[], int n){
	
	unordered_set<int> intSet;
	unordered_set<int> duplicate;
	
	for(int i=0; i<n; i++){
		
		if(intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);
		else
			duplicate.insert(arr[i]);
			
	}
	
	cout<<"Duplicate items are: ";
	unordered_set<int> :: iterator itr;
	
	for(itr = duplicate.begin(); itr != duplicate.end(); itr++)
		cout<<*itr<<" ";
	
}

int main(){
	
	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
	int n = sizeof(arr)/sizeof(int);
	
	printDuplicates(arr, n);

	return 0;
}
