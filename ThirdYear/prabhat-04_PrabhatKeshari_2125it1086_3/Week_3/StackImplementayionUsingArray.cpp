class Stack {
    int *arr;
    int peak;
    int capacity;
    int size;
    
public:
    
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        peak = -1;
        size = 0;
            
    }

    void push(int num) {
        if(size==capacity){
            return;
        }
        peak++;
        arr[peak] = num;
        size++;
    }

    int pop() {
        if(peak == -1){
            return -1;
        }
        int num = arr[peak];
        peak--;
        size--;
        return num;
         
    }
    
    int top() {
        if(peak==-1){
            return -1;
        }
        return arr[peak];
    }
    
    int isEmpty() {
        if(size==0){
            return 1;
        }else{
            return 0;
        }
    }
    
    int isFull() {
        if(size==capacity){
            return 1;
        }else{
            return 0;
        }
    }
    
};