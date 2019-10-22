// tiger_chapter4_job.cpp : 定义控制台应用程序的入口点。
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
	double item, pi;                     /* pi 用于存放累加和 */

										 /* 循环初始化 */
	flag = 1;                            /* flag 表示第 i 项的符号，初始为正 */
	denominator = 1;                     /* denominator表示第 i 项的分母，初始为1 */
	item = 1.0;                          /* item 中存放第 i 项的值，初值取 1 */
	pi = 0;                              /* 置累加和 pi 的初值为0 */

	while (fabs(item) >= 0.0001) {         /* 当|item| ≥ 0.0001时，执行循环 */
		item = flag * 1.0 / denominator; /* 计算第 i 项的值 */
		pi = pi + item;                  /* 累加第 i 项的值 */
		flag = -flag;                    /* 改变符号，为下一次循环做准备 */
		denominator = denominator + 2;   /* 分母递增2 ，为下一次循环做准备 */
	}
	pi = pi * 4;                         /* 循环计算的结果是 pi/4 */
	printf("pi = %.4f\n", pi);

	return 0;
}

int main()
{
	//ch43_caculate_sum();
	//ch46_guess_num();
    return 0;
}

