/******************
Name:
ID:
Assignment:
*******************/
//#include <stdio.h>
//
//// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.
//
//int main() {
//
//  // What bit
//  printf("What bit:\n");
//  /*Scan two integers (representing number and a position)
//  Print the bit in this position. */
//
//  // Set bit
//  printf("\nSet bit:\n");
//  /*Scan two integers (representing number and a position)
//  Make sure the bit in this position is "on" (equal to 1)
//  Print the output
//  Now make sure it's "off" (equal to 0)
//  Print the output */
//
//  // Toggle bit
//  printf("\nToggle bit:\n");
//  /*Scan two integers (representing number and a position)
//  Toggle the bit in this position
//  Print the new number */
//
//  // Even - Odd
//  printf("\nEven - Odd:\n");
//  /* Scan an integer
//  If the number is even - print 1, else - print 0. */
//
//  // 3, 5, 7, 11
//  printf("\n3, 5, 7, 11:\n");
//  /* Scan two integers in octal base
//  sum them up and print the result in hexadecimal base
//  Print only 4 bits, in positions: 3,5,7,11 in the result. */
//
//  printf("Bye!\n");
//
//  return 0;
//}
#include <stdio.h>

int main() {

    int number = 0;
    int position = 0;
    printf("What bit:\n");//
    printf("Please enter a number:\n");
    scanf("%d",&number);
    printf("Please enter a position:\n");
    scanf("%d", &position);
    number = (1 << position) & number;// turning every bit to zero, apart from the chosen one

    int bit = number >> position;//moving the bit to be lsb.
    printf("%d\n", bit);


    q2
    int num2 = 0;
    int position2 = 0;
    printf("Set bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num2);
    printf("Please enter a position:\n");
    scanf("%d", &position2);
    int numBitOff = num2;
    numBitOff &= ~(1 << position2);
    num2 = (1 << position2) | num2;
    printf("Number with bit 7 set to 1: %d\n",num2);
    printf("Number with bit 7 set to 0: %d\n", numBitOff);


    int number3 = 0;
    int position3 = 0;
    printf("Toggle bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &number3);
    printf("Please enter a position:\n");
    scanf("%d", &position3);
    printf("Number with bit %d toggled: %d", position3, (1 << position3) | number3);

    int EvenOdd = 0;
        printf("Even - Odd:\n"
               "Please enter a number:\n");
        scanf("%d", &EvenOdd);
        int result = 1 ^ (EvenOdd & 1);
        printf("%d\n", result);// 1 if even, 0 if odd.


    int number5 = 0;
    int number6 = 0;
    printf("Please enter the first number (octal):\n");
    scanf("%o", &number5);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &number6);
    int resultInHex = number5 + number6;
    printf("The sum in hexadecimal: %x", resultInHex);

    int bit3 = 1 & (resultInHex >> 3);
    int bit5 = 1 & (resultInHex >> 5);
    int bit7 = 1 & (resultInHex >> 7);
    int bit11 = 1 & (resultInHex >> 11);
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3,bit5,bit7,bit11);

    printf("Bye!");
    return 0;
}