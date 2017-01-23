//
//  main.c
//  prac_function_pointer

//  Created by 김유미 on 2017. 1. 23..
//  Copyright © 2017년 김유미. All rights reserved.
//  함수포인터 function pointer

#include <stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}

int temp(int (*p_func)(int,int),int a,int b)
{
    int rlt;
    rlt = p_func(a,b);
    return rlt;
}
void main()
{
    int a=10,b=5;
    int rlt;
    rlt=temp(add,a,b);
    printf("%d\n",rlt);
}
