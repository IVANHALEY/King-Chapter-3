#include <stdio.h>

int main()
{
	int GS1_prefix, Group_identifier, Publisher_code, Item_number, Check_digit; 

	printf("Enter ISBN: "); 
	if (scanf_s("%d-%d-%d-%d-%d", &GS1_prefix, &Group_identifier, &Publisher_code, &Item_number, &Check_digit) != EOF)
	{
		printf("GS1 prefix: %d\n", GS1_prefix);
		printf("Group identifier: %d\n", Group_identifier);
		printf("Publisher code: %d\n", Publisher_code);
		printf("Item number: %d\n", Item_number);
		printf("Check digit: %d\n", Check_digit);
	}
	else
		printf("error"); 
}