#include<iostream>
#include<unordered_map>
#include<utility>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
	
	if(p1.second == p2.second)
		return p1.first > p2.first;
		
	return p1.second > p2.second;
	
}

void print_N_mostFrequentNumber(int arr[], int n, int k){
	
	unordered_map<int, int> um;
	
	for(int i=0; i<n; i++)
		um[arr[i]]++;
		
	vector<pair<int, int>> freq_tab(um.begin(), um.end());
	
	sort(freq_tab.begin(), freq_tab.end(), compare);
	
	for(int i=0; i<k; i++){
		cout<<freq_tab[i].first<<" ";
	}
	
}


int main(){
	
	int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 2;
 
    print_N_mostFrequentNumber(arr, N, K);
	

	return 0;
}
