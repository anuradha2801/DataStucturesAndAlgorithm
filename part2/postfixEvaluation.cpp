#include<bits/stdc++.h>
using namespace std;
int  evaluatePostfix(string &exp) {
    // Write your code here.
	stack<int>s;
	for(int i=0;i<exp.length();i++)
	{
		 
	   if(exp[i]>='0' && exp[i]<='9')
	   {
		  s.push(exp[i]-'0'); 
	   }
		else{
		   int op2=s.top();
		   s.pop();
           int op1;
           if(s.empty())
           {
             op1=0;
           }else{
                 op1=s.top();
		   s.pop();
           }
		   
		   switch(exp[i])
		   {
			   case '+': s.push(op1+op2);
				 break;
				   
			   case '-':s.push(op1-op2);
				   break;
			   case '*':s.push(op1*op2);
				   break;
			   case '/':s.push(op1/op2);
				   break;
		   }
	   }
	
	}

	return s.top();;
}
int main(){
    string exp="46+2/5*7+";
    cout<<evaluatePostfix(exp);
    return 0;
}