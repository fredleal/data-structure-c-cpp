#include <stdio.h>
#include<string.h>
#include <stdbool.h>



void main()
{
        bool balanceCheck(char *);

        char name[1001];
        while(scanf("%s", name)!=EOF){

            if(balanceCheck(name)){
                printf("correct");
            }
            else{
                printf("incorrect");
            }
        }
}


bool balanceCheck (char *str)
{
        long long int parAbertos, parF;

        parAbertos = parF = 0;


        while(*str != '\0')
            {
            if(*str == '('){
                parAbertos++;
            }
            if(*str == ')' && parAbertos){
                parAbertos--;
            }
            else if(*str == ')' && !parAbertos) {
                parF++;
            }
            str++;
        }

        if(parAbertos == 0 && parF == 0){
            return true;
        }
        else{
            return false;
        }
}
