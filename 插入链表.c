#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//4.动态链表插入学生数据
#include <stdlib.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};
int n = 0;
struct Student *creat()//创建链表函数
{
	struct Student* head = NULL, * p1, * p2;
	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));
	scanf("%d", &p1->num);
	while (p1->num != 0)
	{
		scanf("%f", &p1->score);
		n++;
		if (n == 1)
		head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct Student*)malloc(sizeof(struct Student));
		scanf("%d", &p1->num);
	}
	p2->next = NULL;
	return head;
}

struct Student* insert(struct Student* head, struct Student* pnew)
{
	struct Student* p1, * p2;
	p1 = p2 = head;
	if (head == NULL)
	{
		head = pnew;
		pnew->next = NULL;
	}
	else
	{
		while ((pnew->num) > (p1->num)&&p1->next!=NULL)
		{
			p2 = p1;
			p1 = p1->next;
		}
		if ((pnew->num) <= (p1->num))
		{
			if (head == p1)
			{
				head = pnew;
				pnew->next = NULL;
			}
			else
			{
				p2->next = pnew;
				pnew->next = p1;
			}
		}
		else
		{
			p1->next = pnew;
			pnew->next = NULL;
		}
		n++;
	}
	return head;
}

void show(struct Student* head)//链表输出函数
{
	struct Student* p = head;
	printf("Now,These %d records are:\nnum\tscore\n", n);
	if (p != NULL)
	{
		while (p != NULL)
		{
			printf("%d\t%5.1f", p->num, p->score);
			p = p->next;
			if (p != NULL)
				printf("\n");
		}
	}
}
int main()
{
	struct Student* p, * pnew;
	p=creat();
	pnew = (struct Student*)malloc(sizeof(struct Student));
	scanf("%d", &pnew->num);
	scanf("%f", &pnew->score);
	insert(p, pnew);
	show(p);
	return 0;
}
