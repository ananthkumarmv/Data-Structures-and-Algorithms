#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string str = "geeksforgeeks";
	int res = str.find("xyz");
	cout<<res<<endl;
	if(res==string::npos) cout<<"Not present"<<endl;
	else cout<<"First occurrence at the index: "<<res<<endl;
	res = str.find("gee");
	cout<<res<<endl;
	if(res==string::npos) cout<<"Not present";
	else cout<<"First occurrence at the index: "<<res;
    
    return 0;
}


