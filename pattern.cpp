#include<iostream>
using namespace std;

int main(){
    int m ;
    cout<<"eter the rows :";
    cin>>m; 
    // star triagle
    // for(int i = 1;i<=m;i++){ //rows
    //     for(int j = 1;j<=m;j++){ //cols
    //        if(j<=i){
    //         cout<<"*";
    //        }
// }
// cout<<endl;
// }
// }
//alphavat traimgle
    // for(int i = 1;i<=m;i++){ //rows
    //     for(int j = 1;j<=i;j++){ //cols
    //      cout<<(char)(j+96);
    //     }
    //     cout<<endl;
    // }

//   for(int i = 1; i <= m; i++ ){
//      for(int j = 1; j<= i;j++){
//         cout<<(char)(j+64)<<" ";
//      }
//      cout<<endl;
//   }
// for(int i = 1; i<= m; i++){
//     for(int j = 1;j<= m;j++){
//        cout<<"*"<<" ";
//     }
// cout<<endl;
// }
for(int i = 1; i<= m; i++){
    for(int j = 1;j<= i;j++){
      if(i==1){
        if(i==2){
            cout<<(char)(j+64)<<" ";
        }
        cout<<i<<" ";
      }else{
        cout<<(char)(j+64);
      }
    }
cout<<endl;
}
}