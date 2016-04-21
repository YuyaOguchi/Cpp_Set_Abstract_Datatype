//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 6, Project 2 a
//  2/10/2016
//  set class for abstract datatype assuming it can be comparable datatype

#include <iostream>
#include "set_abstract_datatype.h"
using namespace std;

template<typename T>
set<T>::set() {
    data = new T[CAPACITY];
    for (int i=0; i < CAPACITY; i++){
        data[i] = false;
    }
}

template<typename T>
void set<T>::insert(const T& entry){
    if ((entry <= CAPACITY) && (data[entry] == false)){
        data[entry] = true;
    }else{
        cout << entry << " can not be added to bag " << endl;
    }
}

template<typename T>
void set<T>::takeout(const T& target){
    if ((target <= CAPACITY) && (data[target] == true)){
        data[target] = false;
    }else{
        cout << target << " can not be removed from bag " << endl;
    }
}

template<typename T>
bool set<T>::contains(const T& target){
    return data[target];
}

template<typename T>
void set<T>::dump(){
    for(int i=0; i< CAPACITY; i++){
        if (data[i] == true){
            cout << "item " << i << "exist" << endl;
        }
    }
}

int main()
{
   set<int> s;
   cout << "s" << endl;
   s.dump();
   s.insert(10);
   s.insert(20);
   s.insert(30);
   cout << "s" << endl;
   s.dump();
   return 0;
}
