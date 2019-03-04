#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

// ��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->size = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//����ͨѶ¼ 
//void DestroyContact(Contact* pc);

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->size == USER_MAX)
	{
		printf("���ź���ͨѶ¼�������޷����\n");
		return;
	}
	//���
	printf("���������֣�>");
	scanf("%s", pc->data[pc->size].name);
	printf("�������Ա�>");
	scanf("%s", &(pc->data[pc->size]).sex);
	printf("���������䣺>");
	scanf("%d", &(pc->data[pc->size]).age);
	printf("������绰��>");
	scanf("%s", &(pc->data[pc->size]).tele);
	printf("�������ַ��>");
	scanf("%s", &(pc->data[pc->size]).address);
	pc->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(Contact* pc)
{
	int i = 0;
	assert(pc);
	//����   �Ա�   ����  �绰    ��ַ 
	//zhangsan ��   20    123      ����
	printf("%10s\t%5s\t%5s\t%12s\t%15s\t\n","����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������������>");
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
		printf("û��ɾ\n");
		return;
	}
	//��
	pos = FindByName(pc);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//ɾ��
	for (i = pos; i < pc->size - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ�\n");
}

//void SaveContact(Contact* pc);

//void LoadContact(Contact* pc);
