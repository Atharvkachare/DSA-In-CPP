#include<iostream>
#include<conio.h>
using namespace std;

// Two sum usin Nativ approach
// bool chkPair(int a[], int size, int x)
// {
//     for(int i=0; i<(size - 1); i++)
//     {
//         for(int j=(i+1); j<size; j++)
//         {
//             if(a[i]+a[j] == x)
//             {
//                 return 1;
//             }
//         } 

//     return 0;
//     }
// }
// int main()
// {
//     int a[] = {0,-1,2,-3,1};
//     int x=-2;
//     int size = sizeof(a) / sizeof(a[0]);
//     if(chkPair(a,size,x))
//     {
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<x<<endl;
//     }
//     return 0; 
// }


// Two Sum using Sorting and two pointer technique
/* In two pointer technique the aray must be sorted. Once the array is sorted the two pointers can be taken which mark the begining and end
   of the array respectively */
// bool hasArrayTwoCandidates(int a[], int arr_size, int sum)
// {
//     int l,r;
//     l=0;
//     r = arr_size-1;
//     //sort(a, a+arr_size);
//     while(l<r)
//     {
//         if(a[l]+a[r] == sum)
//         {
//             return 1;
//         }else if(a[l]+a[r]<sum)
//         {
//             l++;
//         }
//         else{
//             r--;
//         }
//         return 0;
//     }
    
// }   

// int main()
// {
//     int a[] = {1,4,45,6,10};
//     int n=5;
//     int arr_size = sizeof(a) / sizeof(a[0]);

//     // Function calling
//     if(hasArrayTwoCandidates(a,arr_size,n))
//     {
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }


