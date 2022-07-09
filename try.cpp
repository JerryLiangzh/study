#include<stdio.h>
int main(){
	int block[3][3][3];
	int n=1;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<=2;k++){
				block[i][j][k]=n;
				n++;
			}
		}
	}
	
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<=2;k++){
				printf("%d\n",block[i][j][k]);	
			}
		}
	}
	
	//ÖÐÐÄ¿é:14
	
	
	
	return 0;
	
}
