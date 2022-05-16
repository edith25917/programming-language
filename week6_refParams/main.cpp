#include <iostream>

using namespace std;

void input(double &a, double &b, char &op);
double calOutput(double &a, double &b, char &op);
void printResult(double &a, double &b, char &op, double &output);

int main()
{
    double a;
    double b;
    char op;
    double output;
    
    input(a, b, op);
    output = calOutput(a, b, op);
    printResult(a, b, op, output);
    
    return 0;
}

void input(double &a, double &b, char &op){
    cout<<"請輸入第一個數字:";
    cin>>a;
    
    cout<<"請輸入第二個數字:";
    cin>>b;
    
    cout<<"請輸入運算符號:";
    cin>>op;
}

double calOutput(double &a, double &b, char &op){
    double output = 0.0;
    if(op == '+'){
        output = a + b;
    }else if(op == '-'){
        output = a - b;
    }else if(op == '*'){
        output = a * b;
    }else if(op == '/'){
        output = a / b;
    }
    return output;
}

void printResult(double &a, double &b, char &op, double &result){
    cout<<a << op << b <<"=" << result;
}
