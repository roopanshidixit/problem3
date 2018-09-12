#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 clrscr();
 int ren,inter,calls,sms,call_c,sms_c,inter_c,roam_c;
  int i,n=3;
    char plan_name[100];
    cout<<"welcome";
    cout<<"\t plans:";
    cout<<"enter rental || internet || calls || sms||call charges ||internetcharges||sms charges||roamingcharges";
    for(i=0;i<=n;i++)
    {
    cin>>ren>>inter>>calls>>sms>>call_c>>inter_c>>sms_c>>roam_c;
    }
    for(i=0;i<=n;i++)
    {
    cout>>ren;
    cout>>inter;
    cout>>calls;
    cout>>sms;
    cout>>call_c;
    cout>>inter_c;
    cout>>sms_c;
    cout>>roam_c;
    }
    getch();
    return 0;
 }