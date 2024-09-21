#include "book.h"
#include <string>
#include <iostream>
using namespace std;

void info(Smartphone &phone)
{
    cout << "-------------------------------" << endl;
    cout << "manufactirer:  " << phone.Get_manufactirer() << endl;
    cout << "model: " << phone.Get_model() << endl;
    cout << "CPU_frequency: " << phone.Get_CPU_frequency() << endl;
    cout << "cores: " << phone.Get_cores() << endl;
    cout << "RAM:   " << phone.Get_RAM() << "GB" << endl;
    cout << "RAM_type:  " << phone.Get_RAM_type() << endl;
    cout << "secondary_memory:  " << phone.Get_secondary_memory()<< "GB" << endl;
    cout << "OS:    " << phone.Get_OS() << endl;
    cout << "installed_applications:    " << phone.Get_installed_applications() << endl;
    cout << "occupied_RAM:  " << phone.Get_occupied_RAM() << "GB" << endl;
    cout << "-------------------------------" << endl;

}



int main()
{
    Smartphone phone1("Xiaomi", "Reami A2", "2,2 GHz", 8, 3, "DDR4", 32,"Android 12", 3, 70, 12345);
    info(phone1);


    Smartphone phone2("Apple", "iPhone 11", "2,8 GHz", 8, 6, "DDR3", 64, 76895);

    phone2.Set_OS("IOS");
    phone2.Set_application(12, 50);
    info(phone2);

    Smartphone phone3("Samsung", "Galaxi A73", "4,8 GHz", 8, 6, "DDR5", 256, 88897);
    phone3.Set_application(25, 100);
    info(phone3);
    cout << "Average quantity of applications will be installed:    " << phone3.Average_quantity() << endl;
    cout << "------------------------------" << endl;


    phone3.delete_all_app();
    info(phone3);


    return 0;
}


