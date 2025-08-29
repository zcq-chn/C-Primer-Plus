/*
    编写一个程序，先提示用户输入名，然后提示用户输入姓。
    在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
    Melissa Honeybee
          7        8
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[40], last_name[40];

    printf("Enter your first name: ");
    scanf("%[^\n]", first_name);    getchar();
    printf("Enter your last name: ");
    scanf("%[^\n]", last_name);     getchar();

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name), 
                        strlen(last_name), strlen(last_name));

    return 0;
}