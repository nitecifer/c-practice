#include<stdio.h>
int main(){

    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if(a>0){
        printf("a is postive number");

    }
    
    else if(a<0){
        printf("a is negative number");
    }
    else{
        printf("a is zero");
    }

return 0;
}
