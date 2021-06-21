/*#include <stdio.h>

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
		
}*/

#include <stdio.h>

int main() {
	
	int sum[4];
	int value = 0;
	int arr[16];
	printf("Enter the numbers from 1 to 16 in any order: ");

	for (int i = 0; i < 16; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int j = 0; j < 4; j++) {
		//prints out each row 
		for (int k = 0; k < 4; k++) {
			printf("%3d", arr[k + value]);
			//prints out each value in the row 	
		}
		value = value + 4;
		printf("\n");
	}
	printf("Row sums: ");
	int value2 = 0;
	for (int loop1 = 0; loop1 < 4; ++loop1) {

		sum[loop1] = 0;
		for (int m = 0; m < 4; m++) {


			sum[loop1] = sum[loop1] + arr[m + value2];

		}
		printf("%d ", sum[loop1]);
		sum[loop1] = 0;
		value2 = value2 + 4;
	}
	
	printf("\n"); 
	printf("Column sums: "); 
	
		for (int loop2 = 0; loop2 < 4; ++loop2) {
			sum[loop2] = 0; 
			int value3 = 0;
			for (int n = 0; n < 4; n++) {
				
				sum[loop2] = sum[loop2] + arr[n + value3 + loop2];
				value3 = value3 + 3; 
			}
			printf("%d ", sum[loop2]); 
		
			
			
	
	}
		printf("\n"); 
		printf("Diagonal sums: "); 
		for (int loop3 = 0; loop3 < 1; ++loop3) {
			sum[loop3] = 0;
			int value4 = 0;
			for (int p = 0; p < 4; ++p) {
				sum[loop3] = sum[loop3] + arr[value4];
				value4 = value4 + 5;
			}
			printf("%d ", sum[loop3]); 
		}
		for (int loop4 = 0; loop4 < 1; ++loop4) {
			sum[loop4] = 0;
			int value5 = 3;
			for (int q = 0; q < 4; ++q) {
				sum[loop4] = sum[loop4] + arr[value5];
				value5 = value5 + 3;
			}
			printf("%d ", sum[loop4]);
		}
} 
