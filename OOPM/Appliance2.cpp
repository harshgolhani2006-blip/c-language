//Write a program in C++ to demonstrate dynamic polymorphism and 
//dynamic dispatch with help of constructor.

#include<iostream>
using namespace std;

class Appliance {
public:
    Appliance() {
        cout << "Appliance is created\n";
    }
    virtual ~Appliance() {             // Virtual is used in base class function.
        cout << "Appliance is destroyed\n";
    }
    virtual void start() {
        cout << "Appliance starting...\n";
    }
};

class Toaster : public Appliance {
public:
    Toaster() {
        cout << "Toaster is created\n";
    }
    ~Toaster() {
        cout << "Toaster is destroyed\n";
    }
    void start() {
        cout << "Toaster coil heating up.\n";
    }
};

class Oven : public Appliance {
public:
    Oven() {
        cout << "Oven is created\n";
    }
    ~Oven() {
        cout << "Oven is destroyed\n";
    }
    void start() {
        cout << "Oven Preheating.\n";
    }
};

void runAppliance(Appliance *ptr) {
    ptr->start();   // dynamic dispatch
}

int main() {

    Appliance *a1 = new Toaster();  // runtime object
    Appliance *a2 = new Oven();     // runtime object

    runAppliance(a1);
    runAppliance(a2);

    delete a1;
    delete a2;

    return 0;
}
