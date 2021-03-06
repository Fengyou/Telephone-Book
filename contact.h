#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<stdio.h>
#include<string.h>

#define NAME_LEN 20
#define SEX_LEN  5
#define TELE_LEN  12
#define ADDR_LEN 20
#define	MAX_PEO  1000

typedef struct Peo
{
	char name[NAME_LEN];
	int age;
	char sex[SEX_LEN];
	char tele[TELE_LEN];
	char addr[ADDR_LEN];
}PEO, *PPEO;

typedef struct Contact
{
	PEO dhb[MAX_PEO];//存储人的信息
	//	PEO dhb;
	int count;//记录有效个数
	//	PPEO next;
}PCON, *Pcon;


void add_peo(Pcon pcon);
void del_peo(Pcon pcon);
void search(Pcon pcon);
void modify(Pcon pcon);
void show(Pcon pcon);
void clear(Pcon pcon);

#endif
