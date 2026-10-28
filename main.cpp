#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main(){
    char names[5][20];
    int marks[5][3];
    double highestAverage = 0;
    char topStudent[20];
    for(int i = 0 ; i < 5; i++){
        cout<<"Enter the "<<i+1<< " student name : "<<endl;
        cin.getline(names[i],20);
    
   /* for( int i = 0;i<5;i++){
        cout<<"the "<<i+1<< " student name : "<<names[i]<<endl;

    }*/
        for(int j = 0 ; j<3;j++){
            cout<<"Enter mark "<<j+1<< " for student "<< i+1<<": ";
    //cin.ignore(1000,'\n');//
            cin>>marks[i][j];
   }
   cin.ignore(1000,'\n');
}
  /*for(int i=0;i<5;i++){
        cout<<" student : "<<names[i]<<endl;
        for(int j = 0;j<3;j++){*
        cout<<"mark "<<j+1<<": "<<marks[i][j]<<endl;
    }
  }*/
char headings[6][10]={"Name","M1","M2","M3","Total","Average"};/*
 for(int i = 0;i<6;i++){
    cout<<left<<setw(7)<<headings[i];*/
cout << left 
     << setw(12) << headings[0]  // Name
     << setw(7)  << headings[1]  // M1
     << setw(7)  << headings[2]  // M2
     << setw(7)  << headings[3]  // M3
     << setw(8)  << headings[4]  // Total
     << setw(8)  << headings[5]  // Average
     << endl;
 for(int i=0;i<5;i++){
    int total=0;
    for(int j = 0;j<3;j++){
        total+=marks[i][j];
    }
    double average = total/3.0;
    if(average > highestAverage){
        highestAverage = average;
        strcpy(topStudent,names[i]);
    }
    cout<<left<<setw(12)<<names[i];
    for(int j = 0;j<3;j++){
        cout<<setw(7)<<marks[i][j];
    }
    cout<<setw(8)<<total<<setw(8)<<average<<endl;
    
 }
    cout<<"\n Top Student :"<<topStudent;

return 0;
}