#include"student.h"
extern STD *head;
void save_record(void)
{
	if(head==0)
	{
		printf("----------------------------------------------------------\n");
		printf("NO RECORDS AVAILABLE\n");
		printf("----------------------------------------------------------\n");
	}
	STD *temp=head;
	FILE *fp=fopen("student.dat","w");
	if(fp==0)
	{
		printf("FILE FAILED TO OPEN\n");
		return ;
	}
	while(temp)
	{
		fprintf(fp,"%d %s %f\n",temp->rollno,temp->name,temp->percentage);
		temp=temp->next;
	}
	fclose(fp);
		printf("----------------------------------------------------------\n");
		printf("FILE SAVED SUCCESSFULLY\n");
		printf("----------------------------------------------------------\n");

}
