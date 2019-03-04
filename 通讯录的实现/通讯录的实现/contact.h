#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#define NAME_MAX 20
#define ADDRE_MAX 20
#define USER_MAX 1000
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[5];
	short age;
	char tele[12];
	char address[ADDRE_MAX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[USER_MAX];
	int size;
}Contact;

// 初始化通讯录
void InitContact(Contact* pc);
//销毁通讯录 
void DestroyContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SaveContact(Contact* pc);

void LoadContact(Contact* pc);

