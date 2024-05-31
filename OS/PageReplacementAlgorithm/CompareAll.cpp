#include<iostream>

using namespace std;

#define MAX_PAGES 25 // Define the maximum number of pages
#define MAX_FRAMES 5

// NO. of frames is 5
// No. of pages is 20
// Input Page Refrence String
// Check if the char is present in the frame
// If present, continue
// If not present, check if the frame is full  <PAGE FAULT>
// If not full, add the page to the frame
// If full, use the algorithm to replace the page  <PAGE REPLACEMENT>
// Print the number of page faults and page replacements

// Input:-
// No. of frames
// No. of pages
// Page Reference String
// Output:-
// No. Page Faults
// No. of Page Replacements

int nFrames, nPages, framePointer=0, first[MAX_FRAMES], frequency[MAX_PAGES];
char pageRefString[MAX_PAGES], frame[MAX_FRAMES];
void initialise(){
    for(int i = 0 ; i<nPages ; i++){
        frequency[i]=0;
    }
}

// Page Replacement Algorithms
// 1. FIFO
int fifo(int i){
    int x = first[0];
    int j;
    for(j = 0 ; j<nFrames-1 ; j++){
        first[j] = first[j+1];
    }
    first[j] = x;
    return x;
}
// 2. LRU
int lru(int i){
    int x;
    for(int j=0 ; j<nFrames ; j++){
        if(i>nFrames) x=i-nFrames;
        return x;
    }
    return -1;
}
// 3. LFU
int lfu(int i){
    int x, min = 999, j;
    for(j = 0 ; j<nFrames ; j++) if(min<frequency[(int)frame[j] - 64]){
        min = frequency[(int)frame[j] - 64];
        x = j;
    }
    if(min == 999) x = fifo(i);
    else{
        for(j = x ; j<nFrames-1 ; j++){
            first[j] = first[j+1];
        }
        first[j] = x;
    }
    frequency[pageRefString[i]]++;
    return x;
}
// 4. Optimal
int optimal(int i){
    int j, k, max = 0, ret;
    if(i!=nPages-1){
        for(j = 0 ; j<nFrames ; j++){
            bool found = false;
            for(k = i+1 ; k<nPages ; k++){
                if(frame[j] == pageRefString[k] && max < k-i){
                    max = k-i;
                    found = true;
                    ret = j;
                    break;
                }
            }
            if(!found) return j;
        }
        return ret;
    }
    else{
        return fifo(i);
    }
}


void input(){
    // cout<<"Enter number of Frames (less than 5): ";
    cin>>nFrames;
    // cout<<"Enter number of Pages (less than 20): ";
    cin>>nPages;
    // cout<<"Enter the Page Refrence String: ";
    for(int i=0 ; i<nPages ; i++){
        cin>>pageRefString[i];
    }
    initialise();
}

bool checkPage(char page){
    for(int i=0 ; i < framePointer ; i++){
        if(page == frame[i]) return true;
    }
    return false;
}

int* mainLogic(string algorithm){
    int pageFault = 0, pageReplacement = 0, index;
    for(int i=0 ; i<nPages ; i++){
        if(checkPage(pageRefString[i])){
            frequency[(int)pageRefString[i] - 64]++;
            continue;
        }
        else{
            pageFault++;
            if(framePointer<nFrames){
                first[framePointer] = framePointer;
                frequency[(int)pageRefString[i] - 64]++;
                frame[framePointer]=pageRefString[i];
                framePointer++;
            }
            else{
                pageReplacement++;
                if(algorithm == "FIFO") index = fifo(i);
                else if(algorithm == "LRU") index = lru(i);
                else if(algorithm == "LFU") index = lfu(i);
                else if(algorithm == "OPTIMAL") index = optimal(i);
                else cout<<"Wrong Algorithm.";
                frame[index] = pageRefString[i];
            }
        }
    }
    int* arr = new int[2];
    arr[0]=pageFault;
    arr[1]=pageReplacement;
    return arr;
}

void output(){
    int* arr;
    cout<<"\nFIFO Algorithm:-";
    arr = mainLogic("FIFO");
    cout<<"\nNo. of Page Faults: "<<arr[0]<<"\n";
    cout<<"\nNo. of Page Replacements: "<<arr[1]<<"\n";
    cout<<"\nLRU Algorithm:-";
    arr = mainLogic("LRU");
    cout<<"\nNo. of Page Faults: "<<arr[0]<<"\n";
    cout<<"\nNo. of Page Replacements: "<<arr[1]<<"\n";
    cout<<"\nLFU Algorithm:-";
    arr = mainLogic("LFU");
    cout<<"\nNo. of Page Faults: "<<arr[0]<<"\n";
    cout<<"\nNo. of Page Replacements: "<<arr[1]<<"\n";
    cout<<"\nOPTIMAL Algorithm:-";
    arr = mainLogic("OPTIMAL");
    cout<<"\nNo. of Page Faults: "<<arr[0]<<"\n";
    cout<<"\nNo. of Page Replacements: "<<arr[1]<<"\n";
}

int main(){
    input();
    output();   
}