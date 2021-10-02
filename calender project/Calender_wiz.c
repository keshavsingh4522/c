
/* A complete project in C to 
display the day for given date.
showcase an interactive monthly calender  for given month and year.
Ability to save a note for any day of a month (like a birthday)
different color schemes.

*/


//Code by Akshay Gautam (github @ Gautam-flash)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

struct Date{
    int dd;
    int mm;
    int yy;
};

struct Date date;

struct Reminder{
    int dd;
    int mm;
    char note[60];
};

struct Reminder R;

COORD xy = {0, 0};

//Setting the the cursor
void gotoxy(int x, int y)  //X and Y coordinates
{
    xy.X = x;
    xy.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),  xy);
}

//Checking for a leap year
int LeapYear(int year)
{
    if(year%400 == 0 || (year%100!=0 && year%4 == 0))
        return 1;
    return 0;
}

//Increasing month number
void countMonth(int *mm, int *yy)
{
    ++*mm;
    if(*mm > 12)
    {
        ++*yy;
        *mm = *mm-12;
    }
}

//Decreasing month number
void reduceMonth(int *mm, int *yy)
{
    --*mm;
    if(*mm < 1)
    {
        --*yy;
        *mm = *mm+12;
    }
}

//Number of days in a month
int NumberOfDays(int month, int year)
{
    switch(month)
    {
        case 1: return(31);
        case 2: if(LeapYear(year)==1)
                    return(29);
                else
                    return(28);
        case 3: return(31);
        case 4: return(30);
        case 5: return(31);
        case 6: return(30);
        case 7: return(31);
        case 8: return(31);
        case 9: return(30);
        case 10: return(31);
        case 11: return(30);
        case 12: return(31);
        default: return(-1); 
    }
}

//Name of the day based on number
char *getName(int day)
{
    switch(day)
    {
        case 0: return("Sunday\t");
        case 1: return("Monday\t");
        case 2: return("Tuesday\t");
        case 3:return("Wednesday\t");
        case 4: return("Thursday\t");
        case 5: return("Friday\t");
        case 6: return("Saturday\t");
        default: return("Error in get name\t");
    }
}
//Printing name of month and year
void print_date(int mm, int yy)
{
    printf("++++++++++++++++++++++++\n");
    gotoxy(25, 6);
    switch (mm)
    {
    case 1: printf("Jan");
        break;
    case 2: printf("Feb");
        break;
    case 3: printf("Mar");
        break;
    case 4: printf("Apr");
        break;
    case 5: printf("May");
        break;
    case 6: printf("Jun");
        break;
    case 7: printf("Jul");
        break;
    case 8: printf("Aug");
        break;
    case 9: printf("Sep");
        break;
    case 10: printf("Oct");
        break;
    case 11: printf("Nov");
        break;
    case 12: printf("Dec");
        break;
    
    default: printf("Error getting name\t");
        break;
    }
    printf(" ,%d", yy);
    gotoxy(20, 7);
    printf("-------------------------\n");
}

//getting day number
int getDayNumber(int day, int mon, int year)
{
    int res = 0, t1, t2, y=year;
    year = year - 1600;
    while(year >= 100)
    {
        res = res+5;
        year = year-100;
    }
    res = (res%7);
    t1 = ((year-1)/4);
    t2 = (year-1)-t1;
    t1 = (t1*2)+t2;
    t1 = t1%7;
    res = res+t1;
    res = res%7;
    t2=0;
    for(t1 = 1;t1<mon;t1++)
    {
        t2 += NumberOfDays(t1, y);
    }

    t2 = t2+day;
    t2 = t2%7;
    res = res+t2;
    res = res%7;

    if(y > 2000)
        res += 1;
    res = res%7;
    return res;
}  

char *getDay(int dd,int mm,int yy){
    int day;
    if(!(mm>=1 && mm<=12)){
        return("Invalid month value");
    }
    if(!(dd>=1 && dd<=NumberOfDays(mm,yy))){
        return("Invalid date");
    }
    if(yy>=1600){
        day = getDayNumber(dd,mm,yy);
        day = day%7;
        return(getName(day));
    }
}


int checkNote(int dd, int mm){
    FILE *fp;
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in Opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.dd == dd && R.mm == mm){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}




