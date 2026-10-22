
#include <iostream>
using namespace std;

int precedence(char op)
{
    if(op == '^')
        return 3;
    else if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}

int main()
{
    char infix[50], postfix[50], stack[50];
    int top = -1, i, j = 0;

    cout << "Enter infix expression: ";
    cin >> infix;

    for(i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        // Check whether it is a letter or digit
        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9'))
        {
            postfix[j] = ch;
            j++;
        }
        else if(ch == '(')
        {
            top++;
            stack[top] = ch;
        }
        else if(ch == ')')
        {
            while(top >= 0 && stack[top] != '(')
            {
                postfix[j] = stack[top];
                j++;
                top--;
            }
            top--;
        }
        else
        {
            while(top >= 0 && stack[top] != '(' &&
                 (precedence(stack[top]) > precedence(ch) ||
                 (precedence(stack[top]) == precedence(ch) && ch != '^')))
            {
                postfix[j] = stack[top];
                j++;
                top--;
            }

            top++;
            stack[top] = ch;
        }
    }

    while(top >= 0)
    {
        postfix[j] = stack[top];
        j++;
        top--;
    }

    postfix[j] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

