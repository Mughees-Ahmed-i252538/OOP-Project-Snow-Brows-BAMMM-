#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"

int Levels::Total_Levels_For_which_Data_is_Present=0; // This gives how many levels we have data of, this is used to give size of LevelData Array Alhamdulilah Rab Al Alameen
int Level_Data::Level_count=0;

Levels::Levels()
{
    levels_data= new Level_Data[Total_Levels_For_which_Data_is_Present];
}
Levels::~Levels()
{
    delete levels_data;
}//As you know staging commit, makes the commit to your local repo then syncing will push it to orign main, i.e the remote repo, Alhamdulilah Rab Al Alameen