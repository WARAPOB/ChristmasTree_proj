#include<stdio.h>
int no;
int main() {
	scanf("%d", &no);
    for (int No = 2; No < no + 2; No++)
    {
        for (int i = 0; i < No; i++) {
            for (int j = 0; j < (no - i); j++) {
                printf(" ");
            }
            for (int a = 0; a < (2 * i) + 1; a++) {
                printf("*");
            }
            printf("\n");
        }
    }
    for (int i = 0; i < no; i++)
    {
        printf(" ");
    }
    printf("|\n");
    for (int b = 0; b < no; b++)
    {
        printf("=");
    }
    printf("V");
    for (int b = 0; b < no; b++)
    {
        printf("=");
    }
}
