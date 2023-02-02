#include<stdio.h>

void main(){
    int vcnt=0,cnt=0,scnt=0;
    char str[100];
    
    char *ptr;
    printf("\n enter string:");
    scanf("%[^\n]s",str);
    ptr=str;
    for(int i=0;*(ptr+i) != '\0';i++){
        if(*(ptr+i)=='A'||*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='E'||*(ptr+i)=='I'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='O'||*(ptr+i)=='u'||*(ptr+i)=='U'){
            vcnt++;
        }
        else{
            cnt++;
        }
    }
    for(int i=0;*(ptr+i) != '\0';i++){
        if(*(ptr+i)==' '){
            scnt++;
        }
    }
    printf("Vowels=%d\n",vcnt);
    printf("Consonants=%d\n",cnt-scnt);
}
