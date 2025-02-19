#include <stdio.h>
#define stack_size 100
int stack[stack_size],top=-1;
void push(int elem)
{
    if(top==stack_size-1){
        printf("Stack Overflow!");
        return;
    }
    else
        stack[++top]=elem;
}
void display()
{
    int temp=top;
    if(top==-1)
        printf("Stack Underflow!");
    else{
        while(temp>-1){
            printf("%d",stack[temp--]);
        }
        printf("\n");
    }
}
int main()
{
    int decInput;
    printf("Enter the Decimal Number You Want to Convert: ");
    scanf("%d",&decInput);
    while(decInput!=0)
    {
        push(decInput%2);
        decInput/=2;
    }
    display();
    printf("\n");
    return 0;
}
