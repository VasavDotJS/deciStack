void push(int elem)
{
    if(top==stack_size-1){
        printf("Stack Overflow!");
        return;
    }
    else
        stack[++top]=elem;
}
