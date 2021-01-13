#include <stdio.h>

int main() {

	int rows, a, b, space;

	printf("Enter number of rows:");
	scanf("%d", &rows);
	//Or use scanf_s to prevent buffer overloading
	//scanf_s("%d", &rows, 1);

	// Print first half of the triangle.
	space = rows - 1;
	for ( b = 1 ; b <= rows ; b++ ) {
		for ( a = 1 ; a <= space ; a++ )
			printf(" ");
		space--;
		for ( a = 1 ; a <= 2*b-1 ; a++)
			printf("*");
		printf("\n");
	}

	// Print second half of the triangle.
	space = 1;
	for ( b = 1 ; b <= rows - 1 ; b++ ) {
		for ( a = 1 ; a <= space; a++)
			printf(" ");
		space++;
		for ( a = 1 ; a <= 2*(rows-b)-1 ; a++ )
			printf("*");
		printf("\n");
	}
	return 0;
}
