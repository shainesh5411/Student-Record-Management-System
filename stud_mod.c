#include"student.h"
extern STD *head;
void modify(STD *temp)
{
	char nm[30];
	float per;
	printf("ENTER NAME AND PERCENTAGE TO UPDATE\n");
	scanf(" %29[^\n]%f",nm,&per);

	//update
	strcpy(temp->name,nm);
	temp->percentage=per;
	printf("----------------------------------------------------------\n");
	printf("MODIFIED\n");
	printf("----------------------------------------------------------\n");

}

STD *find_roll(int roll)
{
	STD *temp=head;
	while(temp)
	{
		if(roll==temp->rollno)
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void by_percent(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
	}
	float per;
	int found=0,c=0,f=0;
	printf("----------------------------------------------------------\n");
	printf("ENTER THE PERCENTAGE YOU WANT TO MODIFY\n");
	scanf("%f",&per);
	STD *temp=head,*tp;

	printf("----------------------------------------------------------\n");
	while(temp)
	{
		if(temp->percentage==per)
		{
			printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
			c++;
			f=1;
			if(found==0)
			{
				found=1;
				tp=temp;
			}
		}
		temp=temp->next;
	}
	if(f==0)
	{
		printf("NO MATCH FOUND\n");

		printf("----------------------------------------------------------\n");
		return ;
	}
	if(c>1)
	{
		int roll;
		printf("ENTER THE ROLLNO. YOU WANT TO MODIFY\n");
		scanf("%d",&roll);
		tp=find_roll(roll);
		if(tp==NULL)
		{
			printf("ENTER VALID ROLLNO\n");
			printf("----------------------------------------------------------\n");
		}
		if(tp!=NULL)
			modify(tp);
	}
	else
		modify(tp);

}

void by_name(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
	}
	int f=0,c=0,found=0;
	char nm[30];
	printf("----------------------------------------------------------\n");
	printf("ENTER THE NAME YOU WANT TO MODIFY\n");
	scanf("%s",nm);
	STD *temp=head,*tp;

	printf("----------------------------------------------------------\n");
	while(temp)
	{
		if(strcmp(nm,temp->name)==0)
		{
			printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
			c++;
			f=1;
			if(found==0)
			{
				found=1;
				tp=temp;
			}
		}
		temp=temp->next;
	}
	if(f==0)
	{
		printf("NO MATCH FOUND\n");
		printf("----------------------------------------------------------\n");
		return ;
	}
	if(c>1)
	{
		int roll;
		printf("----------------------------------------------------------\n");
		printf("ENTER THE ROLLNO. YOU WANT TO MODIFY\n");
		scanf("%d",&roll);
		tp=find_roll(roll);
		if(tp==NULL)
		{
			printf("ENTER VALID ROLLNO\n");
			printf("----------------------------------------------------------\n");
		}
		if(tp!=NULL)
			modify(tp);
	}
	else
		modify(tp);

}

void by_roll(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
	}
	int roll,f=0;
	printf("----------------------------------------------------------\n");
	printf("ENTER THE ROLLNO. YOU WANT TO MODIFY\n");
	scanf("%d",&roll);
	STD *temp=head;
	while(temp)
	{
		if(temp->rollno==roll)
		{
			printf("----------------------------------------------------------\n");
			printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
			printf("----------------------------------------------------------\n");
			f=1;		
			break;
		}
		temp=temp->next;
	}
	if(f==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO MATCH FOUND\n");
		printf("----------------------------------------------------------\n");
		return;
	}
	modify(temp);

}
void modify_record(void)
{
	char op;
	printf("----------------------------------------------------------\n");
	printf("Enter which record to search for modification\n");
	printf("----------------------------------------------------------\n");
	printf("R/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n");
	scanf(" %c",&op);
	if(op>='A'&&op<='Z')
		op+=32;

	switch(op)
	{
		case 'r':by_roll();break;
		case 'n':by_name();break;
		case 'p':by_percent();break;
		default:printf("INVALID OPTION\n");
	}
}
