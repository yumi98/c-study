main()
{ 
int a; 
printf("점수를 입력하시오");
scanf("%d",&a);
switch(a/10){
case 10:  
case 9:  
printf("A학점\n");
break;       
case 8: 
printf("B학점\n");
break;    
case 7:  
printf("C학점\n");
break;
default:  
printf("F학점\n");
}
}
//goto문을 사용하여 1~10까지의
//합 55를 출력하시오
int main()
{ 
int i,num,sum=0;
printf("자연수 입력");
scanf("%d",&num);
if(num>=1 && num<=10) 
goto AAA;
AAA:
for(i=1;i<=10;i++){
sum=sum+i; }
printf("%d",sum);
goto END;
END: 
return 0;
}
//화폐종류가 1000,500,100 짜리만 있다고 가정
main()
{ 
int a;
int sum=0;
//int f=0;
while(1){
printf("화폐입력");
scanf("%d",&a);
if(a==1000 || a==500 || a==100) {
sum=sum+a; 
printf("총합 %d", sum); 
} else if(a==0){
printf("총합 %d", sum);
break;
} else 
printf("잘못된 화폐단위 입니다"); 
}
}
//1~100까지 3의배수와 5의배수를 출력하시오
main()
{
int a; 
for(a=1;a<=100;a++){  
if((a%3)==0 && (a%5)==0)  
printf("%d\n",a);
}
} 







