#include "bits/stdc++.h"
#include "cctype" // 检查字符用的 

using namespace std;



/*
 * 不会啊老铁 
 */ 

int P1,P2,P3; //三个参数 

char data[50000];
int i;//控制下标 
string s; 
int w;//结果下标控制 


int main(){
	
	cin >> P1 >> P2 >> P3 >> s;
	
	//如果s的第i项存在内容则开始循环 
	while(s[i]){
		
		//如果值不是-则直接放入结果数组(只有字串才需要检查） 
		if(s[i] != '-'){
			data[w++] = s[i];
		} else{
			//好了，读到-号，难点来了
			char a = s[i-1];//读入前一项
			char b = s[i];//别问为什么这么写，问就是不知道
			char c = s[i+1]; // 后一项
			
			///////////////////////////
			//检查条件五
			
			if(a+1 == c) { // 如果后一项是前一项的后继则直接略过本次循环 
				continue;
			}else if(a == c  || a > c){ //如果-前后相等，或者前>后 则原样 
				data[w++] = s[i];//-号少不了 
				
				
			///////////////////////////
			//检查条件三 千万要记得包含字串的格式化 
			}else{ //下面就是正常 
				//计算出后一项和前一项的差值
				int cha = c-a;
				//添加差值进入
				for(int i = 1 ; i <= cha ; i++){
					
					//因为需要重复P2次，需要嵌套for
					for(int k = 0 ; k < P2 ; k ++){
						//注意：需同时满足条件一（格式化）和三（反转）
						if(P3 == 2){ // 条件三：是否需要反转
							//执行反转操作 ,从c项到a项即可
							//检查参数一：1为小写 2为大写 3为*
							
							if(P1 == 1 ){
								if(islower(a+(cha-i))){
									data[w++] = a+(cha-i);
								}else{
									data[w++] = a+(cha-i) + 32;
								}
							}else if(P1 == 2) {
								if(isupper(a+cha-i)){
									data[w++] = a+(cha-i);
									
								}else{
									data[w++] = a+(cha-i) - 32;
								}
							}else{
								data[w++] = '*';
							}					 
							
						}  else{
							
							if(P1 == 1 ){
								if(islower(a+i)){
									data[w++] = a+i;
								}else{
									data[w++] = a+i + 32;
								}
							}else if(P1 == 2) {
								if(isupper(a+i)){
									data[w++] = a+i;
								}else{
									data[w++] = a+i - 32;
								}
							}else{
								data[w++] = '*';
							}

						}
					} 
					
				} 
			} 
			
			
		}
		
	}
	
	1++; 
	
	for(int i = 0 ; i < w; i++){
		
		cout << data[i];
	}
	
	return 0;
} 
