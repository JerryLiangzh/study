#include<iostream> 
#include<cstring> 
#include<cstdio> 
#include<windows.h>
#include<string.h> 
using namespace std; 
char a1[600000],b1[600000],a[800000],b[800000];
char c[800000];
int g=0; 


char a2[300000],b2[300000]; 
char a3[600000],b3[600000],c1[600000];
char b31[600000];
char result[600000],result1[600000];



int len_max;//len_max
char m[99999],n[99999];
int a4[99999]={0},b4[99999]={0},c4[99999]={0};
long lenm,lenn;


long lena,lenb,lenc,i,j,x;
long lena3,lenb3,lenc1;
long lenr,lenr1;
long lenan;

int xi=3;//项数 

char answer[100][100000];
char temp[100000];
FILE *fin,*fout; 

int main(){  

	g=1;//次方数 

	for(int l=0;l<xi;l++){
		


	//******************************************* 
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 
	scanf("%s",a1);
	strcpy(b1,a1);
	lena=strlen(a1);
	lenb=strlen(b1); 

	for (i=0;i<=lenb-1;i++) 
		b[lenb-i]=b1[i]-48; 

	for (i=0;i<=lena-1;i++) 	
		a[lena-i]=a1[i]-48; 
//将输入反向 

	for(int p=0;p<=g;p++){
		/*printf("位数1:%d位数2:%d\n",lena,lenb);*/ 
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
		/*for(i=lenc;i>=1;i--) 
			printf("%d",c[i]);*/ 
//将输出反向 
		lena=lenc; 
		if(p==g){
			goto next;
		}	
		memset(c,0,sizeof(c)); 
	}
	//******************************************* 
	next:
		
		/* 
		for(i=lenc;i>=1;i--){
			printf("%d",c[i]);
		}
		*/
		
		 
	memset(a3,0,sizeof(a3)); 
	memset(b31,0,sizeof(b31)); 
	memset(c1,0,sizeof(c1)); 
	memset(b3,0,sizeof(b3)); 	
	
	
	
	for(i=0;i<=lenc;i++){
		a3[i]=c[i];
	}
	/*	
	for(i=lenc;i>=1;i--){
		printf("%d",a3[i]);
	}	
	*/	
	lena3=lenc;
	
	scanf("%s",b31);
	lenb3=strlen(b31); 
	for (i=0;i<=lenb3-1;i++) 
		b3[lenb3-i]=b31[i]-48; 

	
		/*printf("位数1:%d位数2:%d\n",lena3,lenb3);*/ 
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

		
		/* 
		for(i=lenc1;i>=1;i--) 
			printf("%d",c1[i]);
		*/
	
	
	for(i=0;i<=lenc1;i++){
		result[i]=c1[i];
	}
	
	lenr=lenc1;
	
	
	
	printf("\nresult=:");
	for(i=lenr;i>=1;i--) 
		printf("%d",result[i]);
	
	printf("\n");
	//****************************************************************************************
	
	
	
	
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 
	scanf("%s",a1);
	strcpy(b1,a1);
	lena=strlen(a1);
	lenb=strlen(b1); 

	for (i=0;i<=lenb-1;i++) 
		b[lenb-i]=b1[i]-48; 


	for (i=0;i<=lena-1;i++) 	
		a[lena-i]=a1[i]-48; 
//将输入反向 

	for(int p=0;p<=g;p++){
		/*printf("位数1:%d位数2:%d\n",lena,lenb);*/ 
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
		/*
		for(i=lenc;i>=1;i--) 
			printf("%d",c[i]);
			*/
//将输出反向 
		lena=lenc; 
		if(p==g){
			goto next1;
		}	
		memset(c,0,sizeof(c)); 
	}
	//******************************************* 
	next1:
		
		/*for(i=lenc;i>=1;i--){
			printf("%d",c[i]);
		}*/
		
	memset(a3,0,sizeof(a3)); 
	memset(c1,0,sizeof(c1)); 
	memset(b3,0,sizeof(b3)); 
	
	for(i=0;i<=lenc;i++){
		a3[i]=c[i];
	}
	/*
		
	for(i=lenc;i>=1;i--){
		printf("%d",a3[i]);
	}	
	*/	
	lena3=lenc;
		
	
	scanf("%s",b31);
	lenb3=strlen(b31); 
	for (i=0;i<=lenb3-1;i++) 
		b3[lenb3-i]=b31[i]-48;  
	
	
	
		/*printf("位数1:%d位数2:%d\n",lena3,lenb3);*/ 
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

		
		/* 
		for(i=lenc1;i>=1;i--) 
			printf("%d",c1[i]);
		*/	
	
	for(i=0;i<=lenc1;i++){
		result1[i]=c1[i];
	}
	
	lenr1=lenc1;
	
	
	
	printf("\nresult1=:");
	for(i=lenr1;i>=1;i--) 
		printf("%d",result1[i]);//正常倒序 
	
	//********************************************************************


	for(i=0;i<=lenr;i++){
		m[lenr-i]=result[i]+48;
	}
	
	for(i=0;i<=lenr1;i++){
		n[lenr1-i]=result1[i]+48;
	}
	
	/*scanf("%s%s",m,n);
	lenm=strlen(m);
	lenn=strlen(n);*/
	lenm=lenr;
	lenn=lenr1;
	/*
	for(i=0;i<lenm;i++) 
		printf("%d",m[i]);
	
	
	printf("\n");
	for(i=0;i<lenn;i++) 
		printf("%d",n[i]);
	
	*/
	printf("\n\n answer:");
	
	
	
	if(lenm>lenn){
		len_max=lenm;
	}
	else{
		len_max=lenn;
	} 
	
	
	
	
	for(i=0;i<lenm;i++){
    	a4[i]=m[lenm-1-i]-'0';
	}
	for(i=0;i<lenn;i++){
    	b4[i]=n[lenn-1-i]-'0';
	}
	int k=0;//不要忘了
	for(i=0;i<=len_max;i++){
    	c4[i]=a4[i]+b4[i]+k;
    	k=c4[i]/10;
    	c4[i]%=10;
	}
	int flag=0;
	for(i=len_max;i>=0;i--){
		if(c4[i]){
			flag=1;
		}
		if(flag){
			printf("%d",c4[i]);
		}
			
	}
	if(!flag)
		printf("0");
	
	//*******************************************************************************
	
	for(i=len_max;i>=0;i--){
		if(c4[i]){
			flag=1;
		}
		if(flag){
			answer[l][i]=c4[i];
		}
			
	}//潜在的bug 
	
	printf("\n answer remember=\n");
	
	for(i=len_max;i>=0;i--){
		printf("%d",answer[l][i]);	
	} 
	
	fout=fopen("answer.txt","a+");
	for(i=len_max;i>=0;i--) 
	fprintf(fout,"%d",answer[l][i]);	
	fprintf(fout,"\n");
	
	
	
	
	
	printf("\n\n");
	
	}//big for
	
	
	
	
	
	
	//********************************************************************
	
	

		
	return 0;

}


