//The next alghoritm should invert the values of an Array
//Find the problems (the commented lines is what we changed so that the code will run as intended)

#include <stdio.h>
 
#define MAX	100
 
void magic(int a[MAX], int n)
{
	int i;

    //We comment this loop because it basically iterates through the numbers
	/*for (i = 0; i < n; i++) {
		a[i] = a[i] & (~(0x01 & 0x42));
        //We use printf to see the result of the loop
        printf("%d", a[i]);
    }*/

    //We comment this loop because it basically does nothing helpful to solve the problem
	/*for (i = 0; i < n/2; i++) {
		a[i] = a[i] ^ a[n - i];
        a[n - 1] = a[n - 1] ^ a[i];
        a[i] = a[i] ^ a[n - i];
        
        printf("%d", a[i]);
	}*/
    
    //We modify the loop so that it will swap the values
	   for (i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
 
}
 
int main(void)
{
	int a[MAX], n, i;

    //Give a value to n
    printf("Insert the lenght of the Array: ");
    scanf("%d", &n);
 
    //Ask the user to imput the elements of the Array
    printf("Imput the values you want in the Array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	magic(a, n);
 
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
 
	return 0;
}