#include <iostream>
#include <array>

using namespace std;

int main()
{
    string name;
    string stNum;
    array<int, 3> scores;
    
    while(true){
        cout<<"�п�J�m�W: ";
        cin >> name;
    
        cout<<"�п�J�Ǹ�: ";
        cin >> stNum;
        
        cout<<"�п�J������: ";
        cin >> scores[0];
        
        cout<<"�п�J�^�����: ";
        cin >> scores[1];    
        
        cout<<"�п�J�ƾǤ���: ";
        cin >> scores[2];  
        
        // ���`�� &����
        double total = 0;
        double average = 0.0;
    
        for(int i=0;i<scores.size();i++){
            total = total + scores[i];
        }
        average = total / scores.size();
        
        // ��X
        cout<<"�m�W: " << endl;
        cout<<"�m�W: " << name << endl;
        cout<<"�Ǹ�: " << stNum<< endl;
        cout<<"�z�����Z�p�U: "<< endl;
        cout<<"----------------- "<< endl;
        cout<<"���: " << scores[0]<< "��"<< endl;
        cout<<"�^��: " << scores[1]<< "��"<< endl;
        cout<<"�ƾ�: " << scores[2]<< "��"<< endl;
        cout<<"----------------- "<< endl;
        cout<<"�`��: " << total << "��"<< endl;
        cout<<"����: " << average<< "��"<< endl;
        cout << "�Ы����N���~��..." << endl;
        cin.get();
        exit(0);
    }
    
    return 0;
}
