#include<bits/stdc++.h>
using namespace std;

bool ispresent(int n)
{
    int prev=0;
    while(n!=0)
    {
        int digi=n%10;
        if(digi==2)
        {
            return true;
        }
        if(digi==1 && prev==4)
        {
            return true;
        }
       
        n=n/10;
         prev=digi;
    }
    return false;
}

int main()
{
 int n;
 cin>>n;
 int ans=0;
 for(int i=1;i<=n;i++)
 {
   if(ispresent(i))
   {
    n++;
   }
   ans++;
 }
 cout<<ans<<endl;

    return 0;
}




















// import java.io.*;
// import java.util.*;
// public class CandidateCode {
//    public static void main(String args[] ) throws Exception {

// 	//Write code here
//    Scanner sc=new Scanner(System.in);
//    int N=sc.nextInt();
//    int ans=0;
//    for(int i=1; i<=N;i++){
//       if(isContain(i)){
//  
//          N=N+1;

//       }
//       ans++;
//    }

//    System.out.print(ans);

//    }

//    static boolean isContain(int n){
//       // int temp=n;
//       int predig=0;
//       while(n!=0){
//        int digit=n%10;
//        if(digit==2){
//          // System.out.println("I am inside 2");
//          // System.out.println(temp);


//           return true;

         
//        }

//        if(digit==1 && predig==4){
//        //   System.out.print("I am inside");
//           return true;

//        }

//        n=n/10;

//        predig=digit;

//       }
//       return false;
//    }
// }
