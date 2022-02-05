public class firstProgram{

    //Empty for now
    public static int numFrequency(int[] arr){
        System.out.println("reee");
        return 1;
    }
    public static void main(String []args){
        int arr[] = {3, 2, 3, 3, 2, 3, 3, 3, 1, 8, 9, 8, 8, 8,8,8,8 };
        int[] countArr = new int [20];
        int maxNumIndex=0;
        for(int i =0; i < arr.length; i++){
            countArr[arr[i]-1]++;
        }
        for(int i =0; i < arr.length; i++){
            if(countArr[i] > maxNumIndex){
                maxNumIndex = i;
            }
        }
        System.out.println("Most Common Element: "+ maxNumIndex);
        System.out.println("With Frequency: " + countArr[maxNumIndex]);
        
    }
}