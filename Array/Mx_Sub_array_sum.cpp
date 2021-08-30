#include<iostream>


using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[1000];
	int maxSum=0;
	int currentSum=0;
	int left=-1;
	int right=-1;
	
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			
			//Elements of subarray(i,j)
			currentSum=0;
			
			for(int k=i; k<=j;k++){
				currentSum+=a[k];
			}
				
			if(currentSum>maxSum){
				maxSum = currentSum;
				left = i;
				right=j;
			}
		}
	}
	
	cout<<maxSum<<endl;
	
	//Printing the subarray
	for(int k=left; k<=right;k++){
		cout<<a[k]<<" ";
	}
	
	
	return 0;
}

