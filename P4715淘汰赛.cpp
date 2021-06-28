#include "bits/stdc++.h"
#include "queue" 
#include "map"

using namespace std;

/*
 *  
 	**queue ���л�������** 
	  
	back()�������һ��Ԫ��
	empty()������п��򷵻���
	front()���ص�һ��Ԫ��
	pop()ɾ����һ��Ԫ��
	push()��ĩβ����һ��Ԫ��
	size()���ض�����Ԫ�صĸ��� 
 *
 */ 

int N;

struct country{
	int i;
	int zl;
};

int main(){
	
	cin >> N;
	
	N = (1 << N);  //λ�������ƽ�� 
	
	queue<pair<int,int> > q; //ʵ�ֶ��У�����Ŀո�ܽ���
	
	for(int i = 1 ; i <= N ; i++){
		
		int x;
		cin >> x;
		q.push(make_pair(i,x)); //make_pair ����һ���µ�pair���� 
		
	}
	
	while(q.size() > 2){ //��Ҫ����2 ��ԭ�����ڣ�Ҫ��������Ǿ������ǹھ�
	
		pair<int,int> x,y;
		x = q.front();//ȡ������ͷ
		q.pop();//�Ƴ���һ��Ԫ�� 
		y = q.front();
		q.pop();
		
		if(x.second > y.second){
			q.push(x);
		}else{
			q.push(y);
		}
		
	}
		
		pair<int,int> x,y;
		x = q.front();//ȡ������ͷ
		q.pop();//�Ƴ���һ��Ԫ�� 
		y = q.front();
		q.pop();
		
		if(x.second > y.second){
			cout << y.first;
		}else{
			cout << x.first;
		}
	
	
	 
	
	return 0;
} 
