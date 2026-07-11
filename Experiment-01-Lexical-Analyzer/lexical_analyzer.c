#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char word[])
{
    char *keywords[] = {
        "int","float","char","if","else","while","for",
        "return","void","double"
    };

    int n = 10;

    for(int i=0;i<n;i++)
    {
        if(strcmp(word,keywords[i])==0)
            return 1;
    }

    return 0;
}

int main()
{
    FILE *fp;
    char ch, word[50];
    int i;

    fp = fopen("input.c","r");

    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch=fgetc(fp))!=EOF)
    {
        // Ignore spaces
        if(ch==' '||ch=='\n'||ch=='\t')
            continue;

        // Ignore comments
        if(ch=='/')
        {
            char next=fgetc(fp);

            if(next=='/')
            {
                while((ch=fgetc(fp))!='\n' && ch!=EOF);
                continue;
            }

            else if(next=='*')
            {
                while(1)
                {
                    ch=fgetc(fp);

                    if(ch=='*')
                    {
                        if((ch=fgetc(fp))=='/')
                            break;
                    }
                }
                continue;
            }
            else
            {
                printf("Operator : /\n");
                fseek(fp,-1,SEEK_CUR);
                continue;
            }
        }

        // Identifier / Keyword
        if(isalpha(ch))
        {
            i=0;

            while(isalnum(ch))
            {
                word[i++]=ch;
                ch=fgetc(fp);
            }

            word[i]='\0';

            if(isKeyword(word))
                printf("Keyword : %s\n",word);
            else
                printf("Identifier : %s\n",word);

            fseek(fp,-1,SEEK_CUR);
        }

        // Constant
        else if(isdigit(ch))
        {
            printf("Constant : ");

            while(isdigit(ch))
            {
                printf("%c",ch);
                ch=fgetc(fp);
            }

            printf("\n");

            fseek(fp,-1,SEEK_CUR);
        }

        // Operators
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='='||
                ch=='<'||ch=='>'||ch=='%')
        {
            printf("Operator : %c\n",ch);
        }
    }

    fclose(fp);

    return 0;
}