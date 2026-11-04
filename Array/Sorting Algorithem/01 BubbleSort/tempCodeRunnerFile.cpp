void bubbleSort(int arr[] ,int n){
    for(int i=0; i< n-1 ; i++){ // 4 passes
        bool swapped = false ;
        
        for(int j=0 ;j< n-i-1 ;j++ ){ // 3 passes
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;

                swapped = true; // I need swapping
            }
            
        }
        if(swapped == false){
                break;
        }

    }
}
// Display
void display(int arr[] , int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int n;