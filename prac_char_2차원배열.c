//
//  main.c
//  prac_char_2차원배열
//
//  Created by 김유미 on 2017. 1. 23..
//  Copyright © 2017년 김유미. All rights reserved.
//  캐릭터 이차원 배열

#include <stdio.h>
#include<stdio.h>
void func1(char **p)
{
    puts(p[0]);
    puts(p[1]);
    puts(p[2]);
}
void func2(char *p[]) //char **p //char *p[10]
{
    printf("%c\n",p[0][2]); //(*p)[2] //*(p[0]+2) //*(*p+2)
    printf("%s\n",&p[1][3]); //p[1]+3 //*(p+1)+3
    printf("%s\n",p[2]);
}


main()
{
    char *p[3]={"aaa","bbb","ccc"};
    //함수에서 home의 m출력
    //       decent의 ent출력
    //       scroll의 scroll 전부 출력 하는 함수 만들기
    char *a[]={"home","decent","scroll"};
    func2(a);
}
