#include<iostream>
#include<queue>

using namespace std;

void generatePrintBinary(int n){
	queue<string> q;
	
	// Enqueue the first binary number
	q.push("1");
	
	while(n--){
		// printing the front of queue
		string s1 = q.front();
		q.pop();
		cout<<s1<<"\n";
		
		// storing s1 before changing it
		string s2 = s1;
		
		q.push(s1.append("0"));
		
		q.push(s2.append("1"));
	}
}


int main(){
	int n;
	cin>>n;
	generatePrintBinary(n);


    return 0;
}


