#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[10],temp,t;
    cout<<"enter the elemnts";
    for (i=0;i<n;i++){
        t++;
        cin>>a[i];
        t++;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            t++;
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                t+=3;
            }
        }
        t++;
    }
    cout<<"array elements after sorting";
    for(i=0;i<n;i++){
        t++;
        cout<<a[i];
        t++;
    }
    t++;
    cout<<"number of steps"<<t;
    return 0;
    
    
}