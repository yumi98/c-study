//
//  main.c
//  prac_multiple_pointer_swap
//
//  Created by 김유미 on 2017. 1. 20..
//  Copyright © 2017년 김유미. All rights reserved.
//  다중포인터로 swap하기

#include <stdio.h>
void swap0(int *a,int *b)
{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void swap1(int **a, int **b)
{
    int tmp;
    tmp=**a;
    **a=**b;
    **b=tmp;
}
void swap2(int ***a, int ***b)
{
    int tmp;
    tmp=***a;
    ***a=***b;
    ***b=tmp;
}

int main()
{
    int a=10,b=20;
    int *ap=&a, *bp=&b;
    int **app=&ap;
    int **bpp=&bp;
    
    swap0(&a,&b);
    swap1(&ap,&bp);
    swap2(&app,&bpp);
    
    printf("%d %d\n",a,b);
    printf("%d %d\n",*ap,*bp);
    printf("%d %d\n",**app,**bpp);
    return 0;
}
