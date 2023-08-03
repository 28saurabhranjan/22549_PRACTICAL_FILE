#include <iostream>
using namespace std;

void merge(int x[], int y[],int z[],int n,  int m, int &k);

int main()
{
    int x[100], y[100], z[100], i, m, n, k;
    cout << "Enter the number of elements in first array \n";
    cin >> n;
    cout<<"Enter first array's elements in descending order \n";
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>x[i];
    }
    cout<<"Enter the number of elements in second array: \n";
    cin>>m;
    cout<<"Enter element in descending order \n";
    for(int i=0; i<m; i++){
        cout<<"enter element "<<i+1<<":";
        cin>>y[i];
    }
    merge(x,y,z,n,m,k);
    cout<<"\n The merged arrya in descending order "<<endl;
    for(int i=0; i<k; i++){
     cout<<z[i]<<" ";
    }
    return 0;
}
void merge(int x[], int y[], int z[], int n, int m, int &k){
   int I=0, J=0, K=0;
   while(I<n && J<m){
    if (x[I]>y[J]){
        z[K++]=x[I++];
    } else if( x[I]<y[J]){
        z[K++]=y[J++];
    } else{
        z[K++]=x[I++];
        J++;
    }
   }
   for(int t=I; t<n; t++){
    z[K++]=x[t];
   }
   for(int t=J; t<m; t++){
    z[K++]=y[t];
   }
}
