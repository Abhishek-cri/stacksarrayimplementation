#include<stdio.h>
#include<stdlib.h>
int a[5],top=-1;
void push(int n)
{
       if(top==4)
       {
              printf("overflow");
       }
       else
       {
              top=top+1;
              a[top]=n;
              printf("%d\n",a[top]);
       }
}

void pop()
{
       int n;
       if(top==-1)
       {
              printf("underflow");
       }
       else
       {
        printf("poped data is%d",a[top]);
        top=top-1;
       }
}

void peek()
{
       if(top==-1)
       {
              printf("underflow");
       }
       else
       {
              printf("peek->%d",a[top]);
       }
}

void display()
{
       int i;
       if(top==-1)
       {
              printf("underflow");
       }
       else
       {
              for(i=0;i<=top;i++)
              {
                     printf("data->%d\n",a[i]);
              }
       }
}

int main()
{
       int n;
       int ch;
       while(ch!=5)
       {
       printf("1.push\n");
       printf("2.pop\n");
       printf("3.peek\n");
       printf("4.display\n");
       printf("5.exit\n");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:

              printf("enter data\n");
              scanf("%d",&n);
              push(n);
              break;

       case 2:

              pop();
              break;

       case 3:

              peek();
              break;

       case 4:

             display();
              break;

       default:
              exit(0);
              break;

       }
}
return 0;
}
