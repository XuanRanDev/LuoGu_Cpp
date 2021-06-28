#include "bits/stdc++.h"


using namespace std;

int N,M;

inline int read()
{
	int X=0; bool flag=1; char ch=getchar();
	while(ch<'0'||ch>'9') {if(ch=='-') flag=0; ch=getchar();}
	while(ch>='0'&&ch<='9') {X=(X<<1)+(X<<3)+ch-'0'; ch=getchar();}
	if(flag) return X;
	return ~(X-1);
}

int data[5000050]; 

#include<bits/stdc++.h>

using namespace std;


void Quick_Sort(int data[],int Left,int Right){
	
	int L = Left;
	int R = Right;
	int Mid = data[(Left+Right)/2];
	
	do{
		while(data[L] < Mid) L++;
		while(data[R] > Mid) R--;
		
		if(L<=R){
			swap(data[L],data[R]);
			L++;
			R--;
		}
		
	}while(L<=R);
	
	
	if(Left<R) Quick_Sort(data,Left,R);
	if(L<Right) Quick_Sort(data,L,Right);
} 


int main(){
	
	int x = read();
	int m = read();
	
	for(int i = 1  ; i <= x ; i++){
		data[i] = read(); 
	}
	
	Quick_Sort(data,0,x+1);


//	for(int i = 2 ;  i<= x+1 ;i++){
//		cout << data[i] <<" ";
//	}	

printf("%d",data[m+2]);

	
	
	
	
	
	
	
	
	return 0;
}
