#include <stdio.h>
#define max 100

int main()
{
    int ar[max], i, size;
    int ser;
    printf("enter the arrya size:");
    scanf("%d", &size);
    printf("\nenter the %d no. of elements:", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\nso your entered array is :");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", ar[i]);
    }
    printf("\n\n\n\n");
    printf("\nENTER THE NUMBER YOU WANNA SEARCH!! -->");
    scanf("%d", &ser);
    for (i = 0; i < size; i++)
    {
        if (ar[i] == ser)
        {
            printf("\nYOUR SREACHED ITEM IS %d & AT LOC--> %d", ser, i + 1);
            break;
        }
    }
    if (i == size)
    {
        printf("\nSEARCHED ITEM NOT FOUND!!");
    }

    return 0;
}