Enter file contents here
include<stdio.h> 
 void sort(int *a,int len) 
 { 
     int i,j,t;   
   
    for( i = 0;i<len-1;++i) 
    { 
        for(j = i+1;j<len;++j)//或者 j = 0;j<len-i-1;++j 
        { 
            if(a[j] >a[j+1]) 
            { 
                t  = a[j]; 
                 a[j] = a[j+1]; 
                a[j+1] = t; 
            } 
        } 
     } 
          
 } 
 void main() 
 { 
     int a[6] = {10,2,8,-8,11,0}; 
    int i = 0; 
     sort(a,6); 
      
     for(i = 0; i<6;++i) 
    { 
         printf("%d ",a[i]); 
     } 
     printf("\n"); 
 } 




 
