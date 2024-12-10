#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define max 100
typedef struct stack
{
    string data[max];
    int top;
} s;

void init(s *p)
{
    p->top = -1;
}

int precedence(string c)
{
    if (c == "(")
    {
        return 0;
    }

    else if (c == "+" || c == "-")
    {
        return 1;
    }
    else if (c == "*" || c == "/")
    {
        return 2;
    }
    else if (c == "^")
    {
        return 3;
    }
}

int full(s *p)
{
    if (p->top == max - 1)
        return 1;
    else
        return 0;
}

int empty(s *p)
{
    if (p->top == -1)
        return 1;
    else
        return 0;
}

string pop(s *p)
{
    string x;
    if (empty(p))
        return 0;
    x = p->data[p->top];
    p->top = p->top - 1;
    return x;
}

void push(s *p, string x)
{
    if (full(p))
        return;
    p->top = p->top + 1;
    p->data[p->top] = x;
}

string topchar(s *p)
{
    string x = p->data[p->top];
    return x;
}

int infix_to_prefix(char *arr, s *p1, s *p2)
{
    int i = 0;
    cout << strlen(arr)<<endl;
    string str1, str2, str3, str4, str5;
    while (arr[i] != '\0')
    {
        if (arr[i] == '(')
        {
            // string ch = arr[i] ;
            push(p1,  string(1, arr[i]));
        }

        else if (isalnum(arr[i]))
        {
            push(p2, string(1, arr[i]));
        }

        else if (arr[i] == ')')
        {
            while (topchar(p1) != "(")
            {
                str1 = pop(p1);
                str2 = pop(p2);
                str3 = pop(p2);
                str4 = str3 + str2;
                str5 = str1 + str4;
                push(p2, str5);
            }
            pop(p1);
        }

        else
        {
            while (precedence(string(1, arr[i])) <= precedence(topchar(p1)))
            {
                str1 = pop(p1);
                str2 = pop(p2);
                str3 = pop(p2);
                str4 = str3 + str2;
                str5 = str1 + str4;
                push(p2, str5);
            }
            push(p1, string(1, arr[i]));
        }

        i++;
    }
     while (!empty(p1)) {
        str1 = pop(p1);
        str2 = pop(p2);
        str3 = pop(p2);
        str4 = str3 + str2;
        str5 = str1 + str4;
        push(p2, str5);
    }

        cout << "Prefix expression: " << pop(p2) << endl;
}
int main()
{
    char exp[] = "(a+(b-c*d)^e/f-g)";
    s s1, s2;
    init(&s1);
    init(&s2);
    infix_to_prefix(exp, &s1, &s2);
}