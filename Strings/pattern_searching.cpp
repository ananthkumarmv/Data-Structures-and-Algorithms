#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	
	string text, pat;
	cin>>text>>pat;
	int found = text.find(pat);
	while(found != string::npos){
		cout<<"Pattern found at "<<found<<endl;
		
		found= text.find(pat, found+1);
	}
    
    return 0;
}


