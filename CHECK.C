#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
char select;
#include "ADMIN.c"
#include "UPDATE.c"
#include "COURSE.c"
#include "PRINT.c"
 long int provideroll()
{
   long int proll=21000;
   printf("Your roll no. is : %ld\n",proll);
   fprintf(data,"Your roll is : ");
   fprintf(data,"%ld",proll);
   fprintf(data,"\n");
   proll++;
   return(proll);
 }
void accessdata()
 {
 FILE *acess=fopen("NAME.txt","r");
 if(acess==NULL)
 {
  printf("No data present in our system \n");
 }
 else
 {
  printf("Enter your college roll number\n");

 }
 }
int main()
{
	int choice;
	long int getroll;
	clrscr();
	do
	{
	       printf("\n\n");
		printf("  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
		printf("|						  |\n");
		printf("|  *** Enter your choice from below menue ***     |\n");
		printf("|  Enter 1 for new admission     	          |\n");
		printf("|  Enter 2 for old student       		  |\n");
		printf("|  Enter 0 for exit 		 		  |\n");
		printf("| _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |\n\n  ");
		scanf("%d", &choice);
		clrscr();
		switch (choice)
		{
		case 1:
			newadmission();
			courselist();
			if(select=='y' || select=='Y')
			{
			getroll=provideroll();
			updatetofile();
			printadmissiondata();
			printf("\n");
			printf("press any key to show main menue\n");
			getch();
			clrscr();
			fprintf(data,"\n");
			fclose(data);
			}
			else
			{
			clrscr();
			}
			break;
		case 2:
			//accessdata();
			// oldstudent();
			break;

		case 3: break;
		default:
			printf("Enter right choice !!\n");
		}
	} while (choice != 0);
	return 0;
}