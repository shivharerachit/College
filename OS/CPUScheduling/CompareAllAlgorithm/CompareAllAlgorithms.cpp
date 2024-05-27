#include<iostream>
#include <climits>
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
    int bt1;
    // Priority
    int pr;
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
    bool mark;//to task_check wheather the process is executed or not 
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

void input(int n){
    for(int i = 0 ; i<n ; i++){
        arr[i].pno= i+1;
        arr[i].task_check=true;
        arr[i].mark=true;
        arr[i].exe=false;
        arr[i].comp=false;
        arr[i].id=999;
        arr[i].at=999;
        arr[i].bt=999;
        arr[i].bt1=999;
        arr[i].pr=999;
        arr[i].ct=999;
        arr[i].tat=999;
        arr[i].wt=999;
        arr[i].st=999;
        arr[i].rt=999;
        tasks[i].pno=999;
        tasks[i].bt=999;
    }
    for(int i = 0 ; i<n ; i++){
        cout<<"Enter the process ID:";
        cin>>arr[i].id;
        cout<<"Enter the arrival time:";
        cin>>arr[i].at;
        cout<<"Enter the burst time:";
        cin>>arr[i].bt;
        arr[i].bt1=arr[i].bt;
        cout<<"Enter the Priority (highest priority first):";
        cin>>arr[i].pr;
        cout<<"\n";
    }
    sort(n, true);
}

void initialize(int n){
    for(int i = 0 ; i<n ; i++){
        arr[i].task_check=true;
        arr[i].mark=true;
        arr[i].exe=false;
        arr[i].comp=false;
        arr[i].ct=999;
        arr[i].tat=999;
        arr[i].wt=999;
        arr[i].st=999;
        arr[i].rt=999;
        tasks[i].pno=999;
        tasks[i].bt=999;
    }
}

float* fcfs(int n){
    int time=0;
    int wa_time=0;
    int twt=0;
    int tat=0;
    for(int h=0;h<n;h++){
        wa_time=time-arr[h].at;
        time=time+arr[h].bt;
        if(wa_time<=0){
            wa_time=0;
        }
        twt=twt+wa_time;
        tat+=time-arr[h].at;
    }
    float* ret = new float[3];
    ret[0] = (float)twt/n;
    ret[1] = (float)tat/n;
    ret[2] = (float)twt/n;
    return ret;
}

