#include<bits/stdc++.h>

using namespace std;

bool cmp(int a,int b){
	
	return a<b;
}


int main(){
	
	int num,total;
	
	cin >> num >> total;
	
	int data[num] ;
	
	for(int i =0;i<num;i++){
		cin >> data[i];
	}
	
	sort(data,data+num,cmp);
	
	int result = 0;
	
	long temp = 0;
	for(int i = num-1;i>=0;i--){
		
		temp += data[i];
		
		result++;
		
		if(temp>=total) break;
	}
	
	cout << result;
	
	return 0;
}
