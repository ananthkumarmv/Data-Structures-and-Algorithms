#include<iostream>
#include<map>

using namespace std;


// using merge function of merge sort
// O(n1 + n2)
// O(n1 + n2)
void mergeArray2(int a[], int b[], int size1, int size2, int c[]){
	
	int i=0, j=0, k=0;
	
	while(i<size1 && j<size2){
		
		if(a[i]<b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
		
	}
	
	while(i<size1)
		c[k++] = a[i++];
		
	while(j<size2)
		c[k++] = b[j++];
	
}


// using hashmap
// O(n*log(n) + m*log(m))
// O(n)

void mergeArray1(int a[], int b[], int size1, int size2){
	
	map<int, int> mp;
	
	for(int i=0; i<size1; i++)
		mp[a[i]]++;
		
	for(int i=0; i<size2; i++)
		mp[b[i]]++;
	
	for(auto itr = mp.begin(); itr != mp.end(); itr++){
		
		for(int i=0; i<itr->second; i++){
			cout<<itr->first<<" ";
		}
		
	}
	
}


int main(){
	
	int a[] = {1, 2, 4, 6};
	int b[] = {3, 4, 5, 7};
	
	int size1 = sizeof(a)/sizeof(int);
	int size2 = sizeof(b)/sizeof(int);
	
	mergeArray1(a, b, size1, size2);
	
	
	int c[size1 + size2];
	mergeArray2(a, b, size1, size2, c);
	
	cout<<"\n";
	for(int i=0; i<size1+size2; i++)
		cout<<c[i]<<' ';
	
	return 0;
}