#include <iostream>
#include <conio.h>
using namespace::std;





double input(string text){
double n;
cout<<"input nilai "<<text<<" : "; cin>>n;
return n;
}

void grade (double n){
if     (n>81)
    {cout<<" (A)";}
else if(n>61)
    {cout<<" (B)";}
else if(n>41)
    {cout<<" (C)";}
else if(n>21)
    {cout<<" (D)";}
else
    {cout<<"(E)";}
}

struct wow{
double uts, uas, tgs, absensi;};

main(){
float n;

wow ok;

ok.uts = input("UTS");
ok.uas = input("UAS");
ok.tgs = input("TUGAS");
ok.absensi = input("KEHADIRAN");
n=(ok.uts*20/100)+(ok.uas*30/100)+(ok.tgs*35/100)+(ok.absensi*15/100); cout<<"Nilai Akhir : " <<n;
grade(n);
}



