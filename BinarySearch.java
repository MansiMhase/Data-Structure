public class BinarySearch {
    public static int Binary(int arr[],int key){
        int left=0;
        int right=arr.length-1;

        while(left<=right){
            int mid=(left+right)/2;
             
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]<key){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr={10,2,45,6,3,5};
        int key=19;
        int res=Binary(arr,key);
        if(res==-1){
            System.out.println( key+ " not fount!!!!!");
        }else{
             System.out.println(key+ "Element fount!!!!!");

        }
    }
    
}
