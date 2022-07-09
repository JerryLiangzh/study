#include<iostream> 
#include<cstring> 
#include<cstdio> 
#include<windows.h>
using namespace std; 
char a1[600000],b1[600000],a[800000],b[800000];
char c[800000];
int g=0; 

char a2[300000],b2[300000]; 
char a3[600000],b3[600000],c1[600000];

char result[600000],result1[600000];



int len_max;//len_max
char m[99999],n[99999];
int a4[99999]={0},b4[99999]={0},c4[99999]={0};
long lenm,lenn;


long lena,lenb,lenc,i,j,x;
long lena3,lenb3,lenc1;
long lenr,lenr1;
int main(){  

	//******************************************* 
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 
	scanf("%s%s",a1,b1);
	lena=strlen(a1);
	lenb=strlen(b1); 

	for (i=0;i<=lenb-1;i++) 
		b[lenb-i]=b1[i]-48; 

	for (i=0;i<=lena-1;i++) 	
		a[lena-i]=a1[i]-48; 
//将输入反向 
	g=1;

	for(int p=0;p<=g;p++){
		printf("位数1:%d位数2:%d\n",lena,lenb);
		for (i=1;i<=lena;i++) { 
			x=0;  
			for (j=1;j<=lenb;j++)  { 
				c[i+j-1]=a[i]*b[j]+x+c[i+j-1]; 
				x=c[i+j-1]/10; c[i+j-1] %= 10;  
			} 
			c[i+lenb]=x; 
		} 
		lenc=lena+lenb; 
//performed


		while (c[lenc]==0&&lenc>1) 
		lenc--;
		for(int q=lenc;q>=1;q--){
			a[q]=c[q];//不用反向 
		}
		for(i=lenc;i>=1;i--) 
			printf("%d",c[i]);
//将输出反向 
		lena=lenc; 
		if(p==g){
			goto next;
		}	
		memset(c,0,sizeof(c)); 
		printf("\n\n");
	}
	//******************************************* 
	next:
		
		printf("\n\n\n");
		for(i=lenc;i>=1;i--){
			printf("%d",c[i]);
		}
		
	memset(a3,0,sizeof(a3)); 
	memset(b3,0,sizeof(b3)); 
	memset(c1,0,sizeof(c1)); 
	
	for(i=0;i<=lenc;i++){
		a3[i]=c[i];
	}
	printf("\n\n\na3=");
		
	for(i=lenc;i>=1;i--){
		printf("%d",a3[i]);
	}	
		
	lena3=lenc;
		
	printf("\n*******************************\n\n");
	
	
	for(i=0;i<=2;i++){
		scanf("%d",&b3[i]);
	}
	
	
	lenb3=strlen(b3); 
	
	
		printf("位数1:%d位数2:%d\n",lena3,lenb3);
		for (i=1;i<=lena3;i++) { 
			x=0;  
			for (j=1;j<=lenb3;j++)  { 
				c1[i+j-1]=a3[i]*b3[j]+x+c1[i+j-1]; 
				x=c1[i+j-1]/10; c1[i+j-1] %= 10;  
			} 
			c1[i+lenb3]=x; 
		} 
		lenc1=lena3+lenb3; 
	
	
	
		while (c1[lenc1]==0&&lenc1>1) 
		lenc1--;

		printf("\n\n*******************************\n\n");
		
		
		for(i=lenc1;i>=1;i--) 
			printf("%d",c1[i]);
	
	
	
	for(i=0;i<=lenc1;i++){
		result[i]=c1[i];
	}
	
	lenr=lenc1;
	
	
	printf("\n\n*******************************\n\n");
	
	printf("result=:");
	for(i=lenr;i>=1;i--) 
		printf("%d",result[i]);	
		
	return 0;

}




