//
//  main.c
//  prac_two_dimensional_array
//
//  Created by 김유미 on 2017. 1. 22..
//  Copyright © 2017년 김유미. All rights reserved.
// 이차원배열 row,col의 합구하기

#include <stdio.h>

int main(){
    int a[2][3]={1,2,3,4,5,6};
    int col_sum[3]={0};
    int row_sum[2]={0};
    int rx, cx;
    
    for(rx=0;rx<2;rx++) //0 ~ 1
    {
        for(cx=0;cx<3;cx++)//0 ~ 2
        {
            row_sum[rx]+= a[rx][cx];
            col_sum[cx]+= a[rx][cx];
        }
    }
    
    for(rx=0;rx<2;rx++) //0 ~ 1
    {
        for(cx=0;cx<3;cx++)//0 ~ 2
        {
            printf("%d ", a[rx][cx]);
        }
        printf("%d \n", row_sum[rx]);
    }
    for(cx=0;cx<3;cx++){
        printf("%d ", col_sum[cx]);
    }
    printf("\n");
    return 0;
}
