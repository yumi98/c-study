//
//  main.c
//  prac_sizeof_2차원배열
//
//  Created by 김유미 on 2017. 1. 25..
//  Copyright © 2017년 김유미. All rights reserved.
//  이차원배열 포인터형

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    
    p=malloc(sizeof(int)*1); //4
    p=calloc(1,sizeof(int)); //4 만들고 0으로 초기화
    *p=1;
    printf("%d\n",*p);
    free(p);
}
