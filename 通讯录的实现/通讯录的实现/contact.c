#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

// 初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	pc->size = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//销毁通讯录 
//void DestroyContact(Contact* pc);

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->size == USER_MAX)
	{
		printf("很遗憾，通讯录已满，无法添加\n");
		return;
	}
	//添加
	printf("请输入名字：>");
	scanf("%s", pc->data[pc->size].name);
	printf("请输入性别：>");
	scanf("%s", &(pc->data[pc->size]).sex);
	printf("请输入年龄：>");
	scanf("%d", &(pc->data[pc->size]).age);
	printf("请输入电话：>");
	scanf("%s", &(pc->data[pc->size]).tele);
	printf("请输入地址：>");
	scanf("%s", &(pc->data[pc->size]).address);
	pc->size++;
	printf("添加成功\n");
}

void ShowContact(Contact* pc)
{
	int i = 0;
	assert(pc);
	//姓名   性别   年龄  电话    地址 
	//zhangsan 男   20    123      西安
	printf("%10s\t%5s\t%5s\t%12s\t%15s\t\n","姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->size; i++)
	{
		printf("%10s\t%5s\t%5d\t%12s\t%15s\t\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].address);
	}
}
int FindByName(Contact* p)
{
	char name[NAME_MAX] = { 0 };
	int i = 0;
	printf("请输入姓名：>");
	scanf("%s", name);
	for (i = 0; i < p->size ; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{
	int pos = 0;
	int i = 0;
	assert(pc);
	if (pc->size == 0)
	{
		printf("没得删\n");
		return;
	}
	//找
	pos = FindByName(pc);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//删除
	for (i = pos; i < pc->size - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("删除成功\n");
}

//void SaveContact(Contact* pc);

//void LoadContact(Contact* pc);
