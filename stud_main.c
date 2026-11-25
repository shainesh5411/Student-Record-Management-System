#include"student.h"
STD *head;
int main(int argc,char **argv)
{
	if(argc==2)
	{
		FILE *fp=fopen(argv[1],"r");
		if(fp!=0)
		{
			add_data(fp);
			fclose(fp);
		}
		else
		{
			printf("Unable to open file\n");
		}
	}
	char op;
	while(1)
	{
		printf("******** STUDENT RECORD MENU ********\n\n");
		printf("a/A : Add new record\nd/D : Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\ne/E : Exit\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\n\n");
		printf("Enter your choice: \n");
		scanf(" %c",&op);

		if(op>='A'&&op<='Z')
			op+=32;
		printf("%c\n",op);

		switch(op)
		{
			case 'a':add_record();break;
			case 'd':delete_record();break;
			case 's':display_record();break;
			case 'm':modify_record();break;
			case 'v':save_record();break;
			case 'e':end();break;
			case 't':sort_record();break;
			case 'l':free_node();break;
			case 'r':reverse_node();break;
			default:printf("INVALID CHOICE\n");
		}
	}
}








