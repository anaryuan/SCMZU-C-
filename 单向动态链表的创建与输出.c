#include<stdio.h>//2. 单向动态链表的创建与输出
#include<stdlib.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};
int n = 0;
struct Student* creat()//创建链表函数
{
	struct Student* head = NULL, * p1, * p2;
	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));
	scanf("%d", &p1->num);
	while (p1->num != 0)
	{
		scanf("%f", &p1->score);
		n++;
		if (n == 1)//如果是头结点
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

void show(struct Student* head)
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
	struct Student* head;
	head = creat();
	show(head);
	return 0;
}
