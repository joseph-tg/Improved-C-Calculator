//simple improved calculator by Eng Gatimu
#include <stdio.h>
#include <stdlib.h>
#include <math.h>>
//following function contains 9 procedures one which is the main function and 8 carries different instruction procedures
//procedure (1) main function, procedure (2) square root, procedure (3) subtract, procedure (4) sum, procedure (5) multiply,
// procedure (6) divide, procedure (7) raising a number to power, procedure (8) finding average of given numbers, procedure (9) temperature conversion table

//procedure (1) the main function which calls other procedures and returns a value
int main()
{
    printf("use operators, '+' sum, '-'subtract, '/' divide, '*' multiply, 'p' raise to power\n");
    double num1, num2, answer;
    char op;

    printf("\nenter a number 'num1'\n");
    scanf("%lf", &num1);
    printf("enter an operator 'op'\n");
    scanf(" %c", &op);
    if (op == 's'){
        squarert(num1);//calls the procedure squarert for square root
    }
    else {
        printf("enter the second number num2\n");
        scanf("%lf", &num2);
//following lines calls for other procedures
        if (op == '-'){
            subtract(num1, num2);
        }
        else if (op == '+'){
            sum(num1, num2);
        }
        else if (op == '*'){
            multiply(num1, num2);
        }
        else if (op == '/'){
            divide(num1, num2);
        }
        else if (op == 'p'){
            power(num1, num2);
        }//end of calling procedures
        else{
            printf("Sorry you entered an Invalid Operator\n\n");
        }
    }
    char o;
    double numbers, result;
    printf("if you want to find average of any given numbers 'array' press y\n");
    scanf(" %c", &o);
    if (o == 'y'){
        average(numbers, result);//this calls the procedure for average
    }
    else{
        printf("thank you for using calculator\n");
    }
    //following characters involves temperature conversion table
    double temp;
    char conv;
    printf("\nif you want to convert temperature using temperature conversion table press 'y':\n");
    scanf(" %c", &conv);
    if (conv == 'y'){
        convert(temp);//this calls for the procedure of temperature conversion table
    }
    else{
        printf("thank you for using calculator\n");
    }
    return 0;
}


//procedure(2) for square root
void (squarert(double num1))
{
    double answer;
    if (num1 <0){
        printf("Error!\n");
    }
    else{
        answer = sqrt(num1);
        printf("Result: sqrt %.3f = %.3f\n",num1, answer);
    }
}

//procedure (3) subtraction of two numbers larger number from the smaller number
void (subtract (double num1, double num2))
{
        if (num1 >= num2){
        printf("Result: %.3f - %.3f = %.3f\n", num1, num2, num1 - num2);
        }else{
            printf("Result: %.3f - %.3f = %.3f\n", num2, num1, num2 - num1);
        }
}//end of procedure subtract

//procedure (4) adding two numbers
void (sum(double num1, double num2))
{
    double answer = num1 + num2;
    printf("Result: %.3f + %.3f = %.3f\n", num1, num2, answer);
}//end of procedure sum

//procedure (5) multiplying two numbers
void (multiply(double num1, double num2))
{
    double answer = num1 * num2;
    printf("Result: %.3f x %.3f = %.3f\n", num1, num2, answer);
}//end of procedure multiply

//procedure (6) dividing two numbers
void (divide(double num1, double num2))
{
    if (num2 != 0){
        double answer = num1 / num2;
        printf("Result: %.3f / %.3f = %.3f\n", num1, num2, answer);
    }
    else{
        printf("error!\n");
    }
}//end of procedure divide

//procedure (7) raising number 1 to power number 2
void (power(double num1, double num2))
{
    double answer = pow(num1, num2);
    printf("Result: %.3f ^ %.3f = %.3f\n", num1, num2, answer);
}//end of procedure raised to power^

//procedure (8) carries out the average of a given array of numbers
void (average(double result))
{
    int size, a, b[20];
    double numbers = 0;

    printf("enter the size of numbers you want to find their average\n");
    scanf("%d", &size);
    printf("enter the numbers you want averaged\n");

    for (a = 0; a < size; a++){
        scanf("%d", &b[a]);//copies the numbers in the specified array
    }
    for (a = 0; a < size; a++)
    {
        numbers = numbers + b[a];
        result = numbers/size;
    }
    printf("average = %.3f\n", result);
}//end of procedure for finding average of given numbers

//procedure (9) involves a temperature conversion table from celsius to fehrenheit or celsius
void (convert(double temp))
{
    double celsius, fehrenheit;
    char ch;
    printf("to convert your temperature from celsius to fehrenheit enter 'f'or from fehrenheit to celsius 'c'\n");
    scanf(" %c", &ch);
    if (ch == 'f'){
        printf("enter temperature in celsius:\n");
        scanf("%lf", &temp);
        celsius = temp * 1.8 + 32;
        printf("result: %.3fF", celsius);
    }
    else if (ch == 'c'){
        printf("enter temperature in fehrenheit:\n");
        scanf("%lf", &temp);
        fehrenheit = (temp - 32)/1.8;
        printf("result: %.3fC", fehrenheit);
    }
    else{
        printf("sorry, you entered an invalid option\n");
    }
}//end of procedure (9) temperature conversion table
