void srt (int arr[],int start,int end){
    int pivot;
    if(end > start){
        pivot = partitionOfArr(arr,start,end);
        srt(arr,start,pivot-1);
        srt(arr,pivot+1,end);
    }
}