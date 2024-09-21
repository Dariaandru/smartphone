#pragma once
#include <string>
using namespace std;

class Smartphone
{
    private:
        string manufactirer;
        string model;
        string CPU_frequency;
        int cores;
        int RAM;
        string RAM_type;
        int secondary_memory;
        string OS;
        int installed_applications;
        int occupied_RAM;
        int IMEI;

    public:
        Smartphone();
        Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory, string OS,  int installed_applications, int occupied_RAM, int IMEI);
        Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory,  int installed_applications, int occupied_RAM, int IMEI);
        Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory, int IMEI);
        string Get_manufactirer();
        string Get_model();
        string Get_CPU_frequency();
        int Get_cores();
        int Get_RAM();
        string Get_RAM_type();
        int Get_secondary_memory();
        string Get_OS();
        int Get_installed_applications();
        int Get_occupied_RAM();
        int Get_IMEI();

        void Set_OS(string OS);
        void Set_application(int installed_applications, int occupied_RAM);
        int Average_quantity();
        int delete_all_app();


};