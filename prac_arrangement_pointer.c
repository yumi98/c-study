//
//  main.c
//  prac_arrangement_pointer
//
//  Created by 김유미 on 2017. 1. 20..
//  Copyright © 2017년 김유미. All rights reserved.
//  배열포인터

#include <stdio.h>
void get_num(int (*p)[3])  //배열포인터
{
    scanf("%d", &p[0][0]);
}
void put_num(int (*p)[3])
{
    printf("%d", p[0][0]);  //배열포인터
}
int main()
{
    int a[2][3];
    
    get_num(a);
    put_num(a);
    return 0;
    
    
}



