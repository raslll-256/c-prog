#include<stdio.h>
int main()
{
    int stack[100];
    int top=-1;
    int n,ch,val,i;

    printf("enter the size of stack:");
    scanf("%d",&n);
    if(n<=0 || n>100)
    {
        printf("invalid size\n");
        return 1;
    }

    while(1)
    {
        printf("\n STACK OPERATIONS \n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);

        if (ch==1) //Push
        {
            if(top==n-1)
            {
                printf("stack overflow\n");
            }
            else
            {
                printf("enter the value:");
                scanf("%d",&val);
                top++;
                stack[top]=val;
                printf("%d Pushed \n",val);
            }
        }
        else if(ch==2) /* Pop */
        {
            if(top==-10)
            {
            printf("stack underflow\n");
            }
            else
            {
                printf("%d Popped\n",stack[top]);
                top--;
            }
        }
        else if(ch==3)/* Display */
        {
            if(top==-1)
            {
                printf("stack is empty\n");
            }
             else
            {
                printf("stack elements are:\n");
                for(i=top; i>=0;i--);
                {
                    printf("%d\n",stack[i]);
                }
            }
        }
        else if(ch==4)
        {
            break;
        }
        else
        {
            printf("invalid\n");
        }

        return 0;
 }
}
