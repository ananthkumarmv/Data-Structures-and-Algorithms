#include<iostream>

using namespace std;

struct KStacks{
	int *arr, *top, *next;
	int k, freeTop, cap;
	
	KStacks(int k1, int n){
		k=k1, cap=n;
		arr = new int[cap];
		top = new int[k];
		next = new int[cap];
		
		for(int i=0; i<k; i++)	
			top[i] = -1;
			
		freeTop=0;
		
		for(int i=0; i<cap-1; i++)
			next[i] = i+1;
		next[cap-1] = -1;
	}
	
	void push(int x, int sn){    // sn--> stack number
		int i = freeTop;
		freeTop = next[i];
		next[i] = top[sn];
		top[sn] = i;
		arr[i] = x;
	}
	
	int pop(int sn){
		int i = top[sn];
		top[sn] = next[i];
		next[i] = freeTop;
		freeTop = i;
		return arr[i];
	}
	
};



int main(){
	
	KStacks s(6, 3);
	
	s.push(100, 0);
	s.push(200, 0);
	s.push(300, 0);
	s.push(400, 0);
	
	s.pop(0);

    return 0;
}


