#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
struct myDataType{
    int i;
    char ch;
}inputValue();

void run();
int check(char sym[9],char ch,int count);
struct myDataType inputValue(char sym[9],int count);
void Display(char sym[9]);

int main(){
    char reStart;
    again:
	run();
	printf("\nIf You Want To Play Again Press 1: \nElse Any:");
	scanf("%s",&reStart);
	if(reStart == '1')
        {
            system("cls");
            goto again;
        }
    else
        exit(0);
}

void run(){
    int count = 0;
    struct myDataType info;
    char symbol[9] = {'1','2','3','4','5','6','7','8','9'};
    Display(symbol);
    again:
    info = inputValue(symbol,count);
    symbol[info.i] = info.ch;
    system("cls");
    Display(symbol);
    if(check(symbol,info.ch,count)==1);
    else{
        count++;
        goto again;
    }
}
int check(char sym[9],char ch,int count){
    int i;
    for(i = 0;i<=6; i+=3)
        if(sym[i] == ch && sym[i+1]==ch&&sym[i+2]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    for(i = 0;i<3; i++)
        if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    if(sym[0]==ch && sym[4]==ch&&sym[8]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(sym[2]==ch && sym[4]==ch && sym[6]==ch){
            printf("the Winner is : %c",ch);return 1;
        }
    else if(count==8){
        printf("the Game is DRAW");
        return 1;
    }else return 0;
}
struct myDataType inputValue(char sym[9],int count){
    char value;
    int i;
    struct myDataType info;
    inputAgain:
    if(count%2 == 0){
        printf("\nEnter Your Choice X:");
    }else{
        printf("\nEnter Your Choice O:");
    }
    scanf("%s",&value);
    for(i=0;i<9;i++){

        if(value == sym[i]){
            info.i = i;
            if(count%2 == 0)
                info.ch = 'X';
            else
                info.ch = 'O';
            break;
        }else{
            info.i = -1;
            info.ch = ' ';
        }
    }
    if(info.i == -1){
        printf("\nInput is not Valid");
        goto inputAgain;
    }
    return info;
}

void Display(char sym[9]){
	printf("\t\t\t\tT i c	t a c	t o e");
	printf("\nPlayers 1 Symbol: X");
	printf("\nPlayers 2 Symbol: O");
	printf("\n\t\t\t       |       |       ");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[0],sym[1],sym[2]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[3],sym[4],sym[5]);
	printf("\n\t\t\t-------|-------|-------");
	printf("\n\t\t\t   %c   |   %c   |   %c   ",sym[6],sym[7],sym[8]);
	printf("\n\t\t\t       |       |       ");
}


