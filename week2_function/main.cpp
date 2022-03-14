
#include <iostream>

using namespace std;

int getDiscountTotal(int total, int type){
    int discountTotal;
    if(type == 1){
        discountTotal =  total * 0.7;
    }
    else if(type == 2){
        discountTotal = total * 0.75;
    }
    else if(type == 2){
        discountTotal = total * 0.9;
    }
    else{
        discountTotal = total * 0.95;
    }
    return discountTotal;
}

int main()
{
    int total;
    int type;
    int amountToPay;
    string name;
    
    cout<<"請輸入姓名: ";
    cin>>name;
    
    cout<<"請輸入身分類別: ";
    cin>>type;
    
    cout<<"請輸入消費總額: ";
    cin >> total;
    
    amountToPay = getDiscountTotal(total, type);
    
    cout<<"姓名: "<<name<<endl;
    
    switch(type) {
        case 1:
            cout<<"身分類別: 員工，折扣為7折"<<endl;
            break;
        case 2:
            cout<<"身分類別: VIP，折扣為75折"<<endl;
            break;
        case 3:
            cout<<"身分類別: 會員，折扣為9折"<<endl;
            break;
        case 4: 
            cout<<"身分類別: 一般，折扣為95折"<<endl;
            break;
    }
    cout<<"消費金額: "<<total<<"元"<<endl;
    cout<<"應付金額: "<<amountToPay<<"元"<<endl;


    return 0;
}
