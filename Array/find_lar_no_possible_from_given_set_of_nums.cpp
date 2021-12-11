#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//struct{
//	bool operator()(int a, int b) const
//	{
//		string val1 = to_string(a) + to_string(b);
//	string val2 = to_string(b) + to_string(a);
//	
//	return val1>val2;
//	}
//} customCompare;


bool customCompare(int a, int b){
	string val1 = to_string(a) + to_string(b);
	string val2 = to_string(b) + to_string(a);
	val1 > val2 ? cout<<val1<<endl : cout<<val2<<endl;
	return val1>val2;
}

string findLargestNumber(vector<int> &nums){
	sort(begin(nums), end(nums), customCompare);
	string s;
	
	cout<<endl;
	
	for(int &i: nums){
		cout<<i<<" ";
	}
	cout<<endl;
	
	for(int &i: nums){
		s +=to_string(i);
	}
	
	return s;
}


int main(){
	
	vector<int> nums = { 10, 68, 97, 9, 21, 12 };
	
	cout<<"The largest number is: "<<findLargestNumber(nums)<<endl;

    return 0;
}


