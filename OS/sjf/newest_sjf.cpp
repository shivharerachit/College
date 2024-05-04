#include<bits/stdc++.h>
using namespace std;

#define sh 100

int partition(int* arr, int start, int end, int* p, int* b) {
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
            swap(p[i], p[j]);
            swap(b[i], b[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    swap(p[i + 1], p[end]);
    swap(b[i + 1], b[end]);
    return (i + 1);
}


void quickSort(int* arr, int start, int end, int* pt, int* b){
    // base case
    if (start >= end)
        return;
    // partitioning the array
    int p = partition(arr, start, end, pt, b);
    // Sorting the left part
    quickSort(arr, start, p - 1, pt, b);
    // Sorting the right part
    quickSort(arr, p + 1, end, pt, b);
}

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
    bool check;//to check wheather the process is added in the tasks
    bool mark;//to check wheather the process is executed or not 
} arr[sh + 1];


int main(){
    int n, time=0, tasks[100];
    // cout<<"AIM : Write a program to implement SJF CPU scheduling algorithm."<<endl;
    // cout<<"Enter the no. of jobs:";
    cin>>n;
    int path[n];

    for(int i = 0 ; i<n ; i++){
        tasks[i]=999;
        path[i]=999;
        arr[i].check=true;
        arr[i].mark=true;
        arr[i].pno=i;
        // cout<<"Enter the process ID:";
        cin>>arr[i].id;
        // cout<<"Enter the arrival time:";
        cin>>arr[i].at;
        // cout<<"Enter the burst time:";
        cin>>arr[i].bt;
    }

    int length_tasks=0;

    for(int i = 0 ; i<n ; i++){
        if(arr[i].at<=time && arr[i].check){
            tasks[arr[i].pno]=arr[i].bt;
            length_tasks++;
            arr[i].check=false;
        }
        int min=999, index=0;
        //Error Part
        for(int j=0 ; j<length_tasks ; j++){
            for(int k=0 ; k<length_tasks ; k++){
                if(tasks[j]<min){
                    min=tasks[j];
                    index=j;
                }
            }
            if(arr[index].mark) break;
        }
        cout<<time<<"\n";
        if(arr[index].mark){
            arr[index].mark = !arr[index].mark;
            time += min;
            arr[index].ct=time;
            cout<<time<<"\n";
            // arr[index].tat=time - arr[index].at;
            // arr[index].wt=arr[index].tat - arr[index].bt;
        }
        //ideal time calculation
    }
    // int tbt=0;
    // for(int i=0;i<n;i++){
    //     tbt+=arr[i].bt;
    // }
    // int ideal=time-tbt;
    cout<<"\nP No.\tP ID\tAT\tBT\tCT\n";
    // \tWT\tTAT\n";
    for(int i=0;i<n;i++){
        cout<<arr[i].pno<<"\t\t"<<arr[i].id<<"\t\t"<<arr[i].at<<"\t"<<arr[i].bt<<"\t"<<arr[i].ct<<"\t"<<"\n";
        //<<arr[i].wt<<"\t"<<arr[i].tat<<"\n";
    }
    return 0;
}