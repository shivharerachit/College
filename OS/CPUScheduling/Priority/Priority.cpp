#include<bits/stdc++.h>
using namespace std;

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
    // Priority
    int pr;
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

int check_priority(int n, int time){
    //This will check the priority of the process whose arrival time is less than time and if not found return -1 and if there are more than one process with same priority then it will check the burst time of the process and if the burst time is also same then it will check the arrival time of the process
    int minPriority = INT_MAX;
    int minBurstTime = INT_MAX;
    int minArrivalTime = INT_MAX;
    int index = -1;
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i].task_check && arr[i].at <= time){
            if(arr[i].pr < minPriority){
                minPriority = arr[i].pr;
                minBurstTime = arr[i].bt;
                minArrivalTime = arr[i].at;
                index = i;
            }
            else if(arr[i].pr == minPriority){
                if(arr[i].at < minArrivalTime){
                    minPriority = arr[i].pr;
                    minBurstTime = arr[i].bt;
                    minArrivalTime = arr[i].at;
                    index = i;
                }
                else if(arr[i].at == minArrivalTime){
                    if(arr[i].bt < minBurstTime){
                        minPriority = arr[i].pr;
                        minBurstTime = arr[i].bt;
                        minArrivalTime = arr[i].at;
                        index = i;
                    }
                }
            }
        }
    }
    return index;
}

int main(){
    int n;
    cout<<"Enter Number of Process: ";
    cin>>n;
    cout<<"Name: Rachit Shivhare\nEnrollment No.:0827CS221213\n";
    //Input
    for(int i = 0 ; i<n ; i++){
        arr[i].pno=i;
        cout<<"Enter the Process ID:";
        cin>>arr[i].id;
        cout<<"Enter the Arrival Time:";
        cin>>arr[i].at;
        cout<<"Enter the Burst Time:";
        cin>>arr[i].bt;
        cout<<"Enter the Priority (highest priority first):";
        cin>>arr[i].pr;
    }

    //Initialise
    for(int i = 0 ; i<n ; i++){
        arr[i].task_check=true;
        arr[i].mark=true;
    }
    int time = 0;
    int path[n];

    //Main Logic
    for(int i = 0 ; i<n ; i++){
        int index = check_priority(n, time);
        if(index == -1){
            time++;
            i--;
            continue;
        }
        path[i] = arr[index].pno;
        arr[index].task_check = false;
        arr[index].mark = false;
        time += arr[index].bt;
        arr[index].ct = time;
        arr[index].tat = arr[index].ct - arr[index].at;
        arr[index].wt = arr[index].tat - arr[index].bt;
    }

    //Output
    int tbt=0, twt=0;
    cout<<"\nPath: \n";
    for(int i=0;i<n;i++){
        tbt+=arr[i].bt;
        twt+=arr[i].wt;
        cout<<path[i]+1<<"->\t";
    }
    cout<<"End..\n\nGantt Chart: \n";
    for(int i=0;i<n;i++){
        cout<<"P"<<path[i]+1<<" ";
    }
    cout<<"\n\n";
    int ideal=time-tbt;
    cout<<"P No.\tP ID\tAT\tBT\tPR\tCT\tWT\tTAT\n";
    for(int i=0;i<n;i++){
        cout<<arr[i].pno<<"\t"<<arr[i].id<<"\t"<<arr[i].at<<"\t"<<arr[i].bt<<"\t"<<arr[i].pr<<"\t"<<arr[i].ct<<"\t"<<arr[i].wt<<"\t"<<arr[i].tat<<"\n";
    }
    cout<<"\nTotal Ideal Time = "<<ideal<<"\nAverage Waiting Time =  "<<(float)twt/n<<"\nAverage Turnaround Time = "<<(float)(twt+tbt)/n<<"\n";
    return 0;
}