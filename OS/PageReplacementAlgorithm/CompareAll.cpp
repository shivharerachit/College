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

int nFrames, nPages, framePointer=0;
char pageRefString[MAX_PAGES], frame[MAX_FRAMES];

// Page Replacement Algorithms
// 1. FIFO
int fifo(int i){
    
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
// 4. Optimal


void input(){
    // cout<<"Enter number of Frames (less than 5): ";
    cin>>nFrames;
    // cout<<"Enter number of Pages (less than 20): ";
    cin>>nPages;
    // cout<<"Enter the Page Refrence String: ";
    for(int i=0 ; i<nPages ; i++){
        cin>>pageRefString[i];
    }
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
        if(checkPage(pageRefString[i])) continue;
        else{
            pageFault++;
            if(framePointer<nFrames){
                frame[framePointer]=pageRefString[i];
                framePointer++;
            }
            else{
                pageReplacement++;
                if(algorithm == "FIFO") continue;//index = fifo(i);
                else if(algorithm == "LRU") index = lru(i);
                // else if(algorithm == "LFU") lfu();
                // else if(algorithm == "OPTIMAL") optimal();
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
    int* arr = mainLogic("LRU");
    cout<<"\nNo. of Page Faults: "<<arr[0]<<"\n";
    cout<<"\nNo. of Page Replacements: "<<arr[1]<<"\n";
}

int main(){
    input();
    output();   
}