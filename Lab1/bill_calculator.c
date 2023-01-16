#include <stdio.h>

int main() {
    // Write C code here
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    int twenty = amount/20;
    printf("$20 bills: %d \n",twenty);
    
    int ten = (amount%20)/10;
    printf("$10 bills: %d \n",ten);
    
    int five = (amount%10) /5;
    printf("$5 bills: %d \n",five);
    
    int one = (amount%5) / 1;
    printf("$1 bills: %d \n",one);
  
     

    return 0;
}
