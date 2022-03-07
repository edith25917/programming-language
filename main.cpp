#include <iostream>
#include <array>

using namespace std;

int main()
{
    string name;
    string stNum;
    array<int, 3> scores;
    
    while(true){
        cout<<"請輸入姓名: ";
        cin >> name;
    
        cout<<"請輸入學號: ";
        cin >> stNum;
        
        cout<<"請輸入國文分數: ";
        cin >> scores[0];
        
        cout<<"請輸入英文分數: ";
        cin >> scores[1];    
        
        cout<<"請輸入數學分數: ";
        cin >> scores[2];  
        
        // 算總分 &平均
        double total = 0;
        double average = 0.0;
    
        for(int i=0;i<scores.size();i++){
            total = total + scores[i];
        }
        average = total / scores.size();
        
        // 輸出
        cout<<"姓名: " << endl;
        cout<<"姓名: " << name << endl;
        cout<<"學號: " << stNum<< endl;
        cout<<"您的成績如下: "<< endl;
        cout<<"----------------- "<< endl;
        cout<<"國文: " << scores[0]<< "分"<< endl;
        cout<<"英文: " << scores[1]<< "分"<< endl;
        cout<<"數學: " << scores[2]<< "分"<< endl;
        cout<<"----------------- "<< endl;
        cout<<"總分: " << total << "分"<< endl;
        cout<<"平均: " << average<< "分"<< endl;
        cout << "請按任意鍵繼續..." << endl;
        cin.get();
        exit(0);
    }
    
    return 0;
}
