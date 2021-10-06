/*
%*c would exclude one character. Remember, ‘/n’ and ‘/t’ are single characters.
%*d would exclude one integer.
%*f would exclude one float.
%*s would exclude one word.
*/

#include<stdio.h>
void main()
{
 int d,m,y;
  printf("enter date month year ");
  scanf("%d%*c%d%*c%d",&d,&m,&y);
  printf("date: %d\nmonth: %d\nyear: %d",d,m,y);
 getch();
return 0;
}
/*
enter date month year: 12-11-1996
date: 12
month: 11
year: 1996

enter date month year: 11/11/2000
date: 11
month: 11
year: 2000
*/
