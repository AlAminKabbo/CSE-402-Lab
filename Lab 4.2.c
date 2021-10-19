#include<stdio.h>
int main()
{
    char input[1000];
    int len, acpt=0, x=0;
    printf("Enter your string for RE ab*|a*bab: ");
    gets(input);
    len = strlen(input);

    for(int y=0; y<len; y++)
    {
        if(input[y] !='a')
            if(input[y] !='b')
            {
                printf("Wrong Input\n");
                return 0;
            }
    }

s0:
    if(x==len)
    {
        printf("Rejected\n");
        return 0;
    }
    else if(input[x]=='a')
    {
        x++;
        goto s1;
    }
    else
    {
        printf("Rejected\n");
        return 0;
    }


s1:
    if(x==len)
    {
        printf("Rejected\n");
        return 0;
    }
    else if(input[x]=='a')
    {
        x++;
        goto s1;
    }
    else
    {
        x++;
        goto s2;
    }

s2:
    if(x==len)
    {
        printf("Accepted\n");
        return 0;
    }
    else if(input[x]=='b')
    {
        x++;
        goto s2;
    }
    else if(input[x]=='a')
    {
        x++;
        goto s1;
    }
    return 0;
}
