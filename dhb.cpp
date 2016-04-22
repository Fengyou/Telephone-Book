#include"contact.h"


int find(char *p, Pcon pcon)
{
	int i;
	for (i = 0; i < pcon->count; i++)
	{
		if (strcmp(p, pcon->dhb[i].name) == 0)
			return i;
		else
			return -1;
	}
}
void add_peo(Pcon pcon)
{
	if (pcon->count < MAX_PEO)
	{

		printf("请输入姓名:\n");
		scanf_s("%s", pcon->dhb[pcon->count].name, NAME_LEN);
		printf("请输入年龄:\n");
		scanf_s("%d", &(pcon->dhb[pcon->count]).age,4);
		printf("请输入性别：\n");
		scanf_s("%s", pcon->dhb[pcon->count].sex, SEX_LEN);
		printf("请输入电话:\n ");
		scanf_s("%s", pcon->dhb[pcon->count].tele,TELE_LEN);
		printf("请输入地址:\n");
		scanf_s("%s", pcon->dhb[pcon->count].addr,ADDR_LEN);
		pcon->count++;
		printf("已添加成功！\n");
	}
	else
	{
		printf("电话本已满！\n");
		return ;
	}
}
void del_peo(Pcon pcon)
{
	int i, j;
	char name[20];
	printf("请输入要删除的姓名：\n");
	scanf_s("%s", name, NAME_LEN);
	j = find(name, pcon);
	if (j == -1)
	{
		printf("要删除的人不存在！\n");
		return;
	}
	else
	{
		for (i = j; i < pcon->count; i++)
		{
			pcon->dhb[i] = pcon->dhb[i + 1];
		}		
	}
	pcon->count--;
	printf("删除成功！\n");
}
void search(Pcon pcon)
{
	int i, j;
	char name[20];
	printf("请输入要查找的姓名：\n");
	scanf_s("%s", name, NAME_LEN);
	for (i = 0; i < pcon->count; i++)
	{
		j = find(name, pcon);
		if (j == -1)
		{
			printf("要查找的人不存在！\n");
			return;
		}
		else
		{
			printf("姓名：%s\t", pcon->dhb[i].name);
			printf("年龄：%d\t", pcon->dhb[i].age);
			printf("性别：%s\t", pcon->dhb[i].sex);
			printf("电话：%s\t", pcon->dhb[i].tele);
			printf("地址：%s\n", pcon->dhb[i].addr);
		}
	}
}
void modify(Pcon pcon)
{
	int j;
	char name[20];
	printf("请输入要修改的姓名：\n");
	scanf_s("%s", name, NAME_LEN);
	j = find(name, pcon);
	if (j == -1)
	{
		printf("要修改的人不存在！\n");
		return;
	}
	else
	{
		printf("请输入姓名:\n");
		scanf_s("%s", pcon->dhb[j].name, NAME_LEN);
		printf("请输入年龄:\n ");
		scanf_s("%d", &(pcon->dhb[j]).age,4);
		printf("请输入性别:\n");
		scanf_s("%s", pcon->dhb[j].sex,SEX_LEN );
		printf("请输入电话:\n");
		scanf_s("%s", pcon->dhb[j].tele,TELE_LEN);
		printf("请输入地址:\n");
		scanf_s("%s", pcon->dhb[j].addr,ADDR_LEN);
	}
	printf("修改成功！\n");
}
void show(Pcon pcon)
{
	int i = 0;
	for (i = 0; i < pcon->count; i++)
	{

		printf("姓名：%s\t ", pcon->dhb[i].name);
		printf("年龄：%d\t", pcon->dhb[i].age);
		printf("性别：%s\t", pcon->dhb[i].sex);
		printf("电话：%s\t", pcon->dhb[i].tele);
		printf("地址：%s\n", pcon->dhb[i].addr);
	}
}
void clear(Pcon pcon)
{
	pcon->count = 0;
}
