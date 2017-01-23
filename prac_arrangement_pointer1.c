//
//  main.c
//  prac_arrangement_pointer1.c
//
//  Created by 김유미 on 2017. 1. 23..
//  Copyright © 2017년 김유미. All rights reserved.
//  배열포인터1

#include <stdio.h>
void func(char **p)
{
    puts(p[0]);
    puts(p[1]);
    puts(p[2]);
}
int main()
{
    char *p[3]={"aaa","bbb","ccc"};
    func(p);
    return 0;
}
