#include<stdio.h>
#include<string.h>
void unary(char check[0])
{

            if(check[0]=='/')
            {
                printf("arithmatic Division operator");
            }
            else if (check[0]=='*')
            {
                printf("arithmatic Multiflication operator");
            }

             else if (check[0]=='+')
            {
                printf("arithmatic Addition operator");
            }
             else if (check[0]=='-')
            {
                printf("arithmatic Subtractor operator");
            }
             else if (check[0]=='%')
            {
                printf("arithmatic Modulo Division operator");
            }
            else if (check[0]=='=')
            {
                printf("Assignment operator");
            }
            else if (check[0]=='!')
            {
                printf("Logical NOT operator");
            }
            else if (check[0]=='<')
            {
                printf("Less than Relational operator");
            }
            else if (check[0]=='>')
            {
                printf("Greater than Relational operator");
            }
            else if (check[0]=='&')
            {
                printf("Bitwise AND operator");
            }
            else if (check[0]=='|')
            {
                printf("Bitwise OR operator");
            }
            else if (check[0]=='^')
            {
                printf("Bitwise X-OR operator");
            }
            else if (check[0]=='`')
            {
                printf("Bitwise Complement operator");
            }
            else if (check[0]==',')
            {
                printf("Comma operator");
            }
            else if (check[0]=='.')
            {
                printf("Struct DOT operator");
            }
            else
            {
                printf("Enter valid operator");
            }

}

void binary(char check[1])
{

    if (check[0]=='-'&& check[1]=='-')
            {
                printf("Decrement operator");
            }
    else if (check[0]=='+'&& check[1]=='+')
            {
                printf("Increment operator");
            }
    else if (check[0]=='+'&& check[1]=='=')
            {
                printf("Plus equal assignment operator");
            }
    else if (check[0]=='-'&&check[1]=='=')
            {
                printf("Minus equal assignment operator");
            }
    else if (check[0]=='*'&&check[1]=='=')
            {
                printf("Multification equal assignment operator");
            }
    else if (check[0]=='/'&&check[1]=='=')
            {
                printf("Division equal assignment operator");
            }
    else if (check[0]=='%'&&check[1]=='=')
            {
                printf("Modulus equal assignment operator");
            }
    else if (check[0]=='!'&&check[1]=='=')
            {
                printf("NOT equal to Relational operator");
            }
    else if (check[0]=='>'&&check[1]=='=')
            {
                printf("Greater than or equal to  Relational operator");
            }
    else if (check[0]=='<'&&check[1]=='=')
            {
                printf("Less than or equal to Relational operator");
            }
    else if (check[0]=='<'&&check[1]=='<')
            {
                printf("Bitwise Shift left operator");
            }
    else if (check[0]=='>'&&check[1]=='>')
            {
                printf("Bitwise Shift right operator");
            }
    else if (check[0]=='-'&&check[1]=='>')
            {
                printf("stuct pointer operator");
            }
    else
            {
                printf("Enter valid operator");

            }
}
int main ()
{
    printf("Check whether operator or not\nOperator: ");
    char check[5];
    gets(check);
    printf("Stored: ");
    puts(check);
    int i =strlen(check);
    int j;

        if (i==1)
        {
        unary(check);
        }
        else if (i==2)
        {
            binary(check);
        }
        else
        {
            printf("Enter valid operator\nOperator can not be more than 2");
        }

}
