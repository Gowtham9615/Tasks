#include<stdio.h>
int main(){
    start:
    printf("Welcome to the Calculator!\n");
    printf("Press 1 to Addition\n");
    printf("Press 2 to Subtract\n");
    printf("Press 3 to multiply\n");
    printf("Press 4 to division\n");
    printf("Press 5 to Exit\n");
    int ch[1];
    printf("----------------------------------------------------------------\n");
    printf("Enter your choice\n");
    int option;
    scanf("%d",&option);

    if(option ==5){
        printf("Exititing the program..........!\n");
        return 0;
    }
    else if(option>5)
        goto enter;
    printf("Enter the first Number:");
    int a;
    scanf("%d",&a);
    printf("Enter the second Number:");
    int b;
    scanf("%d",&b);
    switch(option){
        case 1:
            printf("Sum of a and b: %d\n",a+b);
            break;
        case 2:
            printf("subtraction a and b: %d\n",a-b);
            break;
        case 3:
            printf("multiplication a and b: %d\n",a*b);
            break;
        case 4:
            printf("division a and b: %d\n",a/b);
            break;
        default:
            enter:
            printf("Choose the correct option\n");
    }
    printf("Do you want to continue?\n");
    printf("press 1 Yes 0 No:\n");
    
    scanf("%d",&ch[0]);
    
    if(ch[0] ==1){
        system("cls");
        goto start;
    }
    else
        return 0;
    
}