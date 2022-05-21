#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	vector<int> v1, v2, v3;
	
	for(int i=0; i<n; i++){
		if(arr[i]%10 == 0){
			v1.push_back(arr[i]);
		}
		
		else if(arr[i]%2==0){
			v1.push_back(arr[i]);
		}
		
		else v3.push_back(arr[i]);
	}
	
	sort(v1.begin(), v1.end(), greater<int>());
	
	for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    for (int i = v2.size()-1; i >= 0; i--) {
        cout << v2[i] << " ";
    }
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }


    return 0;
}