float* sjf(int n){
    initialize(n);
    sort(n, true);
    int time=0;
    int length_tasks=0, que_length=0;
    for(int i = 0 ; i<n ; i++){
        if(length_tasks!=n){
            label:
            for(int j=0 ; j<n ; j++){
                if(arr[j].at<=time && arr[j].task_check){
                    tasks[j].pno=arr[j].pno;
                    tasks[j].bt=arr[j].bt;
                    length_tasks++;
                    arr[j].task_check=false;
                }
            }
            if(length_tasks<=que_length){
                time++;
                goto label;
            }
        }
        int min=999, index=0;
        for(int k=0 ; k<n ; k++){
            if(tasks[k].bt<min && arr[k].mark==true){
                min=tasks[k].bt;
                index=k;
            }
        }
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
    float* ret = new float[3];
    ret[0] = (float)twt/n;
    ret[1] = (float)(twt+tbt)/n;
    ret[2] = (float)twt/n;
    return ret;
}

int check_priority(int n, int time){
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

float* priority(int n){
    initialize(n);
    int time = 0;
    for(int i = 0 ; i<n ; i++){
        int index = check_priority(n, time);
        if(index == -1){
            time++;
            i--;
            continue;
        }
        arr[index].task_check = false;
        arr[index].mark = false;
        time += arr[index].bt;
        arr[index].ct = time;
        arr[index].tat = arr[index].ct - arr[index].at;
        arr[index].wt = arr[index].tat - arr[index].bt;
    }
    int tbt=0, twt=0;
    for(int i=0;i<n;i++){
        tbt+=arr[i].bt;
        twt+=arr[i].wt;
    }
    float* ret = new float[3];
    ret[0] = (float)twt/n;
    ret[1] = (float)(twt+tbt)/n;
    ret[2] = (float)twt/n;
    return ret;
}

float* rr(int n,  int t){
    initialize(n);
    sort(n, true);
    int time = 0;
    int length_tasks = n;
    int taskarray = 0;
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
    int twt=0, tat=0, trt=0;
    for(int i=0;i<n;i++){
        twt+=arr[i].wt;
        tat+=arr[i].tat;
        trt+=arr[i].rt;
    }
    float* ret = new float[3];
    ret[0] = (float)twt/n;
    ret[1] = (float)tat/n;
    ret[2] = (float)trt/n;
    return ret;
}

int main(){
    int n, t;
    cout<<"Name: Maniya Jeswani\nEnrollment No.:0827CS221157\n";
    // cout<<"Name: Rachit Shivhare\nEnrollment No.:0827CS221213\n";
    cout<<"Enter Number of Process: ";
    cin>>n;
    cout<<"Enter Time Quantum (for Premtive CPU Scheduling Algorithm ): ";
    cin>>t;
    input(n);

    float* fcfs_out = fcfs(n);
    float* sjf_out = sjf(n);
    float* priority_out = priority(n);
    float* rr_out = rr(n, t);

    cout<<"\n\n";
    cout<<"Average Waiting Times:\n";
    cout<<"First Come First Serve: "<<fcfs_out[0]<<"\n";
    cout<<"Shortest Job First: "<<sjf_out[0]<<"\n";
    cout<<"Priority Scheduling: "<<priority_out[0]<<"\n";
    cout<<"Round Robin: "<<rr_out[0]<<"\n";

    cout<<"\n\n";
    cout<<"Turnaround Times:\n";
    cout<<"First Come First Serve: "<<fcfs_out[1]<<"\n";
    cout<<"Shortest Job First: "<<sjf_out[1]<<"\n";
    cout<<"Priority Scheduling: "<<priority_out[1]<<"\n";
    cout<<"Round Robin: "<<rr_out[1]<<"\n";

    cout<<"\n\n";
    cout<<"Response Times:\n";
    cout<<"First Come First Serve: "<<fcfs_out[2]<<"\n";
    cout<<"Shortest Job First: "<<sjf_out[2]<<"\n";
    cout<<"Priority Scheduling: "<<priority_out[2]<<"\n";
    cout<<"Round Robin: "<<rr_out[2]<<"\n";

    // Print Which algorithm is best according to the average waiting time
    if(fcfs_out[0] <= sjf_out[0] && fcfs_out[0] <= priority_out[0] && fcfs_out[0] <= rr_out[0]){
        cout<<"\nMinimum Average Waiting Time: First Come First Serve, "<<fcfs_out[0]<<"\n";
    }
    else if(sjf_out[0] <= fcfs_out[0] && sjf_out[0] <= priority_out[0] && sjf_out[0] <= rr_out[0]){
        cout<<"\nMinimum Average Waiting Time: Shortest Job First, "<<sjf_out[0]<<"\n";
    }
    else if(priority_out[0] <= fcfs_out[0] && priority_out[0] <= sjf_out[0] && priority_out[0] <= rr_out[0]){
        cout<<"\nMinimum Average Waiting Time: Priority Scheduling, "<<priority_out[0]<<"\n";
    }
    else{
        cout<<"\nMinimum Average Waiting Time: Round Robin, "<<rr_out[0]<<"\n";
    }

    // Print Which algorithm is best according to the average turnaround time
    if(fcfs_out[1] <= sjf_out[1] && fcfs_out[1] <= priority_out[1] && fcfs_out[1] <= rr_out[1]){
        cout<<"\nMinimum Average Turnaround Time: First Come First Serve, "<<fcfs_out[0]<<"\n";
    }
    else if(sjf_out[1] <= fcfs_out[1] && sjf_out[1] <= priority_out[1] && sjf_out[1] <= rr_out[1]){
        cout<<"\nMinimum Average Turnaround Time: Shortest Job First, "<<sjf_out[1]<<"\n";
    }
    else if(priority_out[1] <= fcfs_out[1] && priority_out[1] <= sjf_out[1] && priority_out[1] <= rr_out[1]){
        cout<<"\nMinimum Average Turnaround Time: Priority Scheduling, "<<priority_out[1]<<"\n";
    }
    else{
        cout<<"\nMinimum Average Turnaround Time: Round Robin, "<<rr_out[1]<<"\n";
    }

    // Print Which algorithm is best according to the average response time
    if(fcfs_out[2] <= sjf_out[2] && fcfs_out[2] <= priority_out[2] && fcfs_out[2] <= rr_out[2]){
        cout<<"\nMinimum Average Response Time: First Come First Serve, "<<fcfs_out[2]<<"\n\n";
    }
    else if(sjf_out[2] <= fcfs_out[2] && sjf_out[2] <= priority_out[2] && sjf_out[2] <= rr_out[2]){
        cout<<"\nMinimum Average Response Time: Shortest Job First, "<<sjf_out[2]<<"\n\n";
    }
    else if(priority_out[2] <= fcfs_out[2] && priority_out[2] <= sjf_out[2] && priority_out[2] <= rr_out[2]){
        cout<<"\nMinimum Average Response Time: Priority Scheduling, "<<priority_out[2]<<"\n\n";
    }
    else{
        cout<<"\nMinimum Average Response Time: Round Robin, "<<rr_out[2]<<"\n\n";
    }
    return 0;
}