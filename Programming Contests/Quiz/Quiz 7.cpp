#include<stdio.h>

int main()
{
    int counter = 1;

    for(; counter <= 10; printf("%d\n", counter++));
    {
        int value = 100;
        printf("%d\n", value);
        value--;
    }

    printf("Finished\n");

    return 0;
}
