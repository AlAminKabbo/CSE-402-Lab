#include<stdio.h>
int main()
{
    char input[1000];
    int len, acpt=0, x=0;
    printf("Enter your string for RE (a|b)*aab: ");
    gets(input);
    len = strlen(input);

    for(int x=0; x<len; x++)
    {
        if(input[x] !='a')
            if(input[x] !='b')
            {
                printf("Wrong input\n");
                return 0;
            }
    }

s0:
    if(x==len)
    {
        printf("Rejected\n");
        return 0;
    }
    else if(input[x]=='b')
    {
        x++;
        goto s0;
    }
    else
    {
        x++;
        goto s1;
    }


s1:
    if(x==len)
    {
        printf("Rejected\n");
        return 0;
    }
    else if(input[x]=='b')
    {
        x++;
        goto s0;
    }
    else
    {
        x++;
        goto s2;
    }

s2:
    if(x==len)
    {
        printf("Rejected\n");
        return 0;
    }
    else if(input[x]=='a')
    {
        x++;
        goto s2;
    }
    else
    {
        x++;
        goto s3;
    }


s3:
    if(x==len)
    {
        printf("Accepted\n");
        return 0;
    }
    else if(input[x]=='a')
    {
        x++;
        goto s2;
    }
    else if(input[x]=='b')
    {
        x++;
        goto s0;
    }
    return 0;
}
