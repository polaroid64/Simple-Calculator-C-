#include <stdio.h>
#include <conio.h> 
int main() {
    int a,b;
    char op;
    // Enter the Inputs
    printf("Enter your first number, operator and second number");
    scanf("%d %c %d", &a, &op, &b);
    
    switch(op){
    {    
    case '+' :
    printf("%d + %d = %d", a,b, a+b);
    break;
    }
    {
    case '-' :
    printf("%d - %d = %d", a,b, a-b);
    break;
    }
    {
    case '*' :
    printf("%d * %d = %d", a,b, a*b);
    break;
    }
    {
    case '/' :
    printf("%d / %d = %d", a,b, a/b);
    break;
    }
    {
    default :
    printf("Invalid");
    }    
   return 0;
}}