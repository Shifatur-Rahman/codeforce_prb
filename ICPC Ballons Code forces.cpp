#include<iostream>
using namespace std;
int main(){

int i,j,m,n,t,count=0;

string s;

cin>>n;


for(i=0; i<n; i++){
        cin>>m;
	for(j=0; j<m; j++){
			cin>>s;

		if(s[i] == s[j]){
			count++;
		}
	}
}

cout<<"Count = "<<count;


}
