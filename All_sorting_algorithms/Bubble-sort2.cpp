#include<iostream>

using namespace std;

bool compare(int a, int b){
	return a>b;
}


void bubble_sort(int a[],int n, bool (&cmp)(int a, int b)){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(cmp(a[j], a[j+1])){
				swap(a[j], a[j+1]);
			}
		}
	}
}


void print_array(int a[],int n){
	cout<<"The sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}




int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<endl;
    bubble_sort(a,n, compare);
    print_array(a,n);
    return 0;
}


