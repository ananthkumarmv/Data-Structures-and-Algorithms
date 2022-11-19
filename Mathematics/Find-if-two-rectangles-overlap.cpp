#include<iostream>
#define ll long long

using namespace std;

struct Point{
	int x, y;
};

bool doOverlap(Point l1, Point r1, Point l2, Point r2){
	
	if(l2.x>r1.x || l1.x>r2.x)
		return false;
		
	if(r2.y>l1.y || r1.y>l2.y)
		return false;
		
	return true;
	
}

int main(){
	
	Point l1 = {0, 10}, r1 = {10, 0};
	
	Point l2 = {5, 5}, r2 = {15, 0};
	
	if(doOverlap(l1, r1, l2, r2))
		cout<<"Overlapping\n";
	else
		cout<<"Not Overlapping\n";
	
	return 0;
}
