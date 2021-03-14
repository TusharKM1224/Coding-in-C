#include <stdio.h>
#include <string.h>

int main()
{
    const char haystack[20] = "kanti";
    const char needle[10] = " tusharkanti";
    char *ret;
    ret = strstr(needle, haystack);

    printf("the sub string is : %s", ret);
    return 0;
}