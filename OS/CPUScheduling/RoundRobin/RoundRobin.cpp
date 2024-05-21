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
    int bt1;
    // Completion time
    int ct;
    // Turnaround time
    int tat;
    // Waiting time
    int wt;
    // Start time
    int st;
    // Response time
    int rt;
    //boolean value to keep record of
    bool task_check;//to task_check wheather the process is added in the tasks
    bool exe;//to task_check wheather the process is executed or not 
    bool comp;//to check wheather the process is completed or not
} arr[sh + 1];

struct task{
    int pno;
    int bt;
} tasks[sh + 1];

void sort(int n, bool at = false){
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            if (arr[j].at>arr[k].at && at){
                auto x=arr[j];
                arr[j]=arr[k];
                arr[k]=x;
            }
            else if (arr[j].pno>arr[k].pno && !at){
                auto x=arr[j];
                arr[j]=arr[k];
                arr[k]=x;
            }
        }
    }
}
using namespace std;
int main(){
    int n, t;
    cout<<"Enter Number of Process: ";
    cin>>n;
    cout<<"Enter Time Quantum: ";
    cin>>t;
    cout<<"Name: Rachit Shivhare\nEnrollment No.:0827CS221213\n";
    for(int i = 0 ; i<n ; i++){
        arr[i].pno= i+1;
        cout<<"Enter the Process ID:";
        cin>>arr[i].id;
        cout<<"Enter the Arrival Time:";
        cin>>arr[i].at;
        cout<<"Enter the Burst Time:";
        cin>>arr[i].bt;
        arr[i].bt1 = arr[i].bt;
    }

    //Initialising the values
    for(int i = 0 ; i<n ; i++){
        arr[i].exe=false;
        arr[i].comp=false;
        tasks[i].bt=999;
    }
    int time = 0;
    int length_tasks = n;
    int taskarray = 0;

    //Main Logic
    sort(n, true);
    while(length_tasks){
        for(int i = 0 ; i<n ; i++){
            if(arr[i].at<=time && !arr[i].comp){
                if(arr[i].bt<=t){
                    if(arr[i].exe==false){
                        arr[i].st = time;
                        arr[i].exe = true;
                    }
                    time += arr[i].bt;
                    arr[i].bt = 0;
                    arr[i].ct = time;
                    arr[i].comp = true;
                    arr[i].tat = arr[i].ct - arr[i].at;
                    arr[i].wt = arr[i].tat - arr[i].bt1;
                    arr[i].rt = arr[i].st - arr[i].at;
                    length_tasks--;
                }
                else if(arr[i].bt>t){
                    if(arr[i].exe==false){
                        arr[i].st = time;
                        arr[i].exe = true;
                    }
                    time += t;
                    arr[i].bt -= t;
                }
            }
        }
    }
    sort(n);
    int tbt=0, twt=0, trt=0;
    cout<<"\nPath: \n";
    for(int i=0;i<n;i++){
        tbt+=arr[i].bt;
        twt+=arr[i].wt;
        trt+=arr[i].rt;
    }
    int ideal=time-tbt;
    //Output
    cout<<"P No.\tP ID\tAT\tBT\tCT\tTAT\tWT\tST\tRT\n";
    for(int i=0;i<n;i++){
        cout<<arr[i].pno<<"\t"<<arr[i].id<<"\t"<<arr[i].at<<"\t"<<arr[i].bt1<<"\t"<<arr[i].ct<<"\t"<<arr[i].tat<<"\t"<<arr[i].wt<<"\t"<<arr[i].st<<"\t"<<arr[i].rt<<"\n";
    }
    cout<<"\nTotal Ideal Time = "<<ideal<<"\nAverage Waiting Time =  "<<(float)twt/n<<"\nAverage Turnaround Time = "<<(float)(twt+tbt)/n<<"\nAverage Response Time = "<<(float)trt/n<<"\n";
    return 0;
}