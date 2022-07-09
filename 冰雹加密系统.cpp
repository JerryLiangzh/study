#include<stdio.h>
#include<windows.h>
int a=0,b=0,w=0;
int cs1=0,cs2=0,cs3=0,cs4=0,cs5=0;
int input=0;
int c=0;
int tr=0; 
long long int out1=0,out2=0,out3=0;
int ws(int input,int ww){
	a=input%ww;
	b=(input-a)/ww;
	if(b>=1&&b<=9){
		return 1;
	}
	else{
		return 0;
	}
}



int round(int cs,int shuru[20]){
	for(int j=0;j<w;j++){
		rr:
		cs=(cs+1)*(11+shuru[j]*2);
		if(ws(cs,10000)==1){
			rr1:
			if(cs%2==0){
				cs=cs/2;
			}
			if(cs%2==1){
				cs=cs*3+1;
			}
			if(ws(cs,1000)==0){
			goto rr1;
			}
		}
		if(ws(cs,1000)==0){
			goto rr;
		}
	}
	return cs;
}


int round1(int cs,int shuru[20],int der[12]){
	for(int j=0;j<w;j++){
		r1:
		cs=cs*(10+der[shuru[j]])+10*der[shuru[j]]+der[shuru[j]+1];
		if(ws(cs,10000)==1||ws(cs,100000)==1){
			r:
			if(cs%2==0){
				cs=cs/2;
			}
			if(cs%2==1){
				cs=cs*3+1;
			}
			if(ws(cs,1000)==0){
			goto r;
			}
		}
		if(ws(cs,1000)==0){
			goto r1;
		}
			
	}
	return cs;
}



int main(){
	int shuru[20];
	int der[12];
	for(int j=0;j<=18;j++){
		shuru[j]=0;
	}
	shuru[1]=9;
	shuru[2]=8; 
	printf("位数:\n\n");
	scanf("%d",&w);
	system("cls");
	for(int j=0;j<w;j++){
		scanf("%d",&shuru[j]);
	}
	
	system("cls");
	cs1=shuru[0]+10;
	cs2=shuru[1]+10;
	cs3=shuru[2]+10;
	
	
	cs1=round(cs1,shuru);
	cs2=round(cs2,shuru);
	cs3=round(cs3,shuru);
	
	
	
	
	
		a=cs1%1000;
		b=(cs1-a)/1000;
		der[0]=b;
		cs1=cs1-b*1000;
		a=cs1%100;
		b=(cs1-a)/100;
		der[1]=b;
		cs1=cs1-b*100;
		a=cs1%10;
		b=(cs1-a)/10;
		der[2]=b;
		cs1=cs1-b*10;
		der[3]=cs1;
		
		
		a=cs2%1000;
		b=(cs2-a)/1000;
		der[4]=b;
		cs2=cs2-b*1000;
		a=cs2%100;
		b=(cs2-a)/100;
		der[5]=b;
		cs2=cs2-b*100;
		a=cs2%10;
		b=(cs2-a)/10;
		der[6]=b;
		cs2=cs2-b*10;
		der[7]=cs2;
		
		
		
		
		
		a=cs3%1000;
		b=(cs3-a)/1000;
		der[8]=b;
		cs3=cs3-b*1000;
		a=cs3%100;
		b=(cs3-a)/100;
		der[9]=b;
		cs3=cs3-b*100;
		a=cs3%10;
		b=(cs3-a)/10;
		der[10]=b;
		cs3=cs3-b*10;
		der[11]=cs3;
		
		
		
	
	cs5=der[10]+10;
	cs4=der[11]+10;
	
	cs4=round1(cs4,shuru,der);
	cs5=round1(cs5,shuru,der);
	

	
	
	
	
	
	
	out1=cs4*(der[0]*100+der[1]*10+der[2])+der[6]*100+der[7]*10+der[8];
	out2=cs5*(der[3]*100+der[4]*10+der[5])+der[9]*100+der[10]*10+der[11];
	
	
	
	out3=out1*10000000+out2;
	
	printf("加密结果：");
	printf("\n\n%I64d",out3);
	
	Sleep(10000);
	return 0;
}
