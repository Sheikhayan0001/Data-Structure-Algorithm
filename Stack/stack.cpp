typeof struct {
    int * arr,

} Quee;

void init(Quee &q ,int n){
    q.arr = new int[n];
    q.front = -1;
    q.rear = -1;
    size = n;
}
void init(Quee &q ,int val){
    if(q.rear == q.size -1){
        cout<< "Overflow";
        return;
    }
    q.arr[++q.rear] == val;
    if(front == -1){
    
    }
}