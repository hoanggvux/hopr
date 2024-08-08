# /**
#  *     author: vuhuyhoang
#  *    created: 08/08/2024 14:50:10 Hanoi, Vietnam
# **/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int x , y;
    cin >> x >> y;
    int tmp = 0;
    for(int i = 0 ; i < x ; i++){
        if(i%2 == 0){
            for( int j = 0 ; j< y ; j++){
                cout<<"#";
            }
        }else{
            ++tmp;
            for(int j = 0 ; j<y ; j++){
                if( tmp % 2 == 1 && j==y-1){
                    cout<<"#";
                }else if( tmp %2 == 0 && j == 0){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}