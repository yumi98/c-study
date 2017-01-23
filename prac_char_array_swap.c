//
//  main.c
//  prac_char_array_swap
//
//  Created by 김유미 on 2017. 1. 23..
//  Copyright © 2017년 김유미. All rights reserved.
//  문자열 스왑하기

#include <stdio.h>
void func(char (*a)[10])
{
    char t[10];
    strcpy(t,a[2]);
    strcpy(a[2],a[1]);
    strcpy(a[1],a[0]);
    strcpy(a[0],t);
}
int main()
{
    char a[3][10]={"aaa","bbb","ccc"};
        //aaa
        //bbb
        //ccc
        
        func(a);
        //ccc
        //aaa
        //bbb
        puts(a[0]);
        puts(a[1]);
        puts(a[2]);
        
        return 0;
}