void printMonth(int mon,int year,int x,int y){ //prints the month with all days
    system("color 9f");
    int nod, day, cnt, d = 1, x1 = x, y1 = y, isNote = 0;
    if(!(mon>=1 && mon<=12)){
        printf("INVALID MONTH");
        getchar();
        return;
    }
    if(!(year>=1600)){
        printf("INVALID YEAR");
        getchar();
        return;
    }
    gotoxy(20,y);
    print_date(mon,year);
    y += 3;
    gotoxy(x,y);
    printf("S   M   T   W   T   F   S   ");
    y++;
    nod = NumberOfDays(mon,year);
    day = getDayNumber(d,mon,year);
    switch(day){ //locates the starting day in calender
        case 0 :
            x=x;
            cnt=1;
            break;
        case 1 :
            x=x+4;
            cnt=2;
            break;
        case 2 :
            x=x+8;
            cnt=3;
            break;
        case 3 :
            x=x+12;
            cnt=4;
            break;
        case 4 :
            x=x+16;
            cnt=5;
            break;
        case 5 :
            x=x+20;
            cnt=6;
            break;
        case 6 :
            x=x+24;
            cnt=7;
            break;
        default :
            printf("INVALID DATA FROM THE getOddNumber()MODULE");
            return;
    }
    gotoxy(x,y);

    printf("%02d",d);
    for(d=2;d<=nod;d++){
        if(cnt%7==0){
            y++;
            cnt=0;
            x=x1-4;
        }
        x = x+4;
        cnt++;
        gotoxy(x,y);
        printf("%02d",d);
    }
    gotoxy(8, y+2);
    printf("Press 'n'  to Next, Press 'p' to Previous and 'q' to Quit");
    gotoxy(8,y+3);
    printf("Press 's' to see note: ");
}


void AddNote(){
    system("color 02");
    FILE *fp;
    fp = fopen("note.dat","ab+");
    system("cls");
    gotoxy(5,7);
    printf("Enter the date(DD/MM): ");
    scanf("%d%d",&R.dd, &R.mm);
    gotoxy(5,8);
    printf("Enter the Note(50 character max): ");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    if(fwrite(&R,sizeof(R),1,fp)){
        gotoxy(5,12);
        puts("Note is saved sucessfully");
        fclose(fp);
    }else{
        gotoxy(5,12);
        puts("\aFail to save!!\a");
    }
    gotoxy(5,15);
    printf("Press any key............");
    getch();
    fclose(fp);
}



void showNote(int mm){
    system("color 02");
    FILE *fp;
    int i = 0, isFound = 0;
    system("cls");
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.mm == mm){
            gotoxy(10,5+i);
            printf("Note %d Day = %d: %s", i+1, R.dd,  R.note);
            isFound = 1;
            i++;
        }
    }
    if(isFound == 0){
        gotoxy(10,5);
        printf("This Month contains no note");
    }
    gotoxy(10,7+i);
    printf("Press any key to back.......");
    getch();

}


int main(){
    system("title Calender Wiz");
    system("color bc");
    int choice;
    char ch;
    while(1){
        system("color bc");
        ch = 'a';
        system("cls");
        printf("1. Find Out the Day\n");
        printf("2. Print all the day of month\n");
        printf("3. Add Note\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        system("cls");
        switch(choice){
            case 1:
                system("color 5f");
                printf("Enter date (DD MM YYYY) : ");
                scanf("%d %d %d",&date.dd,&date.mm,&date.yy);
                printf("Day is : %s",getDay(date.dd,date.mm,date.yy));
                printf("\nPress any key to continue......");
                getch();
                break;
            case 2 :
                system("color 9f");
                printf("Enter month and year (MM YYYY) : ");
                scanf("%d %d",&date.mm,&date.yy);
                system("cls");
                while(ch!='q'){
                    printMonth(date.mm,date.yy,20,5);
                    ch = getch();
                    if(ch == 'n'){
                        countMonth(&date.mm,&date.yy);
                        system("cls");
                        printMonth(date.mm,date.yy,20,5);
                    }else if(ch == 'p'){
                        reduceMonth(&date.mm,&date.yy);
                        system("cls");
                        printMonth(date.mm,date.yy,20,5);
                    }else if(ch == 's'){
                        showNote(date.mm);
                        system("cls");
                    }
                }
                break;
            case 3:
                AddNote();
                break;
            case 4 :
                exit(0);
        }
    }
    return 0;
}
