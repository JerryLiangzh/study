#include<stdio.h>
#include<string.h>
int main(void)
{
FILE *fin,*fout;
int len_max,i;//len_max
char m[6000],n[6000]; 
char a[8000],b[8000],c[8000];
char a1[6000],b1[6000]; 
char f[600];
long lena,lenb;
memset(n,0,sizeof(n)); 
memset(m,0,sizeof(m));
memset(a,0,sizeof(a)); 
memset(b,0,sizeof(b)); 
memset(c,0,sizeof(c));
memset(b1,0,sizeof(b1)); 
memset(a1,0,sizeof(a1));

fin=fopen("f.txt","rb");
for(int i=0;i<4;i++)
fscanf(fin,"%d",&f[i]);


for(int i=0;i<4;i++){
	printf("%d",f[i]);
	printf("\n");
}


 


for(int q=strlen(m);q>=1;q--) 
printf("%d",m[q]);

printf("\n\n");


for(int q=strlen(n);q>=1;q--) 
printf("%d",n[q]);

printf("\n\n");
if(strlen(m)>strlen(n)){
	len_max=strlen(m);
}
else{
	len_max=strlen(n);
} 
for(i=0;i<strlen(m);i++){
    a[i]=m[strlen(m)-1-i]-'0';
}
for(i=0;i<strlen(n);i++){
    b[i]=n[strlen(n)-1-i]-'0';
}
int k=0;//²»ÒªÍüÁË
for(i=0;i<=len_max;i++){
    c[i]=a[i]+b[i]+k;
    k=c[i]/10;
    c[i]%=10;
}
int flag=0;
for(i=len_max;i>=0;i--){
if(c[i]){
	flag=1;
}
            
if(flag)
printf("%d",c[i]);
}
if(!flag)
printf("0");
return 0;
}
