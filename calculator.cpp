#include <iostream>

using namespace std;

long long factorial(long long n)
{
    long long res = 1;

    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

void userInput(int* n1, int* n2, char* op)
{
    cout << "Input Your Numbers We Can Just Do Two Numbers For Now, Sorry :)" << "\n";
    cout << "\n";

    cout << "What Is Your 1st Number : ";
    cin >> *n1;

    cout << "Your Operation, Please [+, -, /, *, %, !] : ";
    cin >> *op;

    if(*op != '!')
    {
        cout << "What Is Your 2nd Number : ";
        cin >> *n2;
    }
}


float do_calculation(int num1, int num2, char operation)
{
    float result;
    if(operation == '+')
    {
        result = num1 + num2; 
    }
    else if(operation == '-')
    {
        result = num1 - num2; 
    }
    else if(operation == '*')
    {
        result = num1 * num2; 
    }
    else if(operation == '/' && num2 != 0)
    {
        result = (float)num1 / (float)num2; 
    }
    else if(operation == '%')
    {
        result = num1 % num2;
    }
    else if(operation == '!') 
    {
        result = factorial(num1);
    }

    return result;
}

int main(int argc, char** args) 
{
    int n1 = 0, n2 = 0;
    char op;


    if(argc > 3) 
    {
        n1 = atoi(args[1]);
        op = args[2][0];
        n2 = atoi(args[3]);
    }
    else if(argc > 2) 
    {
        n1 = atoi(args[1]);
        op = args[2][0];
    }
    else 
    {
        userInput(&n1,&n2,&op);
    }

    cout << do_calculation(n1,n2,op) << endl;
    return 0;
}