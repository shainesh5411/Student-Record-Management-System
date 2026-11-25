#include <stdio.h>
#include "student.h"

#define NAME_WIDTH 30

extern STD *head;
void display_record(void)
{
	STD *temp = head;

	if (head == NULL)
	{
		printf("-----------------------------");
		printf("\nNo student records available.\n");
		printf("-----------------------------\n");
		return;
	}

	printf("\n");
	printf("+----------+--------------------------------+------------+\n");
	printf("| %-8s | %-30s | %-10s |\n",
			"Roll No", "Name", "Percentage");
	printf("+----------+--------------------------------+------------+\n");

	while (temp != NULL)
	{
		printf("| %-8d | %-*.*s | %-10.2f |\n",
				temp->rollno,
				NAME_WIDTH,
				NAME_WIDTH,
				temp->name,
				temp->percentage);

		temp = temp->next;
	}

	printf("+----------+--------------------------------+------------+\n");
}
