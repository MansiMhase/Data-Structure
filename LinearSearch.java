public class LinearSearch {
    public static int LinearSearch(int arr[], int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int[] arr ={10,40,90,6,7};
        int k=7;
        int res= LinearSearch(arr,k);
        if(res==-1){
            System.out.println("ELement Not found!!!!");
        }else{
            System.out.println("ELement found!!!!");
        }
    }
}
