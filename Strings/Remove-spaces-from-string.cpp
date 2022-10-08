#include<iostream>
#include<algorithm>
using namespace std;

void removeSpaces(char *str){
	
	int count=0;
	
	for(int i=0; str[i]; i++)
		if(str[i] != ' ')
			str[count++] = str[i];
		
	str[count] = '\0';
	
}

void removeSpaces2(string& str){
	
	int len = str.length();            // storing the length of the string
	
	int c = count(str.begin(), str.end(), ' ');   // counting the number of whitespaces
	
	remove(str.begin(), str.end(), ' ');          // removing all the whitespaces
	
	str.resize(len-c);                // resizing the string to l-c
	
}


void removeSpaces3(string& str){
	
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	
}

int main(){
	
	char str1[] = "Ananth kumar M V";
	removeSpaces(str1);
	cout<<str1<<endl;
	
	string str2 = "Ananth kumar M V";
	removeSpaces2(str2);
	cout<<str2<<endl;
	
	string str3 = "Ananth kumar M V";
	removeSpaces3(str3);
	cout<<str3;
	
	return 0;
}
