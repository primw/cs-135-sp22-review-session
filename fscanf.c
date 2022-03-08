#include <stdio.h>

#define INPUT_FILE "content.txt"
int main()
{
    char first, second, third, fourth, fifth;
    FILE* fp = fopen(INPUT_FILE, "r");

    if (fp == NULL)
    {
        printf("Unable to open file!");
        return 0;
    }
    else
    {
        if (fscanf(fp, "%c %c %c %c %c", &first, &second, &third, &fourth, &fifth) == 5)
        {
            printf("5 Letters found!!\n");
        }
        else
        {
            printf("ERROR: 5 NOT FOUND\n");
        }
        fclose(fp);
    }
    return 0;
}