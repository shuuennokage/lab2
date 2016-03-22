#include <iostream>
#include "lab2.h"
using namespace std;
int main (){
	int a, b, c;
	keisan BMI;
	fstream fin, fout;
    fin.open("file.in",ios::in);
    fout.open("file.out",ios::out);
    while(fin.getline(a,sizeof(a))!=0){
      fin.getline(a,sizeof(a),' ');
		  fin.getline(b,sizeof(b),'\n');
		  c = BMI.suji(a,b);
		  fout << c << " " << BMI.handan(c);
		}
		fin.close();
		fout.close();
		return 0;
}
