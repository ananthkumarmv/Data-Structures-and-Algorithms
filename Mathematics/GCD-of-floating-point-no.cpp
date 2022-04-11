#include<iostream>
#include <cmath>
using namespace std;

double gcd(double a, double b){
	if(a < b)
		return gcd(b, a);
	
	if(fabs(b) < 0.001)	
		return a;
	
	else
		return (gcd(b, a - floor(a / b) * b));
	
}


int main(){
	
	double a, b;
	cin>>a>>b;
	
	cout<<gcd(a, b);

    return 0;
}


