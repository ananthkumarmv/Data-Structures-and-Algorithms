#include<iostream>
#include<math.h>
using namespace std;

/*
Value of Counter            Subset
   000                    -> Empty set
   001                    -> a
   010                    -> b
   011                    -> ab
   100                    -> c
   101                    -> ac
   110                    -> bc
   111                    -> abc  
*/

// O(n2^n)
void printPowerSet(string set){
	
	unsigned int pow_set_size = pow(2, set.length());
	
	for(int counter = 0; counter<pow_set_size; counter++){
		
		for(int j=0; j<set.length(); j++){
			if(counter & (1 << j))
			cout<<set[j];
		}
		cout<<endl;
		
	}
	
}

int main(){
	
	string set = "abcd";
	
	printPowerSet(set);

	return 0;
}
