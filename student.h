#include<stdio.h>
#include<strings.h>
#include<string.h>
#include<stdlib.h>
typedef struct student 
{ 
	int rollno; 
	char name[50]; 
	float percentage; 
	struct student *next; 
}STD;
void add_data(FILE *);
void add_record(void);
void display_record(void);
void delete_record(void);
void modify_record(void);
void save_record(void);
void end(void);
void free_node(void);
void sort_record(void);
void sort_nm(void);
int countNode(void);
void sort_per(void);
void reverse_node(void);
