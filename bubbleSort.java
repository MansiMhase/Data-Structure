public class bubbleSort {
    public static void main(String args[]){
        int arr[]={10,40,60,58};
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length;j++){
                if(arr[i]<arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }     
            System.out.println("Sorted array is:");
        for(int num:arr){
            System.out.println(num+ " ");
        }
    }
}
