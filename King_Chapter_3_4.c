//King Ch.3 PP4
#include <stdio.h>

int main()
{
	int Phone_number_a = 0, Phone_number_b = 0, Phone_number_c = 0; 
	printf("Enter phone number [(xxx)-xxx-xxxx]: ");  
	if (scanf_s("(%d)-%d-%d", &Phone_number_a, &Phone_number_b, &Phone_number_c) != EOF)
		printf("You entered %d.%d.%d", Phone_number_a, Phone_number_b, Phone_number_c);
	else
		printf("error"); 
}