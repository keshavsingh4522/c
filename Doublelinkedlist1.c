#include<stdio.h>

struct node
{
  struct node *prev;
  struct node *next;
  int data;

}*head,*end,*temp1,*temp2,*first=0;
void create();
void insert();
void delete_node();
//void sort();
void disp_beg();
void disp_end();
int count=0;
int main()
{
 int i;
 while(1)
 {
    printf("\nEnter 1 to insert data\nEnter 2 to insert at a position i\nEnter 3 to delete a node\nEnter 4 to sort the list\nEnter 5 to display from beginning\nEnter 6 to display from end\nEnter 7 to exit\n");
    scanf("%d",&i);
    switch(i)
    {
    case 1: create();
            break;
    case 2: insert();
            break;
     case 3: delete_node();
             break;
    // case 4: sort();
    //         break;
     case 5: disp_beg();
              break;
    case 6:  disp_end();
            break;
    case 7:   exit(0);


    }
 }

}
void create()
{ printf("Enter the data \t:");
   head=(struct node *)malloc(sizeof(struct node));
  scanf("%d",&head->data);
   head->next = 0;
  // printf("ere");

  if(first==0)
  {
      head->prev =0;
      first=head;
      temp1=head;
      count++;
  }
  else

  {
       head->prev= temp1;
       temp1->next=head;
       temp1=head;
       count++;
    temp1 =head;
  }
}
void insert()
{
   int j,k;
    printf("\nEnter the position in which you want  to insert\t");
    scanf("%d",&j);
      head=(struct node *)malloc(sizeof(struct node));
   printf("\nEnter the data you want to insert\n");
   scanf("%d",&head->data);
       if(j>count)
     {
         printf("\nInvalid position entered");
         return ;
     }
     else
     {  temp1=first;
         for(k=1;k<j;j++)
          {
              temp1=temp1->next;

          }
          temp1->next->prev= head;
          head->next= temp1->next;
          head->prev=temp1;
          temp1=head;
          count++;
     }
    temp1=first;
    head=first;
    int i,pos;
}
void delete_node()
{    temp1=first;
      head=first;
      int pos,i;
    printf("\nEnter the position you want to delete\n");
    scanf("%d",&pos);
    if(pos<1 || pos>count)
    {
        printf("\nInvalid position\n");
        return;
    }
    if(pos==1)
    {  // printf("condition okay");
        head=temp1->next;
        head->prev= 0;
        free(temp1);
       temp1=head;
       printf("condition okay");

         return;
    }
    if(pos==count)
    {  i=1;
        while(temp1->next !=0)
        {
            temp1->next= temp1;
            i++;
        }
        temp1->prev->next= 0;
        free(temp1);
        temp1=head;
        return;
    }
    i=1;
    while(i<pos)
    {
        temp1=temp1->next;
          i++;
    }
    temp1->next->prev= temp1->prev;
    temp1->prev->next= temp1->next;
    free(temp1);
     temp1=head;

}

void disp_beg()
{
     head=first;
     temp1=first;
     printf("\nThe linked list is :\n");
     while(temp1 !=0)
     {
         printf("\t%d",temp1->data);
         temp1=temp1->next;
     }
     temp2=temp1;

}
void disp_end()
{
    printf("\nThe list from the end is :\n");
    while(temp2->prev !=0)
    {
        printf("\t%d",temp2->data);
        temp2=temp2->prev;
    }

}
