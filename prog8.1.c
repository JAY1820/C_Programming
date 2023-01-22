#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];
    int ch, i, j;
    do
    {
        printf("\tMENU");
        printf("\n------------------------------\n");
        printf("1:Find Length of String");
        printf("\n2:Copy String ");
        printf("\n3:Compare Strings");
        printf("\n4:Concatenate Strings");
        printf("\n5:upper  Strings");
        printf("\n6:lower Strings");
        printf("\n7:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter String: ");
            scanf("%s", str1);
            i = strlen(str1);
            printf("Length of String : %d\n\n", i);
            break;
        case 2:
            printf("Enter a String1: ");
            scanf("%s", str1);
            printf("Enter a String2: ");
            scanf("%s", str2);
            printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n", str1, str2);
            strcpy(str2, str1);
            printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n", str1, str2);
            break;
        case 3:
            printf("Enter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);
            j = strcmp(str1, str2);
            if (j == 0)
            {
                printf("Strings are Same\n\n");
            }
            else
            {
                printf("Strings are Not Same\n\n");
            }
            break;
        case 4:

            printf("\nEnter First String: ");
            scanf("%s", str1);
            printf("Enter Second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("String After Concatenation : %s\n\n", str1);

            break;
        case 5:
            printf("Enter a string : ");
            scanf("%s", str1);
            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] >= 'a' && str1[i] <= 'z')
                {
                    str1[i] = str1[i] - 32;
                }
            }
            printf("\nString in Upper Case = %s", str1);

            break;
        case 6:
            printf("Enter a string : ");
            scanf("%s", str1);
            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] >= 'A' && str1[i] <= 'Z')
                {
                    str1[i] = str1[i] + 32;
                }
            }
            printf("String in Upper Case = %s", str1);

            break;

        case 7:
            return 1;
            break;
        default:
            printf("Invalid Input. Please Enter valid Input.\n\n ");
        }
    } while (ch != 7);
    return 0;
}