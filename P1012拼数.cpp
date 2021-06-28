#include "bits/stdc++.h"
#include "algorithm"

using namespace std;

int N;
string str[30];

string ans[500000];
int flag = 1;

int main(){
	
	cin >> N;	
	
	for(int i = 1 ; i <= N ; i++){
		cin >> str[i];
	}
	
	long long max = 0;
	long long temp = 0;
	string s ="";
	do{
		s = "";
		
		for(int i = 1 ; i <= N ; i++){
			s+=str[i];
		}
		ans[flag++] =s;
		
		
	}while(next_permutation(str+1,str+N+1));
	
	sort(ans+1,ans+flag);
	cout << ans[flag-1];
	
	
	
	return 0;
} 
