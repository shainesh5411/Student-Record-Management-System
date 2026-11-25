#include"student.h"
extern STD *head;

void reverse_node(void)
{
	STD *prev=NULL,*cur=head,*nxt=NULL;
	while(cur)
	{
		nxt=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nxt;
	}
	head=prev;
	printf("----------------------------------------------------------\n");
	printf("LINK REVERSED SUCCESSFULLY\n");
	printf("----------------------------------------------------------\n");
}




void sort_record(void)
{
	char op;
	printf("ENTER CHOICE:\n");
	printf("N/n : Sort with name\nP/p : Sort with percentage\n");
	scanf(" %c",&op);
	if(op>='A'&&op<='Z')
		op+=32;
	switch(op)
	{
		case 'n':sort_nm();break;
		case 'p':sort_per();break;
		default:printf("INVALID CHOICE\n");
	}
}
void sort_per(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO STUDENT RECORD AVAILABE\n");
		printf("----------------------------------------------------------\n");
		return ;
	}
	STD *p1=head,*p2,t;
	int i,j,c=countNode();
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(p1->percentage<p2->percentage)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
void sort_nm(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO STUDENT RECORD AVAILABE\n");
		printf("----------------------------------------------------------\n");
		return ;
	}
	STD *p1=head,*p2,t;
	int i,j,c=countNode();
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{
			if(strcasecmp(p1->name,p2->name)>0)
			{
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.percentage=p1->percentage;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->percentage=p2->percentage;

				p2->rollno=t.rollno;
				strcpy(p2->name,t.name);
				p2->percentage=t.percentage;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
int countNode(void)
{
	int c=0;
	STD *temp=head;
	while(temp)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void end(void)
{
	char op;
	printf("ENTER CHOICE:\n");
	printf("S/s : Save and exit\nE/e : Exit without saving\n");
	scanf(" %c",&op);
	if(op>='A'&&op<='Z')
		op+=32;
	switch(op)
	{
		case 's':if(head!=0)
				 save_record();
			 exit(0);
		case 'e':STD *del=head;
			 while(del)
			 {
				 head=del->next;
				 free(del);
				 del=head;
			 }
			 printf("----------------------------------------------------------\n");
			 printf("PROGRAM CLOSED\n");
			 printf("----------------------------------------------------------\n");
			 exit(0);
		default:printf("INVALID CHOICE\n");
	}
}

void free_node(void)
{
	STD *del=head;
	while(del)
	{
		head=del->next;
		free(del);
		del=head;
	}
	printf("----------------------------------------------------------\n");
	printf("ALL RECORDS DELETED\n");
	printf("----------------------------------------------------------\n");
}
