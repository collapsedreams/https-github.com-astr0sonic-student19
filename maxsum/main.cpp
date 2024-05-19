//
//  main.cpp
//  maxsum
//
//  Created by Артём Синцов on 2/27/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
////    peuueto
//    int n;
//    cin >> n;
//    int a[n];
//    int v[n];
//    for(int i=0;i<n;i++){
//        a[i]=i;
//        v[i]=i;
//    }
//    bool b[n];
//    for(int i=0;i<n;i++){
//        b[i]=true;
//    }
//    b[0]=false;
//    b[1]=false;
//    int kv;
//    for(int i=2;i<pow(n,0.5);i++){
//        if(a[i]!=0){
//            kv = a[i];
//        }
//        else
//            continue;
//        for(int j=i+1;j<n;j++){
//            if(a[j]!=0){
//                if(a[j]%kv==0){
//                    a[j]=0;
//                    b[j]=false;
//                }
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//        if(b[i]==1)
//            cout << v[i] << " ";
//    }
    
    
    ///max
    int n;
    cin >> n;
    double c[n];
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    double varr[8];
    double max=c[0];
    double min=c[0];

    for(int i=1;i<n;i++){
        varr[0]=max+c[i];
        varr[1]=max-c[i];
        varr[2]=max*c[i];
        if(c[i]!=0){
            varr[3]=max/c[i];
            varr[7]=min/c[i];
        }
        else {
            varr[3]=0;
            varr[7]=0;
        }
        varr[4]=min+c[i];
        varr[5]=min-c[i];
        varr[6]=min*c[i];
        varr[7]=min/c[i];
        pair<double*,double*> minmax=minmax_element(begin(varr),end(varr));
        min=*minmax.first;
        max=*minmax.second;
    }

    cout << max << endl;
    
    ///sundaram
//    int n;
//    cin >> n;
//    int a[n];
//    for(int q=0;q<n;q++){
//        a[q]=q;
//    }
//    for(int i=1;i<=(pow(2*n+1,0.5)-1)/2;i++){
//        for(int j=i;j<=(n-i)/(2*i+1);j++){
//            a[i+j+2*i*j]=0;
//        }
//
//    }
//    cout << "2 ";
//    for(int y=0;a[y]*2+1<=n;y++){
//        if (a[y]!=0){
//            cout << a[y]*2+1 << " ";
//        }
//    }
    return 0;
}
