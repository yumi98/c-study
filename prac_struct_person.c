//
//  main.c
//  prac_struct_person
//
//  Created by 김유미 on 2017. 1. 26..
//  Copyright © 2017년 김유미. All rights reserved.
//  이름,전화번호,주소 출력
#include<stdio.h>
struct person{
    char name[100];
    char tel[12];
    char b_type[100];
};
int main()
{
    struct person man;
    struct person girl;

    scanf("%s",man.name);
    scanf("%s",man.tel);
    scanf("%s",man.b_type);
    
    girl=man;
    
    printf("%s\n",girl.name);
    printf("%s\n",girl.tel);
    printf("%s\n",girl.b_type);
    
    return 0;
}
