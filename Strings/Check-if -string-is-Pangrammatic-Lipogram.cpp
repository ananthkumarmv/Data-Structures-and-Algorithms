#include<iostream>
#include<string>
using namespace std;

string alphabets = "abcdefghijklmnopqrstuvwxyz";

// O(26 * N)
// O(1)
void panLipogramChecker(string str){
	for(int i=0; i<str.length(); i++){
		str[i] = tolower(str[i]);
	}
	
	int counter = 0;
	
	for(int i=0; i<26; i++){
		
		int pos = str.find(alphabets[i]);
		
		if(pos<0 || pos>str.length())
			counter++;
		
	}
	
	if(counter == 0)
		cout<<"Pangram"<<endl;
	else if(counter>=2)
		cout<<"Not a pangram but might a lipogram"<<endl;
	else
		cout<<"Pangrammatic Lipogram"<<endl;
	
}

int main(){
	
	string str = "The quick brown fox jumped over the lazy dog";
    panLipogramChecker(str);
    
    str = "The quick brown fox jumps over the lazy dog";
    panLipogramChecker(str);
     
    str = "The quick brown fox jump over the lazy dog";
    panLipogramChecker(str);

	return 0;
}
