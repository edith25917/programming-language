#include <iostream>

using namespace std;

void inputGrade(int scores[]);
double getAvg(int scores[], int len);
void outputGrade(int scores[], double avg);


int main()
{
    int len = 3;
    int scores[len];
    double avg = 0.0;
    
    inputGrade(scores);
    avg = getAvg(scores, len);
    outputGrade(scores, avg);

    return 0;
}

void inputGrade(int scores[]){
    cout<<"請輸入國文分數:";
    cin>>scores[0];
    cout<<"請輸入英文分數:";
    cin>>scores[1];    
    cout<<"請輸入數學分數:";
    cin>>scores[2];
}

double getAvg(int scores[], int len){
    double avg = 0.0;
    double total = 0.0;
    for(int i=0;i<len;i++){
        total = total + scores[i];
    }    

    avg = total / len;
    return avg;
}

void outputGrade(int scores[], double avg){
    cout<<"你的成績如下:"<<endl;
    cout<<"------------------"<<endl;
    cout<<"國文: "<<scores[0]<<"分"<<endl;
    cout<<"英文:"<<scores[1]<<"分"<<endl;
    cout<<"數學:"<<scores[2]<<"分"<<endl;
    cout<<"平均:"<<avg<<"分"<<endl;
}
