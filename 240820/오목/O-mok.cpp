#include <iostream>
using namespace std;

int main() {
    int a[19][19];
    for(int i=0;i<19;i++){
        for(int j=0;j<19;j++){
            cin >> a[i][j];
        }
    }
    int s=0;
    int b=0,w=0;
    int x,y;
    for(int i=0;i<19;i++){
        for(int j=0;j<15;j++){
            for(int k=0;k<5;k++){
                if (a[i][j+k]==1){
                    b++;
                    if(b==5){
                        s=1;
                        x=i+1;
                        y=j+3;
                    }
                }
                else if (a[i][j+k] == 2){
                    w++;
                    if(w==5){
                        s=2;
                        x=i+1;
                        y=j+3;
                    }
                }
            }
            b=0;
            w=0;
        }
    }
    for(int j=0;j<19;j++){
        for(int i=0;i<15;i++){
            for(int k=0;k<5;k++){
                if (a[i+k][j]==1){
                    b++;
                    if(b==5){
                        s=1;
                        x=i+3;
                        y=j+1;
                    }
                }
                else if (a[i+k][j] == 2){
                    w++;
                    if(w==5){
                        s=2;
                        x=i+3;
                        y=j+1;
                    }
                }
            }
            b=0;
            w=0;
        }
    }
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            for(int k=0;k<5;k++){
                if (a[i+k][j+k]==1){
                    b++;
                    if(b==5){
                        s=1;
                        x=i+3;
                        y=j+3;
                    }
                }
                else if (a[i+k][j+k] == 2){
                    w++;
                    if(w==5){
                        s=2;
                        x=i+3;
                        y=j+3;
                    }
                }
            }
            b=0;
            w=0;
        }
    }
    for(int i=0;i<15;i++){
        for(int j=5;j<19;j++){
            for(int k=0;k<5;k++){
                if (a[i+k][j-k]==1){
                    b++;
                    if(b==5){
                        s=1;
                        x=i+3;
                        y=j-2;
                    }
                }
                else if (a[i+k][j-k] == 2){
                    w++;
                    if(w==5){
                        s=2;
                        x=i+3;
                        y=j-2;
                    }
                }
            }
            b=0;
            w=0;
        }
    }
    
    cout << s <<endl;
    if(s!=0){
    cout << x <<" "<<y;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}