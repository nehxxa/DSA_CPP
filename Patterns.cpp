#include<iostream>
using namespace std;
// ===================================================
// 1234
// 1234
// 1234
// 1234

// int main(){
//     int n=4;
//     for (int i=1; i<=n;i++){

//         for(int j=1;j<=n;j++){

//             cout<<j;
//     }
//         cout<<endl;
//     }
//     return 0;
//     }

// ===================================================
// 123
// 456
// 789

// int main(){

//     int n=3;
//     int temp =1;

//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<temp;
//             temp++;
//         }
//         cout<<endl;
//     }


// }


// ===================================================

// ****
// ****
// ****
// ****

// int main(){


//     int n=4;
//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=n;j++){

//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// ===================================================

// * 
// * *
// * * *
// * * * *

// int main(){

//     int n=4;

//     for (int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// ===================================================


// 1 
// 1 2
// 1 2 3
// 1 2 3 4

// int main(){

//         int n=4;
    
//         for (int i=1;i<=n;i++){
            
//             for(int j=1;j<=i;j++){

//                 cout<<j<<" ";
                
//             }
//             cout<<endl;
//         }
//     }

// ========================================


// 1 
// 2 1
// 3 2 1
// 4 3 2 1


// int main(){

//     int n=4;

//     for (int i=1;i<=n;i++){
//         int temp = i;
//         for(int j=1;j<=i;j++){
//             cout<<temp<<" ";
//             temp--;
            
            
//         }
//         cout<<endl;
//     }
// }

// ===================================================


// 1 
// 2 3
// 4 5 6
// 7 8 9 10

// int main(){

//     int n=4;
//     int temp=1;

//     for (int i=1;i<=n;i++){
        
//         for(int j=1;j<=i;j++){
//             cout<<temp<<" ";
//             temp++;
            
//         }
//         cout<<endl;
//     }
// }

// ===============================================

// int main(){

//     int n=4;

//     for (int i=0;i<n;i++){
        
//         for(int j=0;j<i;j++){
//             cout<<" ";    
//         }
//         for(int j=0;j<=n-i;j++){
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// }

int main(){
    int n=4;

    for(int i=1;i<n;i++){


        for(int j=0;j<n-i;j++){
            cout<<" ";
    }
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=i-1;j>=1;j--){
            cout<<j;

        }

        cout<<endl; 
    }
    
}