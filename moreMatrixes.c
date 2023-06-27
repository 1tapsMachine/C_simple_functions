#include <stdio.h>
#include <stdlib.h>
/**
* main - pending...
*
* Return: Always 0 (Success)
*/
int studentCount = 0;
int **students;

void fillStudent(int name,int last,int note)
{
	students[studentCount][0] = name;
	students[studentCount][1] = last;
	students[studentCount][2] = note;
}

int** makeStudent(int name,int last,int note)
{
	students =  (int **)malloc((studentCount+1) * sizeof(int *));


	for (size_t i = 0; i <= studentCount; i++)
	{
		students[i]= (int *)malloc(3 * sizeof(int));
	}
	fillStudent(name, last, note);
	studentCount++;
	return students;
}

void printStdnts()
{
	for (int i = 0; i <= studentCount; i++)
	{
		printf("\nName : %d, LastName : %d, Note: %d.\n", students[i][0], students[i][1], students[i][2]);
	}
	
}

int main(void)
{
	int choice = -1;

	while (choice =! 0)
	{
		printf("1. Create Student\n2. Print Student\n0. Quit.\nEnter your choice ? ");
		scanf("%i", &choice);
		switch (choice)
		{
		case 1:
			int name, last, note;
			printf("Enter The student name : ");
			scanf("%d", &name);

			printf("Enter The student last name : ");
			scanf("%d", &last);

			printf("Enter the student note : ");
			scanf("%d", &note);

			students=makeStudent(name, last, note);
			break;
		case 2 :
			printStdnts();
			break;
		case 0: 
			printf("Good Bye !\n");
			return (0);
		default:
			printf("\nInvalid choice try again !\n\n");
			break;
		}
	}
	free(students);
	return (0);
}
