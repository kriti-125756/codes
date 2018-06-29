#include <iostream>

using namespace std;

int main(){
    char **String = 0;
	int M,N,abs,ord,i,j,AboveRow,BelowRow,x,time = 1;
	cin>>M>>N;
	cin>>abs>>ord;
	char AnyTorF = 0;
	String = new char *[M];
	for (i=0; i < M; i++)
		String[i] = new char [N];

    for(i=0; i < M; i++)
        {
            for(j=0;j<N;j++){
            cin>>String[i][j];
            }
        }

    String[abs][ord] = 1;
    AboveRow = abs - 1;
    BelowRow = ord - 1;

    while(AnyTorF == 0){
    time++;
	for(x=ord-1;x<=ord+1;x++){
    if(AboveRow<=M && x<N && (String[AboveRow][x] == 'T') ){
        String[AboveRow][x] = (char)time;
        }
     if(BelowRow<=M && x<N && String[BelowRow][x] == 'T' ){
        String[BelowRow][x] = (char)time;
        }
	}

    if(String[abs][ord-1] == 'T'){
        String[abs][ord-1] = (char)time;
        }

    if(String[abs][ord+1] == 'T'){
        String[abs][ord+1] = (char)time;
        }

	for(int t1 = 0;t1 <=M; t1++){
        for(int t2 = 0;t2 <=N;t2++){
        if(String[t1][t2] == 'T'){
        AnyTorF = 1;
        break;
        }
        }
            break;

        }

        for(int t1 = 0;t1 <=M; t1++){
        for(int t2 = 0;t2 <=N; t2++){
        cout<<String[t1][t2];
        cout<<" ";

            }
            cout<<"\n";

        }

        }
        cout<<time;
	return 0;
}
