#include<iostream>
using namespace std;
 const int n=3;
const int m=3;
void setrow0(int arr[n][m],int i,int m){
    for(int j=0;j<m;j++){
        arr[i][j]=-1;
    }
}
void setcol0(int arr[n][m],int j,int n){
    for(int i=0;i<n;i++){
        arr[i][j]=-1;
    }
}

int main(){
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
// **********Brute force Approac**********
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(arr[i][j]==0){
//             setrow0(arr,i,m);
//             setcol0(arr,j,n);
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(arr[i][j]==-1){
//             arr[i][j]=0;
//         }
//     }
// }

// ********Better Approach******
// int row[n]={0};
// int col[m]={0};
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(arr[i][j]==0){
//             row[i]=1;
//             col[j]=1;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(row[i]||col[j]){
//             arr[i][j]=0;
//         }
//     }
// }
// ********Optimal Approach*********
bool row=false;
bool col=false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
                if(arr[i][j] == 0) {
                    if(i == 0) row = true;
                    if(j == 0) col = true;
                    arr[0][j] = arr[i][0] = 0;
                }
    }
}
for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        if(arr[i][0]==0 ||arr[0][j]==0){
            arr[i][j]=0;
        }
    }
}
if(col){
    for(int i=0;i<n;i++){
        arr[i][0]=0;
    }
}
if(row){
    for(int j=0;j<m;j++){
        arr[0][j]=0;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}