#include<iostream>
#include<cstdlib>
using namespace std;

void swap(char **s1,char **s2){
	char *temp=*s1;
	*s1=*s2;
	*s2=temp;
	free(temp);
}


int main(){
	
	char *s1= "ab";
	char *s2= "cd";
	
	swap(&s1, &s2);
	
	cout<<s1<<" "<<s2;
	return 0;
}

