#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student* next;
};
int n = 0;

struct Student* del(struct Student* head)
{
	int a;
	struct Student* p1 = head, * p2;
	scanf("%d", &a);
	p2 = p1->next;
	while (p1->num != a)
	{
		p2 = p1;
		p1 = p1->next;
		if (p1->next == NULL)
		{
			printf("%d not been found!\n", a);
			return head;
		}
	}
	p2->next = p1->next;
	free(p1);
	n--;
	printf("delete:%d\n", a);
	return head;
}
struct Student* creat()
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
	struct Student* p;
	p = creat();
	del(p);
	show(p);
	return 0;
}
