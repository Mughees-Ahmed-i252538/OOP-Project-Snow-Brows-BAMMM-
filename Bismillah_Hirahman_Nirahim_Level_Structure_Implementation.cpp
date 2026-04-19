#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"

int Levels::Total_Levels_For_which_Data_is_Present; // This gives how many levels we have data of, this is used to give size of LevelData Array Alhamdulilah Rab Al Alameen
int Levels::Level_count;

Levels::Levels()
{
    levels_data= new Level_Data[Total_Levels_For_which_Data_is_Present];
}
Levels::~Levels()
{
    delete levels_data;
}