#include<iostream>

using namespace std;


int main(){
	
	int x1, x2, y1, y2;
	cin>>x1>>y1>>x2>>y2;
	
	int x3, x4, y3, y4;
	cin>>x3>>y3>>x4>>y4;
	
	int A1 = (x2-x1) * (y2-y1);
	int A2 = (x4-x3) * (y4-y3);
	
	int rw = min(x2, x4) - max(x1, x3);
	int rh = min(y2, y4) - max(y1, y3);
	
	int Ainter = 0;
	if(rw>0 && rh > 0)
		Ainter = rw*rh;
	
	cout<<(A1 + A2 - Ainter);


    return 0;
}


