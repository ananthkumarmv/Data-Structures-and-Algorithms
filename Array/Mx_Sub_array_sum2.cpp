#include<iostream>

// O(n^2)

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[1000];
	int maxSum=0;
	int currentSum=0;
	int cumulativeSum[1000]={0};
	int left = -1;
	int right=-1;
	
	cin>>a[0];
	cumulativeSum[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		cumulativeSum[i] = cumulativeSum[i-1]+a[i];
	} 
	
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			
			//Elements of subarray(i,j)
			currentSum=0;
			
			currentSum =  cumulativeSum[j]-cumulativeSum[i-1];
			
			if(currentSum>maxSum){
				maxSum = currentSum;
				left=i;
				right=j;
			}
		}
	}
	
	cout<<maxSum<<endl;
	for(int i=left; i<=right;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

