#include<iostream>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define l(s) s.length()
#define asort(a) sort(a, a+n)
#define dsort(a) sort(a, a+n, greater<int>())
#define all(x) (x).begin(), (x).end()
#define vasort(v) sort(all(v))
#define vdsort(v) sort(all(v), greater<int>())
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define mp make_pair
#define ff first
#define ss second
#define RESET(a, b) memset(a, b, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a*(b/gcd(a,b)))
#define sp(x, y) fixed<<setprecision(y)<<x
#define MOD 1000000007
#define nl '\n'
#define fast  ios_base::sync_with_stdio(0); cin.tie(0)


int main(){

	fast;

	string str;
	cin>>str;
	
	int vcnt=0;
	int ccnt=0;
	
	int cons[26] = {0};
	int vows[26] = {0};
	
	int n = l(str);
	
	for(int i=0; i<n; i++){
		
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			
			vows[str[i]-'a']++;
			vcnt++;
			
		}
		else{
			cons[str[i]-'a']++;
			ccnt++;
		}
		
	}
	
	if(abs(vcnt-ccnt)>=2)
		cout<<"-1"<<nl;
	else{
		
		string a="", b="";
		
		for(int i=0; i<26;i++){
			while(vows[i]!=0){
				a += (char)(i+'a');
				vows[i]--;
			}
			
			while(cons[i]!=0){
				b += (char)(i+'a');
				cons[i]--;
			}
		}
		
		string res="";
		if((vcnt-ccnt) == 0){
			
			if(a[0] < b[0]){
				
				int len = a.length();
				
				while(len){
					
					res+=a[len-1];
					res+=b[len-1];
					len--;
					
				}
				
			}
			else{
				
				int len = a.length();
				
				while(len){
					
					res+=b[len-1];
					res+=a[len-1];
					len--;
					
				}
				
			}
			
		}
		
		else if(vcnt>ccnt){
			
			int len = a.length();
			
			while(len){
				
			}
			
		}

		
	}

	return 0;
}
