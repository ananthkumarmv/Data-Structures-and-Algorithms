#include<iostream>
#include<stack>
using namespace std;

//O(n^2)
//O(1)
void printNGE(int arr[], int n){
	int next;
	
	for(int i=0; i<n; i++){
		next = -1;
		for(int j=i+1; j<n; j++){
			if(arr[i] < arr[j]){
				next = arr[j];
				break;
			}
		}
		
		cout<<arr[i]<<" --> "<<next<<endl;
	}
	
}

//O(n)
//O(n)
void printNGE2(int arr[], int n)
{
    stack<int> s;

    s.push(arr[0]);
 
    for (int i = 1; i < n; i++) {
 
        if (s.empty()) {
            s.push(arr[i]);
            continue;
        }
 
        while (s.empty() == false && s.top() < arr[i]) {
            cout << s.top() << " --> " << arr[i] << endl;
            s.pop();
        }
 
        s.push(arr[i]);
    }

    while (s.empty() == false) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
//	printNGE(arr, n);
	printNGE2(arr, n);

	return 0;
}
