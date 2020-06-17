#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	//从1-8的累加和
	int i = 0;
	int sum = 0;
	while (i < 8) {
		sum += i;	//累加的核心代码
		i++;
	}
	*/

	/*
	//猴子吃桃，猴子第一天摘了若干桃子，随即吃了一半又一个，
	//以后每天都吃前一天剩下的一半又一个，到第十天再吃时只剩下了一个，
	//问第一天摘了多少桃子
	int sum = 1, i = 10;	//i:天数	sum:桃子的数量
	do
	{
		sum = 2 * (sum + 1);
		i--;
	} while (i > 1);
	printf("sum = %d\n", sum);
	return 0;
	*/
	//调试的时候确保路径中无中文以及特殊字符

	//const int num = 100;	//常量无法被修改

	//循环输入玩家的年龄，如果年龄为负则停止输入，提示输入错误
	//1、定义玩家的年龄变量
	//2、循环输入年龄
	//3、如果输入的年龄为负 ——输入完毕后，就需要立即判断变量的值
	
	/*
	int age;
	for (;;)
	{
		printf("请输入你的年龄：");
		scanf_s("%d", &age);
		for (;;)
		{
			if (age < 0)
			{
				printf("年龄不能为负！");
				break;
			}
		}
		printf("程序已结束！");
	}
	*/


	/*我们书写一个猜商品价格的小游戏
	1、我们设定一个车商品的价格，让用户去猜
	2、用户输入猜测的价格后，系统给出大、小的提示
	3、如果在5轮内就猜到正确的价格，给与奖励提示
	//循环次数是多少？
	// 每猜一次，猜测总次数+1
	*/


	/*
	double price = 7890;//让用户猜的价格，也可以使用随机函数生成
	double guessprice;	//用户猜测的商品价格
	double count = 0;
	int i = 0;
	for (i; i < 3; i++)
	{
		printf("请输入猜测的商品价格：");
		scanf_s("%lf", &guessprice);
		if (guessprice > price)
		{
			printf("大了！\n");
		}
		else if (guessprice < price)
		{
			printf("小了！\n");
		}
		else {
			printf("恭喜，猜对了！\n");
			printf("您一共猜了%d次。\n", i + 1);
			break;
		}
		printf("您一共猜了%d次。\n", i + 1);
	}

	*/



	/*
	char sex;
	sex = getchar();
	flush(stdin);
	if(sex)
	*/


	
	//输入5次玩家的年龄，统计出其实输入错误的次数（即年龄小于0的个数），
	/*
	int age;
	int i;
	int count = 0;
	for (i = 0; i < 5; i++) 
	{
		printf("请输入玩家的年龄：");
		scanf_s("%d", &age);
		if (age >= 0) 
		continue;	//跳过正确的情况
		count++;
		printf("输入错误%d次！\n", count);
	}
	*/

	/*
	//求1-100之间的偶数和
	int i;
	int sum = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 != 0)	//奇数的情况
			continue;	//跳过奇数的情况
		sum += i;
	}
	printf("sum=%d", sum);
	*/
	

	//嵌套循环打印星号图形
	//两个关键：
	//1、行数——一共有几行
	//2、列数——每行有几颗星
	int i;
	int j;
	for (i = 0; i < 7; i++)	//外层循环控制行（行数、换行）
	{
		for (j = 0; j <= 2 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i*2; j++)	//内层循环控制列（控制列数、列的符号）
		{
			printf("*");
		}
		printf("\n");
	}
} 