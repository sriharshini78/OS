#include<stdio.h>
void main()
{
int n,i,p[10],bt[10],wt[10],tat[10],ttat,twt;
float awt,atat;
printf(" enter the no.of process :");
scanf("%d",&n);
for(i=0;i<n;i++){
printf(" enter the process ");
scanf("%d",&p[i]);
printf("enter the burst time ");
scanf("%d",&bt[i]);
}
wt[0]=0;
twt=0;
tat[0]=bt[0];
ttat=bt[0];
for(i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat = ttat+bt[i];
}
awt = (float)twt/n;
atat =(float)ttat/n;
printf(" process no , burst time , waittime, turn around time ");
for(i=0;i<n;i++){
printf("\n  %d\t %d\t %d\t %d\t ",p[i],bt[i],wt[i],tat[i]);
}
printf("\n average waiting time =%f",awt);
printf("\n average turn aroun time =%f",atat);
}
