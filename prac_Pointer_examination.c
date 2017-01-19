//2017.01.18  
#include<stdio.h>
#pragma warning(disable: 4996)
print_result(char *s_n, int cnt, float *e_r, float tot, float avg, char grd)
{
 int dx;
	puts(s_n);
	for (dx = 0; dx<cnt; dx++)
		{
		printf("%d차 시험점수는 : ", dx + 1);
		printf("%f\n", *(e_r + dx)); //p[dx]  
		}
	printf("%f\n", tot);
	printf("%f\n", avg);
	printf("%c\n", grd);
	}
float get_average(float total, int cnt)
{
	return total / cnt;
	}
char get_grade(float avg)
{
	return avg>50 ? 'A' : 'F';
	}
float get_total(float *p, int cnt)
{
	int dx;
	float sum = 0;
	for (dx = 0; dx<cnt; dx++)
		{
		sum += p[dx];
		}
	return sum;
	}
void get_exm_rlt(float *p, int cnt)
{
	int dx;
	for (dx = 0; dx<cnt; dx++)
		{
		printf("%d차 시험점수는 : ", dx + 1);
		scanf("%f", p + dx);
		}
}
int get_exm_cnt(void)
{
	int cnt;
	printf("시험 회수");
    scanf("%d", &cnt);
	return cnt;
}
void get_sub_name(char *p)
{
	printf("과목명입력 : ");
	scanf("%s", p);
}
void main(void)
{
	char sub_name[15]; /* 과목 이름 */
	float exm_rlt[10]; /* 시험 점수 */
	int exm_cnt = 0; /* 시험 회수 */
	float total; /* 총점 */
	float average; /* 평균 */
	char grade; /* 학점 */
	
	get_sub_name(sub_name); /* 과목 이름 */
	exm_cnt = get_exm_cnt(); /* 시험 회수 */
	get_exm_rlt(exm_rlt, exm_cnt);/* 시험 점수*/
	total = get_total(exm_rlt, exm_cnt); /* 총점 계산 */
	average = get_average(total, exm_cnt); /* 평균 계산 */
	grade = get_grade(average); /* 학점을 계산합니다. */
	print_result(sub_name, exm_cnt, exm_rlt, total, average, grade); /* 모든 결과 */
}
