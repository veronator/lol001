#include <stdio.h>
int main() {
    float a;
    char b;
	//привет
    printf("Enter a real number:");
    scanf("%f", &a);
    printf("Enter a symbol:");
    scanf(" %c", &b);
    printf("Number: %f\n" ,a);
    printf("Symbol: %c",b);
    return 0;
}
