// #include <string>
#include "book.h"

Smartphone::Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory, string OS,  int installed_applications, int occupied_RAM, int IMEI)
{
    this->manufactirer = manufactirer;
    this->model = model;
    this->CPU_frequency = CPU_frequency;
    this->cores = cores;
    this->RAM = RAM;
    this->RAM_type = RAM_type;
    this->secondary_memory = secondary_memory;
    this->OS = OS;
    this->installed_applications = installed_applications;
    this->occupied_RAM = occupied_RAM;
}

Smartphone::Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory,  int installed_applications, int occupied_RAM, int IMEI)
{
    this->manufactirer = manufactirer;
    this->model = model;
    this->CPU_frequency = CPU_frequency;
    this->cores = cores;
    this->RAM = RAM;
    this->RAM_type = RAM_type;
    this->secondary_memory = secondary_memory;
    this->OS = "Without OS";
    this->installed_applications = installed_applications;
    this->occupied_RAM = occupied_RAM;
}

Smartphone::Smartphone(string manufactirer, string model, string CPU_frequency, int cores, int RAM,  string RAM_type, int secondary_memory, int IMEI)
{
    this->manufactirer = manufactirer;
    this->model = model;
    this->CPU_frequency = CPU_frequency;
    this->cores = cores;
    this->RAM = RAM;
    this->RAM_type = RAM_type;
    this->secondary_memory = secondary_memory;
    this->OS = "Without OS";
    this->installed_applications = 0;
    this->occupied_RAM = 0;
}

Smartphone::Smartphone()
{
    this->cores = 0;
    this->RAM = 0;
    this->secondary_memory = 0;
    this->installed_applications = 0;
    this->occupied_RAM = 0;

}


    
string Smartphone::Get_manufactirer()
{
    return this->manufactirer;
}

string Smartphone::Get_model()
{
    return this->model;
}

string Smartphone::Get_CPU_frequency()
{
    return this->CPU_frequency;
}

int Smartphone::Get_cores()
{
    return this->cores;
}

int Smartphone::Get_RAM()
{
    return this->RAM;
}

string Smartphone::Get_RAM_type()
{
    return this->RAM_type;
}

int Smartphone::Get_secondary_memory()
{
    return this->secondary_memory;
}

string Smartphone::Get_OS()
{
    return this->OS;
}

int Smartphone::Get_installed_applications()
{
    return this->installed_applications;
}

int Smartphone::Get_occupied_RAM()
{
    return this->occupied_RAM;
}

 int Smartphone::Get_IMEI()
 {
    return this->IMEI;
 }

void Smartphone::Set_OS(string OS)
 {
    this->OS = OS;
 }

  void Smartphone::Set_application(int installed_applications, int occupied_RAM)
  {
    if ((installed_applications == 0 && occupied_RAM == 0) || (installed_applications != 0 && occupied_RAM != 0))
    {
        this->installed_applications = installed_applications;
        this->occupied_RAM = occupied_RAM;
    }
    else
        throw "Error";
  }

  int Smartphone::Average_quantity()
  {
    int res = 0;
    if(installed_applications!=0 && secondary_memory - occupied_RAM > 0)
    {
    int one = this->occupied_RAM / this->installed_applications;
    int free = this->secondary_memory - this->occupied_RAM;
    res = free / one;
    }
    return res;
  }

   int Smartphone::delete_all_app()
   {
    this->occupied_RAM = 0;
    this->installed_applications = 0;
   }