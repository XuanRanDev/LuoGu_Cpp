#include "bits/stdc++.h"
#include "queue" 
#include "map"

using namespace std;

/*
 *  
 	**queue 队列基本函数** 
	  
	back()返回最后一个元素
	empty()如果队列空则返回真
	front()返回第一个元素
	pop()删除第一个元素
	push()在末尾加入一个元素
	size()返回队列中元素的个数 
 *
 */ 

int N;

struct country{
	int i;
	int zl;
};

int main(){
	
	cin >> N;
	
	N = (1 << N);  //位运算进行平方 
	
	queue<pair<int,int> > q; //实现队列，这里的空格很讲究
	
	for(int i = 1 ; i <= N ; i++){
		
		int x;
		cin >> x;
		q.push(make_pair(i,x)); //make_pair 创建一个新的pair对象 
		
	}
	
	while(q.size() > 2){ //需要大于2 的原因在于，要求出的是亚军而不是冠军
	
		pair<int,int> x,y;
		x = q.front();//取出队列头
		q.pop();//移除第一个元素 
		y = q.front();
		q.pop();
		
		if(x.second > y.second){
			q.push(x);
		}else{
			q.push(y);
		}
		
	}
		
		pair<int,int> x,y;
		x = q.front();//取出队列头
		q.pop();//移除第一个元素 
		y = q.front();
		q.pop();
		
		if(x.second > y.second){
			cout << y.first;
		}else{
			cout << x.first;
		}
	
	
	 
	
	return 0;
} 
