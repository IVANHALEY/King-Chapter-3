//Write a program that accepts a date from the user in the form mm/dd/yyyy and then 
//displays it in the form yyyymmdd: 

#include <stdio.h>

int main(void)
{

	int mon1, day1, day2, year1;
	printf("Enter a date in the form mm/dd/yyyy: ");
	if (scanf_s("%d/%d/%d", &mon1, &day1, &year1) != EOF) {
		printf("The date you entered is: %d%d%d", year1, mon1, day1);
		return 0; 
	}
	else{
		printf("failed to read value.\n");
}
	

}