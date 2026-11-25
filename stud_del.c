#include"student.h"
extern STD *head;

void delete_roll(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
		return ;
	}
	int roll;
	printf("ENTER THE ROLL\n");
	scanf("%d",&roll);

	STD *del=head,*prev;

	while(del)
	{
		//if(strcmp(del->nm,name)==0)
		if(roll==del->rollno)
		{
			if(del==head)
				head=del->next;
			else
				prev->next=del->next;

			free(del);
			return;
		}
		prev=del;
		del=del->next;
	}
	printf("----------------------------------------------------------\n");
	printf("NO MATCH FOUND\n");
	printf("----------------------------------------------------------\n");

}

void delete_name(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
		return ;
	}
	char name[20];
	printf("ENTER THE NAME\n");
	scanf("%s",name);

	STD *del=head,*prev;

	while(del)
	{
		if(strcmp(del->name,name)==0)
		{
			if(del==head)
				head=del->next;
			else
				prev->next=del->next;

			free(del);
			return;
		}
		prev=del;
		del=del->next;
	}
	printf("----------------------------------------------------------\n");
	printf("NO MATCH FOUND\n");
	printf("----------------------------------------------------------\n");
}

void delete_record(void)
{
	char op;

	printf("----------------------------------------------------------\n");
	printf("R/r : Enter roll number to delete\nN/n : Enter name to delete\n");
	printf("YOUR CHOICE:\n");
	scanf(" %c",&op);
	if(op>='A'&&op<='Z')
		op+=32;
	switch(op)
	{
		case 'r':delete_roll();break;
		case 'n':delete_name();break;
		default:printf("INVALID CHOICE\n");
	}
}

