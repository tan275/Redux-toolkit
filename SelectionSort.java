
public class SelectionSortExample {  

    public static void selectionSort(int[] arr){  

        for (int i = 0; i < arr.length - 1; i++)  

        {  

            int index = i;  

            for (int j = i + 1; j < arr.length; j++){  

                if (arr[j] < arr[index]){  

                    index = j;//searching for lowest index  

                }  

            }  

            int smallerNumber = arr[index];   

            arr[index] = arr[i];  

            arr[i] = smallerNumber;  

        }  

    }  

       

    public static void main(String a[]){  

        int[] arr1 = {9,14,3,2,43,11,58,22};  

        System.out.println("Before Selection Sort");  

        for(int i:arr1){  

            System.out.print(i+" ");  

        }  

        System.out.println();  

          

        selectionSort(arr1);//sorting array using selection sort  

         

        System.out.println("After Selection Sort");  

        for(int i:arr1){  

            System.out.print(i+" ");  

        }  

    }  

}  

import java.util.Arrays;

public class SelectionSort {

    public static void main(String[] args) {

        int[] arr = { 1, 4, 56, 3, 2, 7, 9 };
        Selection(arr, arr.length - 1, 0, 0);
        System.out.println(Arrays.toString(arr));
    }

    static void Selection(int[] arr, int r, int c, int max) {
        if (r == 0)
            return;

        if (r > c) {
            if (arr[c] > arr[max]) {
                Selection(arr, r, c + 1, c);
            } else
                Selection(arr, r, c + 1, max);
        } else {
            int t = arr[max];
            arr[max] = arr[r - 1];
            arr[r - 1] = t;
            Selection(arr, r - 1, 0, 0);
        }
    }
}

