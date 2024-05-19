#include<bits/stdc++.h>

#define sh 100

struct process {
    // Process No.
    int pno;
    // Process ID
    int id;
    // Arrival time
    int at;
    // Burst time
    int bt;
    // Completion time
    int ct;
    // Turnaround time
    int tat;
    // Waiting time
    int wt;
    //boolean value to keep record of
    bool task_check;//to task_check wheather the process is added in the tasks
    bool mark;//to task_check wheather the process is executed or not 
} arr[sh + 1];

using namespace std;
int main(){
    int n, time=0;
    int length_tasks=0, que_length=0;
    // cout<<"AIM : Write a program to implement SJF CPU scheduling algorithm."<<endl;
    cout<<"Enter the no. of jobs:";
    cin>>n;
    int path[n], tasks[n];

    for(int i=0;i<=sh;i++){
        arr[i].task_check=true;
        arr[i].mark=true;
        arr[i].pno=i;
        arr[i].id=999;
        arr[i].at=999;
        arr[i].bt=999;
    }

    for(int i = 0 ; i<n ; i++){
        path[i]=999;
        tasks[i]=999;
        cout<<"Enter the process ID:";
        cin>>arr[i].id;
        cout<<"Enter the arrival time:";
        cin>>arr[i].at;
        cout<<"Enter the burst time:";
        cin>>arr[i].bt;
    }
    
    for(int i = 0 ; i<n ; i++){
        if(length_tasks!=n){
            label:
            for(int j=0 ; j<n ; j++){
                // cout<<"Iteration :"<<j<<"\nAT:"<<arr[j].at<<"\nTime :"<<time<<"\nTask Check :"<<arr[j].task_check<<"\n\n";
                if(arr[j].at<=time && arr[j].task_check){
                    // cout<<"\nIteration :"<<j<<"\nAT:"<<arr[j].at<<"\nTime :"<<time<<"\nTask Check :"<<arr[j].task_check<<"\n";
                    tasks[j]=arr[j].bt;
                    // cout<<"BT: "<<tasks[j]<<"\n";
                    length_tasks++;
                    // cout<<"Task Length:"<<length_tasks<<"\n\n";
                    arr[j].task_check=false;
                }
            }
            if(length_tasks<=que_length){
                // cout<<"\n\nLessThan\n\n";
                time++;
                goto label;
            }
        }
        // cout<<"\n\n"<<tasks[3]<<"\n\n";
        // cout<<"\n"<<length_tasks<<"\n";
        int min=99, index=0;
        // cout<<"\n";
        for(int k=0 ; k<n ; k++){
            // cout<<"Iteration K :"<<k<<"\nTask K:"<<tasks[k]<<"\nMinimum :"<<min<<"\nMark :"<<arr[k].mark<<"\n";
            if(tasks[k]<min && arr[k].mark==true){
                // cout<<"Iteration :"<<i<<"\nTask K:"<<tasks[k]<<"\nMinimum :"<<min<<"\nMark :"<<arr[k].mark<<"\n";
                min=tasks[k];
                index=k;
            }
            // cout<<min<<"\t";
        }
        // // cout<<"\n";
        if(arr[index].mark && min != 999){
            arr[index].mark = !arr[index].mark;
            time += min;
            arr[index].ct=time;
            arr[index].tat=time - arr[index].at;
            arr[index].wt=arr[index].tat - arr[index].bt;
            que_length++;
        }
    }
    int tbt=0, twt=0;
    for(int i=0;i<n;i++){
        tbt+=arr[i].bt;
        twt+=arr[i].wt;
    }
    int ideal=time-tbt;

    cout<<"P No.\tP ID\tAT\tBT\tCT\tWT\tTAT\n";
    for(int i=0;i<n;i++){
        cout<<arr[i].pno<<"\t"<<arr[i].id<<"\t"<<arr[i].at<<"\t"<<arr[i].bt<<"\t"<<arr[i].ct<<"\t"<<arr[i].wt<<"\t"<<arr[i].tat<<"\n";
    }
    cout<<"\nTotal Ideal Time = "<<ideal<<"\nAverage Waiting Time =  "<<(float)twt/n<<"\nAverage Turnaround Time = "<<(float)(twt+tbt)/n<<"\n";
    return 0;
}