#include "bits/stdc++.h"
#include "math.h"

using namespace std;

struct student{
	
	int a,b,c,id;
	
};

int main(){
	
	int num;
	
	cin >> num;
	
	student std[num];
	
	for(int i = 0; i < num ; i++){
		
		cin >> std[i].a >> std[i].b >> std[i].c;
		
		std[i].id =  i;
		
	}
	
	int flag = 0;
	
	for(int i = 0; i < num ; i++){
		
		for(int j = i+1; j < num ; j++){
			
			if(std[i].id != std[j].id){
				
				int data[3];
				
				data[0] = abs(std[i].a - std[j].a);
				data[1] = abs(std[i].b - std[j].b);
				data[2] = abs(std[i].c - std[j].c);
				
				int i_sum = std[i].a + std[i].b + std[i].c;
				int j_sum = std[j].a + std[j].b + std[j].c; 
				
				cout << data[0] <<  " " << data[1] << " " << data[2] << " "  << abs(i_sum-j_sum) << "\n";
				
				//
				
				if(data[0]<= 5  && data[1]<= 5 && data[2]<= 5 && abs(i_sum - j_sum ) <=10 ){
					
					flag++;
					
				}
				
				
				
			}
		}
		
		cout << flag;
	}
	
	return 0; 
} 
