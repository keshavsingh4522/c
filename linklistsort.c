#include<stdio.h>
struct Node
{
int data;
struct Node *p;
};
int main()
{

    int i, c=1,j;
    typedef struct Node node;
    node *head, *first , *temp ;
    first = 0;
    int pos ,m , n=0;
    while(c)
    {
      head= (node*)malloc(sizeof(node));
     printf("\n\t\tEnter the number in the list\n");
     scanf("%d",&head->data);
        if(first !=0 )
        {
            temp->p =head;
            temp = head ;
             n++;
        }
        else
        {
            temp = head ;
            first = head;
        }
        printf("\ndo you want to continue (1|0 )\t");
        scanf("%d",&c);
     }
     temp->p =  0 ;
     temp= first ;
    printf("The list is\n" );
     while(temp !=0)
     {
         printf("%d\t",temp->data);
         temp = temp ->p ;
     }
     head = first;
      temp= first ;



           for(i=0 ; first ->p != 0 ; i++ )
        {
               // printf("c1");

             temp = first->p;
              for(j=0;temp->p != 0; i++)
             {
                 if(first->data > temp->data )
              {    m = first->data ;
                  first->data = temp->data;
                  temp->data = m ;
              }
                           temp = temp->p ;
     //         printf("check 2\n");
             }
             first =first->p ;
        }

      temp = head;


       printf("\nThe list is\n" );
     while(temp !=0)
     {
         printf("%d\t",temp->data);
         temp = temp ->p ;
     }
}
