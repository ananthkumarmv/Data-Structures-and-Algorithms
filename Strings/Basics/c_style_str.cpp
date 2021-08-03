#include<iostream>
#include<cstring>

#define ll long long

using namespace std;

int main() {
	char s1[]="gfg";
	char s2[]={'c','p','p'};
	cout<<strlen(s1)<<" "<<strlen(s2)<<endl;
	
	char s3[]="gfg";
	char s4[]="abc";
	
	int res = strcmp(s1, s2);
	cout<<res<<endl;
	if(res==0) cout<<"Same"<<endl;
	else if(res<0) cout<<"Smaller"<<endl;
	else cout<<"Greater"<<endl;
    
    return 0;
}


