#include<stdio.h>
#include<string.h>
#include<math.h>

float OctToDecN(char oct[]);
static int i, len, dotPos;
float bianryans;
long double decimalans;

long double decimaltobianry(){
     long double fraDecimal,fraBinary,bFractional = 0.0,dFractional,fraFactor=0.1;
    long int dIntegral,bIntegral=0;
    long int intFactor=1,remainder,temp,i;
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
    char octnum[20];
    printf("Enter any octal Number: ");
    scanf("%s", octnum);
    while(octnum[i]!='\0')
    {
        if(octnum[i]=='.')
            dotPos = i;
        len++;
        i++;
    }
    len--;
    i=0;
    
    decnumFlt = OctToDecN(octnum);
        if(decnumFlt!=0)
            printf("\nEquivalent Decimal Value = %0.2f", decnumFlt);
    // getch();
    
    decimalans = decnumFlt;
    decimaltobianry();
    return 0;
}



float OctToDecN(char oct[20])
{
    int dec1=0, rem, lenTemp;
    float dec2=0;
    lenTemp = dotPos-1;
    while(lenTemp>=0)
    {
        rem = oct[lenTemp];
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
        rem = oct[lenTemp];
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

