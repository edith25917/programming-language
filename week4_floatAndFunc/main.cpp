/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

float cal(float num1, float num2, char op);
void output(float num1, float num2, char op, float result);

int main()
{
    float a;
    float b;
    char op;
    float result;
    
    cout<<"請輸入數字1: ";
    cin>>a;
    cout<<"請輸入數字2: ";
    cin>>b;
    cout<<"請輸入運算符號: ";
    cin>>op;
    
    result = cal(a, b, op);
    output(a,b,op,result);
    
    return 0;
}

float cal(float num1, float num2, char op){
    float sum;
    if(op == '+'){
        sum = num1 + num2;
    }else if(op == '-'){
        sum = num1 - num2;
    }else if(op == '*'){
        sum = num1 * num2;
    }else if(op == '/'){
        sum = num1 / num2;
    }
    return sum;
}

void output(float num1, float num2, char op, float result){
    cout<<num1<<op<<num2<<"="<<result;
}


