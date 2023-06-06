#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n= (argc-1)/3;
  student *pt_std=new student[n];
int i;
  //./aout monkey 20 3.5 Art 15 2.5
  //*Try to finish  OOPIntro-with-array-and-pointer
  //(Assignment 5--> similar to 4
  for(i=1;i<argc;i+=3)   {
  
(*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    pt_std++;
   }
  pt_std-=n;
  /*put them in 2 different loops*/
  /*for(i=0;i<n;i++){  
    (*(pt_std+i)).print_all();
    //Or can choose other methods such as below
    //(pt_std+i)->print_all();
    //pt_std[i].print_all();
  }*/
  int highest = (*(pt_std)).get_score(),highest_loc;
  for (i = 0; i < n; i++){
    if ((*(pt_std+i)).get_score() >= highest){
      highest = (*(pt_std+i)).get_score();
      highest_loc = i;
    } 
  }

  for (i = 0; i < n; i++){
    if ((*(pt_std+i)).get_score() == highest){
      (*(pt_std + i)).print_all();
    }
  }
    //Or can choose other methods such as below
    //(pt_std+i)->print_all();
    //pt_std[i].print_all(); 
  delete [] pt_std;
  }
  
  


