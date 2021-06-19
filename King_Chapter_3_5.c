#include <stdio.h>

int main()
{
	int no1, no2, no3, no4, no5, no6, no7, no8, no9, no10, no11, no12,
		no13, no14, no15, no16; 
	no1 = no2 = no3 = no4 = no5 = no6 = no7 = no8 = no9 = no10 = no11 = no12 = no13 = no14 = no15 = no16 = 0;
	int row_sums1, row_sums2, row_sums3, row_sums4, column_sums1, column_sums2, 
		column_sums3, column_sums4, diagonal_sums1, diagonal_sums2; 
	
	printf("Enter the numbers from 1 to 16 in any order: "); 
	if (scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", 
		&no1, &no2, &no3, &no4, &no5, &no6, &no7, &no8, &no9, &no10, 
		&no11, &no12, &no13, &no14, &no15, &no16) != EOF) {
		row_sums1 = no1 + no2 + no3 + no4;
		row_sums2 = no5 + no6 + no7 + no8;
		row_sums3 = no9 + no10 + no11 + no12;
		row_sums4 = no13 + no14 + no15 + no16;
		column_sums1 = no1 + no5 + no9 + no13;
		column_sums2 = no2 + no6 + no10 + no14;
		column_sums3 = no3 + no7 + no11 + no15;
		column_sums4 = no4 + no8 + no12 + no16;
		diagonal_sums1 = no1 + no6 + no11 + no16;
		diagonal_sums2 = no4 + no7 + no10 + no13;
		printf("Row sums: %d %d %d %d \n", row_sums1, row_sums2, row_sums3, row_sums4);
		printf("Column sums: %d %d %d %d \n", column_sums1, column_sums2, column_sums3, column_sums4);
		printf("Diagonal sums: %d %d \n", diagonal_sums1, diagonal_sums2);
	}
	else
		printf("error"); 
		
}