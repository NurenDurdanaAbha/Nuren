#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int testCase, length, squareCheck, I, K;
    char line[10000];

    scanf("%d", &testCase);
    getchar();
    while(testCase--)
    {
        gets(line);

        length = strlen(line);
        squareCheck = sqrt(length);

        if(squareCheck * squareCheck != length)
            printf("INVALID\n");

        else
        {
            for(I = 0; I < squareCheck; I = I + 1)
            {
                for(K = I; K < length; K = K + squareCheck)
                {
                    printf("%c", line[K]);

                    if(K == length - 1)
                        printf("\n");
                }
            }
        }
    }

    return 0;
}
