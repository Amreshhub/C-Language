void main()
{
int c,cpp,java,vb,net,total,agg;
clrscr();
printf("\nEnter markes obtant in C,Cpp,JAVA,VB,NET:");
scanf("\n%d%d%d%d%d",&c,&cpp,&java,&vb,&net);
total=c+cpp+java+vb+net;
agg=total*100/500;
clrscr();
printf("\n\t\t\t********Marks Detial*******");
printf("\n\t\t\tMarkas obtant in c: %d",c);
printf("\n\t\t\tMarkas obtant in c++%d",cpp);
printf("\n\t\t\tMarkas obtant in java%d",java);
printf("\n\t\t\tMarkas obtant in vb: %d",vb);
printf("\n\t\t\tmarkas obtant in net %d",net);
printf("\n\t\t\t=========================");
printf("\n\t\t\tTotal markas:        %d",total);
printf("\n\t\t\tagggrate :           %d%%",agg);
getch();
}
