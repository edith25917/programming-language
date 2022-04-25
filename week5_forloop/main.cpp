/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int input(int scores[]);
double calAvg(int scores[], int count);
void printGrade(int scores[], int count, double avg);

int main()
{
    int count = 0;
    int scores[30];
    double avg = 0;
    
    count = input(scores);
    avg = calAvg(scores, count);
    printGrade(scores, count, avg);
    
    return 0;
}


int input(int scores[]){
    int count = 0;
    
    cout<<"請輸入筆數:";
    cin>>count;
    
    cout<<"請輸入"<<count<<"筆成績:";
    for(int i=0;i<count; i++)
    {
       cin>>scores[i];
    }
    
    return count;
}

double calAvg(int scores[], int count){
    double sum = 0.0;
    double avg = 0.0;
    for(int i=0;i<count; i++)
    {
       sum = sum + scores[i];
    }
    avg = sum / count;
    return avg;
}

void printGrade(int scores[], int count, double avg){
    for(int i=0;i<count; i++)
    {
        cout<<"成績"<< i+1<<" "<<scores[i]<<"分"<<endl;
    }
    cout<<"總共 "<< count<<"筆成績"<<endl;
    cout<<"平均 "<< avg<<"分"<<endl;
}
