import java.util.*;

import javax.swing.event.DocumentEvent.ElementChange;
public class Merge {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter size of array:");
        int n=sc.nextInt();
        int []a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=n-i;
        }
        long s =System.nanoTime();
        Merge ob = new Merge();
        ob.merge_sort(a,0,a.length - 1);
        int count= n-1;
        long e=System.nanoTime();
        System.out.println("total time is: "+(e-s));
        System.out.println("number of merge call is:"+count);
        System.out.println("sorted  array is:");
        for(int i=0;i<n;i++){
         System.out.println(""+a[i]);
        }
      }
       void merge_sort(int a[],int p,int r){
        if(p < r){
           int q = p + (r-p)/2;
           merge_sort(a, p, q);
           merge_sort(a, q+1, r);
           merge(a,p,q,r);
        }
       }
       void merge(int a[],int p,int q,int r){
         int n1=q-p+1;
         int n2=r-q;
         int []l1 = new int[n1];
         int []r1 = new int[n2];
         for(int i=0;i<n1;i++){
            l1[i]=a[p+i];
         }
         for(int j=0;j<n2;j++){
            r1[j]=a[q+1+j];
         }
         int i=0;
         int j=0;
         int k=p;
         while(i<n1 && j<n2){
            if(l1[i]<=r1[j]){
               a[k]=l1[i];
                i++;
            }
            else{
                a[k]=r1[j];
                j++;
            }
            k++;
         }
         while (i < n1) {
            a[k] = l1[i];
            i++;
            k++;
        }
        while (j < n2) {
            a[k] = r1[j];
            j++;
            k++;
        } 
    }
}
