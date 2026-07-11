#include<stdio.h>

int main()
{
    FILE *fp;
    char ch, next;

    fp = fopen("input.c", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        // Ignore spaces, tabs and new lines
        if(ch==' ' || ch=='\t' || ch=='\n')
            continue;

        // Ignore single line comments
        if(ch=='/')
        {
            next=fgetc(fp);

            if(next=='/')
            {
                while((ch=fgetc(fp))!='\n' && ch!=EOF);
            }

            // Ignore multi line comments
            else if(next=='*')
            {
                while(1)
                {
                    ch=fgetc(fp);

                    if(ch=='*')
                    {
                        next=fgetc(fp);

                        if(next=='/')
                            break;
                    }

                    if(ch==EOF)
                        break;
                }
            }
            else
            {
                printf("%c", ch);
                printf("%c", next);
            }
        }
        else
        {
            printf("%c", ch);
        }
    }

    fclose(fp);

    return 0;
}