int partition(int arr[], int low, int high)
{
    int pivot=arr[high], i, j,t;

    for(i=low-1, j=low; j<high; j++){
        if(arr[j]<pivot){
            i++;
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }
    }

    t=arr[high];
    arr[high] = arr[i+1];
    arr[i+1] = t;

    return i+1;
}

void quicksort(int arr[], int low, int high)
{
    if(low>=high){
        return;
    }

    int p = partition(arr, low, high);
    quicksort(arr, low, p-1);
    quicksort(arr, p+1, high);
}

int main()
{
    int i,arr[] = {1,23,11,11,1,23,3523,1,12,34};
    int length_of_arr = sizeof(arr)/sizeof(int);
    quicksort(arr, 0, length_of_arr-1);
    for(i=0;i<length_of_arr;i++){
        printf("%d \n", arr[i]);
    }
}
