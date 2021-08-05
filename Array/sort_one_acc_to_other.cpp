#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

void sortpair(int a[], char b[]){
	pair<int, char> pa[4];
	
	for(int i=0;i<4;i++){
		pa[i]={a[i], b[i]};
	}
	sort(pa, pa+4);
	for(int i=0;i<4;i++){
		cout<<pa[i].second<<" ";
	}
}



int main(){
	
	int a[4]={4,3,1,2};
	char b[4]={'a', 'b', 'c', 'd'};
	sortpair(a, b);
	

	return 0;
}

