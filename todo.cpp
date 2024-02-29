
#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<windows.h>//clear screen,pause terminal or sytem,color change

using namespace std;
void print_tasks(string task[], int task_count){
     cout<<"Tasks To Do: "<<endl;
     cout<<"-------------------------------"<<endl;
     for(int i =0;i<task_count;i++){
      cout<<"Task "<<i<<":"<<task[i]<<endl;
     }
     cout<<"-------------------------------"<<endl;
}
int main(){
      string tasks[10] = {""}; //string to store tasks
      //counter variable -. KNOW how many tasks  we have
      int task_count = 0;
      //option variable is to declare till when the task should occur
      int option = -1;
      while(option !=0){
        // we will make menu
        cout<<" ------TO DO LIST------"<<endl;
        cout<<"1 - ADD NEW TASK "<<endl;
        cout<<"2 - TO VIEW TASKS"<<endl;
        cout<<"3 - DELETE THE TASKS"<<endl;
        cout<<"0 - TO TERMINATE THE PROGRAM"<<endl;
        cin>>option;
        switch(option){
          case 1:
          {
            if(task_count>9){
              cout<<"``` TASK LIST IS FULL```"<<endl;

            }
            else{
              cout<<"Enter a New Task: ";
              cin.ignore();
              getline(cin,tasks[task_count]);
              task_count++;
            }
            break;
          }
            
         case 2:
          print_tasks(tasks, task_count);
          break;

         
        }
      }
     

return 0;
}