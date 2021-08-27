#include<iostream>

// 0(m*n)
//0(m+n)

using namespace std;


int main(){
	
	int r,c;
	cin>>r>>c;
	int mat[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>mat[i][j];
	
	bool row[r]={0};
	bool col[c]={0};
	
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(mat[i][j]==1){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(row[i]==1||col[j]==1){
				mat[i][j]=1;
			}
		}
	}
	
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}

