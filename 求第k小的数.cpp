#include<bits/stdc++.h>

using namespace std;
int need;


void Quick_Sort(long data[],int Left,int Right){
	
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
	
	
//	if(Left<R) Quick_Sort(data,Left,R);
//	if(L<Right) Quick_Sort(data,L,Right);
	
	//���ź����鱻����Ϊ���飺 l<=j<=i<=r
	if(need<=R) Quick_Sort(data,Left,R); //��������ֻ��Ҫ��������
	else if(L<=need) Quick_Sort(data,L,Right);//��������ֻ��Ҫ��������
	else //������м�����ֱ�����
	{
		printf("%d",data[R+1]);
		exit(0);
	}
} 

int main(){
	
	int num;
	
	//cin >> num >> need;
	
	//�����Ż��°�
	scanf("%d%d",&num,&need) ;
	
 	long data [num+5];
	
	for(int i =0;i<num;i++){	
	
		//cin >> data[i];
		
		scanf("%d",&data[i]);
		
	}
	Quick_Sort(data,0,num-1);
	
//	
//	for(int i =0 ; i<=need ; i++){
//		if(i == need) cout << data[need];
//	}
	return 0; 
}
