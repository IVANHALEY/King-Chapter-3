#include <stdio.h>
double MAX = 9999.99; 
int main()
{
	int item_number = 0, day = 0, month = 0, year = 0; 
	float unit_price = 0; 
	printf("Enter item number: "); 
	if (scanf_s("%d", &item_number) != EOF) {
		printf("Enter unit price: ");
	}
	else { 
		printf("Value too large.\n"); }
	if (scanf_s("%f", &unit_price) < MAX) {
		printf("Enter purchase date (mm/dd/yyyy): ");
	}
	else {
		printf("error"); 
	}
	if (scanf_s("%d/%d/%d", &month, &day, &year) != EOF) {
			printf("Item\tUnit\tPurchase\n");
			printf("\tPrice\tDate\n"); 
			printf("%d\t%0.1f\t%d/%d/%d", item_number, unit_price, month, day, year); 
		}
	else {
			printf("error");
		}
	}

