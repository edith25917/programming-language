
#include <iostream>

using namespace std;

string getIdentity(int identityType)
{
    switch(identityType) {
        case 1:
            return "員工";
        case 2:
            return "VIP";
        case 3:
            return "會員";
        case 4: 
            return "一般";
    }
    return "";
}

double getDiscount(int identityType, bool isNum)
{
    switch(identityType) {
        case 1:
            return isNum ? 0.7 : 7;
        case 2:
            return isNum ? 0.75 : 75;
        case 3:
            return isNum ? 0.9 : 9;
        case 4: 
            return isNum ? 0.95 : 95;
    }
    return -1;
}


int main()
{
    int total;
    int identityType;
    int amountToPay;
    string name;
    
    cout<<"請輸入姓名: ";
    cin>>name;
    
    cout<<"請輸入身分類別: ";
    cin>>identityType;
    
    cout<<"請輸入消費總額: ";
    cin >> total;
    
    amountToPay = total * getDiscount(identityType, true);
    
    cout<<"-------------"<<endl;
    cout<<"姓名: "<<name<<endl;
    cout<<"身分類別: "<<getIdentity(identityType) <<",折扣為"<<getDiscount(identityType, false) <<" 折"<<endl;
    cout<<"消費金額: "<<total<<"元"<<endl;
    cout<<"應付金額: "<<amountToPay<<"元"<<endl;


    return 0;
}
