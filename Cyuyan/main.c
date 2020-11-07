//100以内素数
#include<stdio.h> 
#include<stdlib.h> 

int main() 

{ 

int i,j,n=0; 

for(i=1;i<101;i++) 

{  

for(j=2;j<i;j++) 

{ 

if(i%j==0) 

break; 

} 

if(i!=j) 

continue; 

//if(j==i) 

  { 

  printf("%d\t",i); 

  n++; 

  } 

} 

printf("%d\n",n); 

system("pause");  

}  