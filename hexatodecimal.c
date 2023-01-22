#include<stdio.h>
#include<string.h>
#include<math.h>
int HexToDecY(char hex[]);
float HexToDecN(char hex[]);
static int i, len, dotPos;
float bianryans;
long double decimalans;

long double decimaltobianry(){
     long double fraDecimal,fraBinary,bFractional = 0.0,dFractional,fraFactor=0.1;
    long int dIntegral,bIntegral=0;
    long int intFactor=1,remainder,temp,i;
    // printf("Enter any fractional decimal number: \n");
    // scanf("%Lf",&fraDecimal);
    fraDecimal = decimalans;
    dIntegral = fraDecimal;
    dFractional =  fraDecimal - dIntegral;
    while(dIntegral!=0){
         remainder=dIntegral%2;
         bIntegral=bIntegral+remainder*intFactor;
         dIntegral=dIntegral/2;
         intFactor=intFactor*10;
    }
   for(i=1;i<=6;i++){
       dFractional = dFractional * 2;
       temp =  dFractional;
       bFractional = bFractional + fraFactor* temp;
       if(temp ==1)
             dFractional = dFractional - temp;
       fraFactor=fraFactor/10;
   }
   fraBinary =  bIntegral +  bFractional;
   printf("\n Equivalent binary value: %Lf",fraBinary);
   return 0;   
}




int main()
{
    int decnumInt;
    float decnumFlt;
    char hexnum[20];
    printf("Enter any octal Number: ");
    scanf("%s", hexnum);
    while(hexnum[i]!='\0')
    {
        if(hexnum[i]=='.')
            dotPos = i;
        len++;
        i++;
    }
    len--;
    i=0;
    
    decnumFlt = HexToDecN(hexnum);
        if(decnumFlt!=0)
            printf("\nEquivalent Decimal Value = %0.2f", decnumFlt);
            
            
    // if(dotPos==0)
    // {
    //     decnumInt = HexToDecY(hexnum);
    //     if(decnumInt!=0)
    //         printf("\nEquivalent Decimal Value = %d", decnumInt);
    // }
    // else
    // {
    //     decnumFlt = HexToDecN(hexnum);
    //     if(decnumFlt!=0)
    //         printf("\nEquivalent Decimal Value = %0.2f", decnumFlt);
    // }
    getch();
    
    decimalans = decnumFlt;
    decimaltobianry();
    // printf("%f",decimalans);
    //   bianryans = decimaltobinary(decimalans);
    // printf("\n binary number is : decimaltobinary()")
    return 0;
}



float HexToDecN(char hex[20])
{
    int dec1=0, rem, lenTemp;
    float dec2=0;
    lenTemp = dotPos-1;
    while(lenTemp>=0)
    {
        rem = hex[lenTemp];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid octal digit");
            return 0;
        }
        dec1 = dec1 + (rem*pow(8, i));
        lenTemp--;
        i++;
    }
    lenTemp = dotPos+1;
    i=-1;
    while(lenTemp<=len)
    {
        rem = hex[lenTemp];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid octal digit");
            return 0;
        }
        dec2 = dec2 + (rem*pow(8, i));
        lenTemp++;
        i--;
    }
    dec2 = dec1+dec2;
    return dec2;
}

// int HexToDecY(char hex[20])
// {
//     int dec=0, rem;
//     while(len>=0)
//     {
//         rem = hex[len];
//         if(rem>=48 && rem<=57)
//             rem = rem-48;
//         else if(rem>=65 && rem<=70)
//             rem = rem-55;
//         else if(rem>=97 && rem<=102)
//             rem = rem-87;
//         else
//         {
//             printf("\nYou've entered an invalid octal digit");
//             return 0;
//         }
//         dec = dec + (rem*pow(8, i));
//         len--;
//         i++;
//     }
//     return dec;
// }
