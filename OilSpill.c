#include<stdio.h>
#include<string.h>
#include<malloc.h>

int FuncToCheckLen(int m,int n,int **th,int AS[2]){

        int flg=1,st_h,q,hght[4],NxtVal[4][2],count=0,ma,i,he,l1,l2,PL[4],Temp[2],remain[2];

        while(flg==1){
            st_h=th[AS[0]][AS[1]];
            q=0;
            if(AS[0]<m && AS[1]+1<n && AS[0]>=0 && AS[1]+1>=0){

                if(th[AS[0]][AS[1]+1]<st_h){
                    hght[q]=th[AS[0]][AS[1]+1];
                    NxtVal[q][0]=AS[0];
                    NxtVal[q][1]=AS[1]+1;
                    q++;
                }

            }

            if(AS[0]<m && AS[1]-1<n && AS[0]>=0 && AS[1]-1>=0){

                if(th[AS[0]][AS[1]-1]<st_h){
                    hght[q]=th[AS[0]][AS[1]-1];
                   
                    NxtVal[q][0]=AS[0];
                    NxtVal[q][1]=AS[1]-1;
                    q++;
                }
            }

            if(AS[0]+1<m && AS[1]<n && AS[0]+1>=0 && AS[1]>=0){

                if(th[AS[0]+1][AS[1]]<st_h){
                    hght[q]=th[AS[0]+1][AS[1]];
                    //printf("%d\n", hght[q]);
                    NxtVal[q][0]=AS[0]+1;
                    NxtVal[q][1]=AS[1];
                    q++;
                }
            }

            if(AS[0]-1<m && AS[1]<n && AS[0]-1>=0 && AS[1]>=0){

                if(th[AS[0]-1][AS[1]]<st_h){
                    hght[q]=th[AS[0]-1][AS[1]];
                    //printf("%d\n", hght[q]);
                    NxtVal[q][0]=AS[0]-1;
                    NxtVal[q][1]=AS[1];
                    q++;
                }
            }

            if(q==0){
                flg=0;
            }
            else{
                ma=hght[0];
                he=0;
                remain[0]=NxtVal[0][0];
                remain[1]=NxtVal[0][1];


                for(i=0;i<q;i++){
                    if(hght[i]>ma){
                        ma=hght[i];
                        he=i;
                        remain[0]=NxtVal[i][0];
                        remain[1]=NxtVal[i][1];
                    }
                    else if(hght[i]==ma){

                        Temp[0]=remain[0];
                        Temp[1]=remain[1];

                        PL[0]=NxtVal[i][0];
                        PL[1]=NxtVal[i][1];

                        l1=FuncToCheckLen(m,n,th,PL);
                        l2=FuncToCheckLen(m,n,th,Temp);
                        if(l1>l2){
                            ma=hght[i];
                            he=i;
                            remain[0]=NxtVal[i][0];
                            remain[1]=NxtVal[i][1];
                        }

                    }

                    
                }

                st_h=ma;
                AS[0]=NxtVal[he][0];
                AS[1]=NxtVal[he][1];
                count++;
                flg=1;
            }

        }

        return count;

}


int main(){
    char *st1=(char *)malloc(51200*sizeof(char));
    char *st2;
    int i,j,k,u=0,a[2],AS[2],flg=1,m,n,test[4][2],remain[2],l1,l2;
    int hght[4],q=0,st_h,ma,he,count=1,PL[4],Temp[2];

    scanf("%s",st1);
    st2=strtok(st1,",");
    while(st2!=NULL){

        sscanf(st2, "%d", &a[u]);
        u++;
        st2 = strtok (NULL, ",");
    }

    m=a[0];
    n=a[1];
    int **th = (int **)malloc(a[0] * sizeof(int *));
    for(i=0;i<a[0];i++){

        th[i] = (int *)malloc(a[1] * sizeof(int));
        scanf("%s",st1);
        st2=strtok(st1,",");

        u=0;
        while(st2!=NULL){
            sscanf(st2, "%d", &th[i][u]);
            u++;
            st2 = strtok (NULL, ",");
        }
    }


    scanf("%s",st1);
    st2=strtok(st1,",");
    u=0;
    while(st2!=NULL){

        sscanf(st2, "%d", &AS[u]);
        
        u++;
        st2 = strtok (NULL, ",");
    }

    AS[0]=AS[0]-1;
    AS[1]=AS[1]-1;


    while(flg==1){
        st_h=th[AS[0]][AS[1]];
        q=0;
        if(AS[0]<m && AS[1]+1<n && AS[0]>=0 && AS[1]+1>=0){

            if(th[AS[0]][AS[1]+1]<st_h){
                hght[q]=th[AS[0]][AS[1]+1];
                test[q][0]=AS[0];
                test[q][1]=AS[1]+1;
                q++;
            }

        }

        if(AS[0]<m && AS[1]-1<n && AS[0]>=0 && AS[1]-1>=0){

            if(th[AS[0]][AS[1]-1]<st_h){
                hght[q]=th[AS[0]][AS[1]-1];
            
                test[q][0]=AS[0];
                test[q][1]=AS[1]-1;
                q++;
            }
        }

        if(AS[0]+1<m && AS[1]<n && AS[0]+1>=0 && AS[1]>=0){

            if(th[AS[0]+1][AS[1]]<st_h){
                hght[q]=th[AS[0]+1][AS[1]];
               
                test[q][0]=AS[0]+1;
                test[q][1]=AS[1];
                q++;
            }
        }

        if(AS[0]-1<m && AS[1]<n && AS[0]-1>=0 && AS[1]>=0){

            if(th[AS[0]-1][AS[1]]<st_h){
                hght[q]=th[AS[0]-1][AS[1]];
             
                test[q][0]=AS[0]-1;
                test[q][1]=AS[1];
                q++;
            }
        }

        if(q==0){
            flg=0;
        }
        else{

            ma=hght[0];
            he=0;
            remain[0]=test[0][0];
            remain[1]=test[0][1];
            
            for(i=0;i<q;i++){
                if(hght[i]>ma){
                    ma=hght[i];
                    he=i;
                    remain[0]=test[i][0];
                    remain[1]=test[i][1];
                }
                else if(hght[i]==ma){

                    Temp[0]=remain[0];
                    Temp[1]=remain[1];

                    PL[0]=test[i][0];
                    PL[1]=test[i][1];

                    l1=FuncToCheckLen(m,n,th,PL);
                    l2=FuncToCheckLen(m,n,th,Temp);
                    
                    if(l1>l2){
                        ma=hght[i];
                        he=i;
                        remain[0]=test[i][0];
                        remain[1]=test[i][1];
                    }
                    

                }

            }

            st_h=ma;
            AS[0]=test[he][0];
            AS[1]=test[he][1];
            count++;
            flg=1;
        }

    }

    printf("%d\n",count );

    return 0;
}
