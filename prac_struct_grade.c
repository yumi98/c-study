//
//  main.c
//  prac_struct_grade
//
//  Created by 김유미 on 2017. 1. 26..
//  Copyright © 2017년 김유미. All rights reserved.
//  국어,영어,수학점수,총점,랭킹(순위)을 매기고 출력하세요
#include<stdio.h>
struct subject{
    int subname[5];
};
struct sung{
    char name[10];
    float avg;
    struct subject sub;
};
int main()
{
    struct sung man[3];
    char *s_n[]={"국어", "영어", "수학"};
    int rx,cx;
    for(rx=0;rx<3;rx++)
    {
        //이름
        printf("이름입력 :");
        gets(man[rx].name);
        man[rx].sub.subname[3]=0;
        man[rx].sub.subname[4]=1;
        //국영수
        for(cx=0;cx<3;cx++)
        {
            printf("%s 점수를 입력:", s_n[cx]);
            scanf("%d", &man[rx].sub.subname[cx]);
            man[rx].sub.subname[3] += man[rx].sub.subname[cx];
        }
        man[rx].avg = man[rx].sub.subname[3]/(float)3;
        getchar();
    }
    for(rx=0;rx<3;rx++)
    {
        for(cx=0;cx<3;cx++)
        {
            
            if(man[rx].sub.subname[3]<man[cx].sub.subname[3])
                man[rx].sub.subname[4]++;
        }
    }
    for(rx=0;rx<3;rx++)
    {
        //이름
        puts(man[rx].name);
        for(cx=0;cx<5;cx++)
        {
            //국영수 총점 랭킹
            
            printf("%3d ", man[rx].sub.subname[cx]);
        }
        puts("");
    }
}
