#include<iostream>
#define NIL -1
#define MAX 100

using namespace std;

int lookup[MAX];

//Function to initialize NIL values in lookup table
void _initialize()
{
	int i;
	for(i=0; i<MAX; i++){
		lookup[i] = NIL;
	}
}

//Function for nth Fibonacci number
int fib(int n){
	if(lookup[n] == NIL){
		if(n<=1)
			lookup[n] = n;
			else
				lookup[n] = fib(n-1) + fib(n-2);
	}
	
	return lookup[n];
}


int main(){
	int n=9;
	_initialize();
	cout<<"Fibonacci number is: "<<fib(n);

    return 0;
}


