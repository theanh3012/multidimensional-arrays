#include <iostream>

using namespace std;

int main()
{

   freopen("FARM.inp","r",stdin);
   freopen("FARM.out","w",stdout);

   /*NOTAMS's:
   0 = No water;
   1 = Have Water;
   2 = Being Water
   */
   //Variable
   int M,N;//Farm size(M = x;N = y)
   int ans = 0;//answer
   int L;//count of being water
   int tmp1,tmp2;
   cin>>M>>N;
   int F[M][N];

   cin>>L;
   for(int i = 1;i < N;i++){

        for(int j = 1;j <= M;j++){

           F[j][i] = 0;
        }

   }
   for(int i = 1;i <= L;i++){//user inputs loop


        cin>>tmp1>>tmp2;
        F[tmp1][tmp2] = 2;

   }



   for(int i = 1;i < N;i++){

        for(int j = 1;j < M;j++){

            if(F[j][i] == 2){
                for(int f = 0;f <= 23;f++){
                        int dx[] = {0,1,-1,-2, -2, -2,-2, -1, -1, 0, 0, 1, 1,1, 2, 2, 2,2, -2, -1, 0, 1,-1,0};
                        int dy[] = {1,1,1,-2, 0, 2,1,-2, 2, -2, 2, -2, 2,0, -2, 0, 2,-1, -1, -1,-1,-1,0,-1};

                        int M2 = j + dx[f];
                        int N2 = i + dy[f];

                    if (M2 >= 1 && M2 <= M && N2 >= 1 && N2 <= N){

                            if(F[M2][N2] == 0){

                            F[M2][N2] = 1;



                        }

                  }

            }
            }

        }

   }
   for(int i = 1;i <= N;i++){

        for(int j = 1;j <= M;j++){

          if(F[j][i] == 0){

            ans++;

          }

        }

   }
    cout<<ans;




}
