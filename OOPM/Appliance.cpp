//Write a program in c++ to demonstrated dynamic polymorphism and dynamic dipatch .
#include<iostream>
using namespace std;

class Appliance{
    public:
   virtual void start(){    // virtual is used to 
        cout<<"Generic Appliance is start.\n";
    }
};
class Toaster:public Appliance{
    void start(){
        cout<<"Toaster coil heating up.\n";
    }
};
class Oven:public Appliance{
    void start(){
        cout<<"Oven Preheating.\n";
    }
};
void runAppliance(Appliance *ptr){
    ptr->start();
}
int main(){
    // Appliance *obj=new Toaster;
    // Appliance *obj2=new Oven;
    // runAppliance(obj);
    // runAppliance(obj2);
    Appliance *obj[2]={new Toaster,new Oven}; //Hetrogenous array.
    for(int i=0;i<2;i++){
        obj[i]->start();
    }
}