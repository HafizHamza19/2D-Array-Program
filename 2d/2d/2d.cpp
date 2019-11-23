#include<iostream>
#include<conio.h>
#include<stdio.h>

usingnamespace std;

void main()
{
float agents[10][2];
float number, expenses;
int index=0, outdex;

printf("enter 3 digit agent numbers\n");
printf("then travel expenses (007 1642.50)\n");
printf("enter 0 0 to quit.\n");

do
{

printf("agents number and expenses: ");
scanf("%f %f",&number, &expenses);
agents[index][0] = number;
agents[index][1] = expenses;

}

while(agents[index++][0] != 0);

for(outdex=0; outdex<index-1; outdex++)
{
	
	printf("Agent %o3.0f", agents[outdex][0] );
	printf("spent %7.2f.\n", agents[outdex][1] );

}
getch();
}
