#include"student.h"
extern STD *head;

void add_data(FILE *fp)
{

	STD *new;
	while(1)
	{
		new=malloc(sizeof(STD));
		if(fscanf(fp,"%d%29s%f",&new->rollno,new->name,&new->percentage)==-1)
			break;
		new->next=0;
		STD *lst=head;
		if(head==0)
			head=new;
		else
		{
			while(lst->next)
				lst=lst->next;

			lst->next=new;
		}
	}
}

void add_record(void)
{
	int roll=1,c=0;;
	STD *new=malloc(sizeof(STD));
	if(new==NULL)
	{
		printf("MEMORY NOT ALLOCATED\n");
		return ;
	}
	printf("ENTER NAME and PERCENTAGE\n");
	printf("-------------------------\n");
	scanf(" %29[^\n]%f",new->name,&new->percentage);
	if((new->percentage>=0&&new->percentage<=100)==0)
	{
		printf("ENTER WITHIN RANGE 0-100\n");
		free(new);
		return;
	}

	if(head==0)
	{
		new->rollno=1;
		new->next=0;
		head=new;
	}
	else
	{
		STD *temp=head;
		roll=1;
		c=0;
		while(1)
		{
			c=0;
			temp=head;
			while(temp)
			{
				if(temp->rollno==roll)
					c++;
				temp=temp->next;
			}
			if(c<1)
				break;
			roll++;
		}
		new->rollno=roll;
		temp=head;
		if((new->rollno<head->rollno))
		{
			new->next=head;;
			head=new;
		}
		else
		{
			STD *pos=head;
			while((pos->next!=0)&&(new->rollno>pos->next->rollno))
				pos=pos->next;

			new->next=pos->next;
			pos->next=new;
		}
	}
}

