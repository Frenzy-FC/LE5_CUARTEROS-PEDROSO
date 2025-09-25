#include <stdio.h>

int main () {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int sum = 0;

    
        printf("Enter positive numbers to ADD (zero or negative to STOP)");
        while(1) {
            printf("\n\nEnter a number: ");
            scanf("%d", &num1);
            
            printf("Enter a number: ");
            scanf("%d", &num2);
            
            printf("Enter a number: ");
            scanf("%d", &num3);
            
            printf("Enter a number: ");
            scanf("%d", &num4);
            
            
    
            
            if (num1 >= 1 && num2 >= 1 && num3 >= 1 && num4 >= 1){
                sum = num1 + num2 + num3 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 >= 1 && num3 >= 1 && num4 >= 1){
                sum = num2 + num3 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 >= 1 && num2 <= 0 && num3 >= 1 && num4 >= 1){
                sum = num1 + num3 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 >= 1 && num2 >= 1 && num3 <= 0 && num4 >= 1){
                sum = num1 + num2 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 >= 1 && num2 >= 1 && num3 >= 1 && num4 <= 0){
                sum = num1 + num2 + num3;
                printf("Total sum: %d", sum);
                
            }
            else if (num1 >= 1 && num2 >= 1 && num3 <= 0 && num4 <= 0){
                sum = num1 + num2;
                printf("Total sum: %d", sum);
                
            }
            else if (num1 >= 1 && num2 <= 0 && num3 >= 1 && num4 <= 0){
                sum = num1 + num3;
                printf("Total sum: %d", sum);
                
            }
            else if (num1 >= 1 && num2 <= 0 && num3 <= 0 && num4 >= 1){
                sum = num1 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 >= 1 && num3 >= 1 && num4 <= 0){
                sum = num2 + num3;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 >= 1 && num3 <= 0 && num4 >= 1){
                sum = num2 + num4;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 <= 0 && num3 >= 1 && num4 >= 1){
                sum = num3 + num4;
                printf("Total sum: %d", sum);
                
            }
            else if (num1 >= 1 && num2 <= 0 && num3 <= 0 && num4 <= 0){
                sum = num1;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 >= 1 && num3 <= 0 && num4 <= 0){
                sum = num2;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 <= 0 && num3 >= 1 && num4 <= 0){
                sum = num3;
                printf("Total sum: %d", sum);
            }
            else if (num1 <= 0 && num2 <= 0 && num3 <= 0 && num4 >= 1){
                sum = num4;
                printf("Total sum: %d", sum);
            }
        
        }
        
        
        
        
        
        
        
}
        
            
     
