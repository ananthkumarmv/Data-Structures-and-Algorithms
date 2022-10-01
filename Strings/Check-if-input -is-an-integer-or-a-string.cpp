#include<iostream>

using namespace std;

bool isNumber(string str){
	
	for(int i=0; i<str.length(); i++)
		if(isdigit(str[i]) == false)
			return false;
	
	return true;
}

int main(){
	
	string str = "6790";
 
    if (isNumber(str))
        cout << "Integer";

    else
        cout << "String";

	return 0;
}
