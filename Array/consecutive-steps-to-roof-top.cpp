//Input : arr[] = {1, 2, 2, 3, 2}
//Output : 1
//Explanation :
//Maximum consecutive steps from 1 to 2 OR 2 to 3.
//Input : arr[] = {1, 2, 3, 4}
//Output : 3


#include<iostream>

using namespace std;


int find_consecutive_steps(int a[], int n){
	int count=0, maximum = 0;
	
	for(int i=1; i<n; i++){
		if(a[i]>a[i-1])
			count++;
		
		else{
			maximum = max(count, maximum);
			count=0;
		}
		
	}
	
	return max(maximum, count);
}



int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	cout<<find_consecutive_steps(a, n);

    return 0;
}


