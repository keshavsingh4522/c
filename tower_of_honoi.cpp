#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
void tower(int,char,char,char);
void main()
{
clrscr();
     int n;
      printf("enter no ofdisk in tower of honoi: ");
      scanf("%d",&n);
      printf("the sequence involved in tower of honoi are: \n");
      tower(n,'A','B','C');
getch();
}
void tower(int n,char fpeg,char auxpeg,char topeg)
{
    if(n==1)
     {
         printf("move disk 1 from %c peg to %c peg \n",fpeg,auxpeg);
         return;
    }
    tower(n-1,fpeg,topeg,auxpeg);
    printf("move disk %d frmo %c peg to %c peg\n",n,fpeg,auxpeg);
    tower(n-1,auxpeg,fpeg,topeg);
}
