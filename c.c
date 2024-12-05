#include <stdio.h>

    struct Date // Ascci编码一符号占位4bit
    {
        float num;
        char chars;
        char fuhao;
    };



int main()
{
    int i;

    struct Date date[3];
    for (i = 0; i < 3; i++)
    {
        printf("请键入一个数字后按回车\n");
        scanf(" %f", &date[i].num);
    }
    for (i = 0; i < 3; i++)
    {
        printf("请键入一个字母后按回车\n");
        scanf(" %c", &date[i].chars);
    }
    for (i = 0; i < 3; i++)
    {
        printf("请键入一个符号后按回车\n");
        scanf(" %c", &date[i].fuhao);
    }


    printf("输出数字\n");
    for (i = 0; i < 3; i++)
    {
    printf("%f \t", date[i].num);
    }
    printf("\n");
    printf("输出非数字\n");
    for (i = 0; i < 3; i++)
    {
    printf("%c \t", date[i].chars);
    printf("%c \t", date[i].fuhao);
    }
    





    return 0;
}




