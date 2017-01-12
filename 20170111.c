#include<stdio.h>
main()
{ 
int a,b,c;
scanf("%d %d",&a,&b);
if(a>b){
for(c=b;c<=a;c++)
{  printf("%d\n",c); 
}
}elsefor(c=a;c<=b;c++)
{  printf("%d\n",c);}
}
//단을 입력하면 해당 단에 해당하는 구구단을출력하되
//거꾸로 출력
main()
{ 
int a; 
int b; 
scanf("%d" ,&a); 
for (b=9; b>=1; b--)
{ printf("%d * %d= %d\n",a,b,a*b);    
}
}//반복문이 1~10까지의 값으르 출력하고있다
//이때 5만 빼고 출력하시오
main()
{
int a;
for(a=1;
a<=10; a++){
if(a==5)   
continue;   
printf("%d\n" ,a); }
}
//입력한 수가 홀수이면 홀수출력 짝수면 짝수출력
main()
{
int a; 
scanf("%d",&a); 
if((a%2)==0) 
printf("짝수입니다")
; else      
printf("홀수입니다");
}
//세개의 수를 입력받아 큰 값을 출력하시오
main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c); 
if(a>b)
{ 
if(a>c)  
printf("%d a가 크다",a);
} else if(b>c)
{  if(b>a) 
printf("%d b가 크다",b);
} else 
printf("%d c가 크다",c);
}
//두수를 입력 받아서 둘중에 큰 변수의 값을 출력하시오
int main() 
{
int a,b;
scanf("%d",&a); 
scanf("%d",&b);
if(a<b)
{ 
printf("%d b가 크다",b);
} else if(a==b) 
printf("두 값이 같다"); 
else  printf("%d a가 크다",a);
return 0;
}
//for이용해서 구구단만들기
int main() 
{
int a;
int b;
for(a=2;a<=9; a=a+1)
{for (b=1; b<=9; b++)
{printf("%d * %d= %d\n",a,b,a*b);  
}  
}}//while사용 
int main()
{ 
int dx=1;
while(dx<100) 
{   
printf("%d",dx); 
dx=dx+2;  
}
}









