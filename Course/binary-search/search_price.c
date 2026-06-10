#include<stdio.h>
int BinarySearch(float prices[], int n, float p){
    int left=0,right=n-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(prices[mid]==p){
            return prices[mid];
        }
        else if(prices[mid]>p){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return 0;
}
int main(){
    //Search a price using binary search.
    float prices[] = {
    5.49,
    9.99,
    12.75,
    15.00,
    18.30,
    21.99,
    25.50,
    29.95,
    33.00,
    36.75,
    40.20,
    44.99,
    48.50,
    52.00,
    55.75,
    59.99,
    63.25,
    67.80,
    72.50,
    76.00,
    79.99,
    83.50,
    87.25,
    91.00,
    94.75,
    98.50,
   102.00,
   106.75,
   110.99,
   115.50,
   119.25,
   123.00,
   127.99,
   132.50,
   137.75,
   142.00,
   146.50,
   151.25,
   155.99,
   160.75,
   165.00,
   169.50,
   174.25,
   178.99,
   183.50,
   188.00,
   192.75,
   197.50,
   202.25,
   206.99,
   211.50,
   216.25,
   221.00,
   225.75,
   230.50,
   235.25,
   240.00,
   244.75,
   249.99,
   254.50,
   259.25,
   264.00,
   268.75,
   273.50,
   278.25,
   283.00,
   287.75,
   292.50,
   297.25,
   302.99
   };
   int n=sizeof(prices)/sizeof(prices[0]);
   float p;
   printf("Enter an price: ");
   scanf("%f",&p);
   float result=BinarySearch(prices, n, p);
   if(result){
    printf("Price found.\n");
   }
   else{
    printf("Price not found.\n");
   }
   return 0;
}