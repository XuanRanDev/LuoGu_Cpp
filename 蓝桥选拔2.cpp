#include "stdio.h"
#include "string.h"

int main(){
	
	char data[5] = {'m','d','k','g','t'};

	char result[50000][5];
	
	int len = 0,temp = 0;;
	
	int xh[5] = {0,0,0,0,0};
	
	for(xh[0] = 0 ; xh[0]< 5 ; xh[0]++){
		
			for( xh[1] = 0 ; xh[1] < 5 ; xh[1]++){
				
					for( xh[2] = 0 ; xh[2] < 5 ; xh[2]++){
						
							for(xh[3] = 0 ; xh[3] < 5 ; xh[3]++){
								
								for( xh[4] = 0 ; xh[4] < 5 ; xh[4]++){
									
									//·ÀÖ¹×Ö·ûÖØ¸´
									int flag = 1 ;
									for(int i = 0 ; i < 5 ; i++){
										
										for(int j = 0; j < 5 ; j++){
											
												if(xh[i] == xh[j] && i!=j){
													flag=0;

												}
										}	
									} 
									if(flag == 1){
										result[len][temp++] = data[xh[0]];
										result[len][temp++] = data[xh[1]];
										result[len][temp++] = data[xh[2]];
										result[len][temp++] = data[xh[3]];
										result[len][temp++] = data[xh[4]];
										len++;

									}
							

								}
							}
					}
			
			}	
	
	}
	
	printf("¹²%d¸ö\n",len);
	for(int i = 0 ; i <= len ; i ++){
		
		for(int j = 0 ; j < 5 ; j++){
			printf("%c",result[i][j]);
		}
		
		//printf("\n");
	}
} 
