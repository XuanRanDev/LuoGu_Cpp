#include "bits/stdc++.h"
#include "string"

using namespace std;

/*
 *	Î´Íê³É 
 */ 

int N;
int num = 1;
char tmd[4][10] = {"touch", "rm", "ls", "rename"};
char data[20000][2000];

int search(char *u[]){
	for(int i = 1 ; i < num ; i++ ){
		if(strcmp(data[i],*u) == 0) return i;
	}
	return -1;
}

void touch(char *x[]){
	int temp = search(x) ;
	if( temp == -1){
		strcpy(data[++num],*x);
	}
}
void rm(char * x[]){
	int temp = search(x);
	if(temp > 0) strcpy(data[temp],"");
}

void ls(){
	for(int i = 1; i < num ; i++){
		
		if(strcmp(data[i],"")!=0){
			cout << data[i] << endl;
		}
	}
}

void rename(char* x[], char* y[]) {
	int temp = search(x);
	
	if(temp>0){
		strcpy(data[temp],*y);
	
	}
}

int main(){
	
	cin >> N;
	
	for(int i = 0 ; i < N ; i++){
		
		char cmd[50];
		scanf("%s",&cmd);
		
		if(strcmp(cmd,tmd[0]) == 0){
			char x[1000];
			scanf("%s",&x);
			touch(x);
		}
		if(strcmp(cmd,tmd[1]) == 0){
			char x[1000];
			scanf("%s",&x);
			rm(x);
		}
		if(strcmp(cmd,tmd[2]) == 0){
			ls();
		}
		if(strcmp(cmd,tmd[3]) == 0){
			char x[1000],y[1000];
			scanf("%s%s",&x,&y);
			rename(x,y);	
		}
		
		
	}
	
	
	return 0;	
} 
