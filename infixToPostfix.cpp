#include <bits/stdc++.h>
using namespace std;
#include <stack>
int prec(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixToPostfix(string exp)
{
    stack<char> st;
    string ans;
    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];
        if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ans = ans + ch;
        }
        else if (ch == '(')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
           if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(ch))
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(ch);
        }
       
    }
     while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
    return ans;
}

int main()
{
    string exp="(a-b/c)*(a/k-l)";
    cout<<infixToPostfix(exp)<<endl;
    return 0;
}