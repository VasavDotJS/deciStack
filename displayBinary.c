void display(){
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
