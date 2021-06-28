#include "bits/stdc++.h"

using namespace std;

int main(void)
{
	
	
	int x;
	cin>>x;
	int a[1200];
	int data[x];
	
	for(int i = 0 ; i < x ; i++){
		cin >> data[i];
	}
    a[0]=0;a[1]=1;
    
    for(int i = 0 ; i < x ; i++){
    	int temp = data[i];
    	for(int i=2;i<=1199;++i){
			a[i]=a[i-temp];
		} 
	}
    
	for(int i = 0 ; i < 1200 ; i++){
		
		if(a[i]!= 0 ) cout << i << " " << a[i] << endl;
	}
	
	return 0;
}
