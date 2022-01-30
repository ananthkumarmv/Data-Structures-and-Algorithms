#include<iostream>


using namespace std;

int main(){
	
	char ch;
	int x, y;
	x=y=0;
	ch = cin.get();
	while(ch!='\n'){
		if(ch=='n' || ch=='N')
			y++;
		else if(ch=='s'|| ch=='S') 
			y--;
		else if(ch == 'e' || ch=='E') 
			x++;
		else x--;
		ch = cin.get();
	}
	
	if(x==0 and y==0){
		cout<<"Origin";
	}
	
	while(y>0){
		cout<<"N";
		y--;
	}
	
	while(y<0){
		cout<<"S";
		y++;
	}
	
	while(x>0){
		cout<<"E";
		x--;
	}
	while(x<0){
		cout<<"W";
		x++;
	}
	return 0;
}
