//Name: Aida Jevric
//csci 335 Spring 2021

#ifndef LINEARPRO
#define LINEARPRO

#include <iostream>
using namespace std;

template <typename HashTableLinear>
class LinearProbing{
   public:
      void printingOut() {
         cout << "number_of_elements: "<< noe << endl;
         cout << "size_of_table: " << sot << endl;
         cout << "load_factor: " << loadf << endl;
         cout << "average_collisions: " << ac << endl;
         cout << "total_collisions: " << totalCol << endl;
         cout << endl;
         
      }
   private:
      int noe;
      int sot;
      float loadf;
      float ac;
      int totalCol;
};
#endif