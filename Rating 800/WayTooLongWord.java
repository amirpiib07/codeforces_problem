import java.util.*;
public class Main{
    public static void main(String []args){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        if(n<1 || n>100) return;
        String[] arr=new String[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.next();
            for(int j=0;j<arr[i].length();j++){
                if(arr[i].charAt(j)<97 || arr[i].charAt(j)>122 ) return;
                if(arr[i].length()>100) return;
            }
        }
        
        for(int i=0;i<n;i++){
            String ans="";
            if(arr[i].length()>10){
                ans=ans+arr[i].charAt(0)+(arr[i].length()-2)+arr[i].charAt(arr[i].length()-1);
            }
            else ans=ans+arr[i];
            System.out.println(ans);
        }
        
        
        
    }
}
