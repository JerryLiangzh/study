#include<iostream> 
#include<cstring> 
#include<cstdio> 
using namespace std; 
char a1[3000000],b1[3000000]; 
int a[6000000],b[6000000],c[6000000];
long lena,lenb,lenc,i,j,x;
int fi,fi1=0;
int main() { 
FILE*fout,*fin; 
memset(a,0,sizeof(a)); 
memset(b,0,sizeof(b)); 
memset(c,0,sizeof(c)); 
freopen("乘数1.txt","rb",stdin);
gets(a1);
freopen("乘数2.txt","rb",stdin);
gets(b1);
lena=strlen(a1);
lenb=strlen(b1); 
for (i=0;i<=lena-1;i++) 
a[lena-i]=a1[i]-48; 
for (i=0;i<=lenb-1;i++) 
b[lenb-i]=b1[i]-48; 

printf("位数1:%d位数2:%d\n",lena,lenb);

for (i=1;i<=lena;i++) { 


x=0;  
fi=100*i/lena;
if(fi!=fi1){
printf("已完成%d%\n",fi);	
}
fi1=fi;



 
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


fout=fopen("乘法结果.txt","wb");
for(i=lenc;i>=1;i--) 
fprintf(fout,"%d",c[i]);
return 0; 
}
