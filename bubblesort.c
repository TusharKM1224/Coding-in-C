#include <stdio.h>
#define max 9
void bubblesort(int arg[]);
int main()
{
    int new[max];
    int num, i;
    printf("enter the elemets one by one :\n");
    for (i = 0; i < max; i++)
    {
        scanf("%d", &new[i]);
    }
    printf("so your entered array is :");
    for (i = 0; i < max; i++)
    {
        printf("%d\t", new[i]);
    }
    printf("\nYour sorted array will be :");
    bubblesort(new);
}

void bubblesort(int arg[])
{
    int i, j;
    int temp;
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max - i - 1; j++)
        {
            if (arg[j] > arg[j + 1])
            {
                temp = arg[j];
                arg[j] = arg[j + 1];
                arg[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < max; i++)
    {
        printf("%d\t", arg[i]);
    }
}