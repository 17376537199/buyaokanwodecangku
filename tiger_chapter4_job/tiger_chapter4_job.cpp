// tiger_chapter4_job.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<math.h>
int ch43_caculate_sum()
{
	int i = 0;

	return 0;
}

int ch46_guess_num()
{
	int denominator, flag;
	double item, pi;                     /* pi ���ڴ���ۼӺ� */

										 /* ѭ����ʼ�� */
	flag = 1;                            /* flag ��ʾ�� i ��ķ��ţ���ʼΪ�� */
	denominator = 1;                     /* denominator��ʾ�� i ��ķ�ĸ����ʼΪ1 */
	item = 1.0;                          /* item �д�ŵ� i ���ֵ����ֵȡ 1 */
	pi = 0;                              /* ���ۼӺ� pi �ĳ�ֵΪ0 */

	while (fabs(item) >= 0.0001) {         /* ��|item| �� 0.0001ʱ��ִ��ѭ�� */
		item = flag * 1.0 / denominator; /* ����� i ���ֵ */
		pi = pi + item;                  /* �ۼӵ� i ���ֵ */
		flag = -flag;                    /* �ı���ţ�Ϊ��һ��ѭ����׼�� */
		denominator = denominator + 2;   /* ��ĸ����2 ��Ϊ��һ��ѭ����׼�� */
	}
	pi = pi * 4;                         /* ѭ������Ľ���� pi/4 */
	printf("pi = %.4f\n", pi);

	return 0;
}

int main()
{
	//ch43_caculate_sum();
	//ch46_guess_num();
    return 0;
}

