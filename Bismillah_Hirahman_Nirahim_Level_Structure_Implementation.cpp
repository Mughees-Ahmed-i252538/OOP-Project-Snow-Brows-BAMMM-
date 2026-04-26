#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"


int Level_Config::Level_count = 0;


Level_Config::Level_Config()
{
    //levels_data= new Level_Data_Present[Total_Levels_For_which_Data_is_Present];//Lofic Changed, Alhamdulilah Rab Al Alameen, to avoid issues, all that data will be stored statically inside the class itself, Alhamdulilah Rab Al Alameen


}
Level_Config::~Level_Config()
{
    //delete levels_data;//Logic changed Alhamdulilah Rab Al Alameen
}//As you know staging commit, makes the commit to your local repo then syncing will push it to orign main, i.e the remote repo, Alhamdulilah Rab Al Alameen

//============================Stored_Level_Configs=====================================


//Static Varible stays in memory until program terminates

Stored_Level_Configs::Stored_Level_Configs()
{

    BackgroundImageTexture_File_Locations = new string[Total_Levels_For_which_Data_is_Present] ;

    BackgroundImageTexture_File_Locations[0]=
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl1to4_Bg_Img.png";
    BackgroundImageTexture_File_Locations[1]=
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl1to4_Bg_Img.png";
    BackgroundImageTexture_File_Locations[2] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl1to4_Bg_Img.png";
    BackgroundImageTexture_File_Locations[3] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl1to4_Bg_Img.png";
    BackgroundImageTexture_File_Locations[4] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl5(Boss)_Bg_Img.png";
    BackgroundImageTexture_File_Locations[5] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl6to9_Bg_Img.png";
    BackgroundImageTexture_File_Locations[6] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl6to9_Bg_Img.png";
    BackgroundImageTexture_File_Locations[7] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl6to9_Bg_Img.png";
    BackgroundImageTexture_File_Locations[8] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl6to9_Bg_Img.png";
    BackgroundImageTexture_File_Locations[9] =
         "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Lvl10(Boss)_Bg_Img.png";//redundant kept if want to add more or change Alhamdulilah

    //Giving Error assigning together both while creating new string[] and also afterwards trying to do ={ string,string} so Bismillah Hirahman Nirahim, doing one by one

    Level_MusicSB_File_Locations = new string[Total_Levels_For_which_Data_is_Present];

    //"C:\Users\HP\OneDrive\Desktop\Bismillah Hirahman Nirahim, Github OOP Project Repository Clone\OOP-Project-Snow-Brows-BAMMM-\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Sounds\snow_bros_level.ogg"
    Level_MusicSB_File_Locations[0] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_level.ogg";
    Level_MusicSB_File_Locations[1] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_level.ogg";
    Level_MusicSB_File_Locations[2] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_level.ogg";
    Level_MusicSB_File_Locations[3] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_level.ogg";
    Level_MusicSB_File_Locations[4] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_02.ogg";//Not clear labeling given hence used as seen suitable Alhamdulilah
    Level_MusicSB_File_Locations[5] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";
    Level_MusicSB_File_Locations[6] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";//Check for issues in strings as done using the find replace after copying from the above 10, Inshallah none, Alhamdulilah
    Level_MusicSB_File_Locations[7] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";
    Level_MusicSB_File_Locations[8] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";
    Level_MusicSB_File_Locations[9] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\Lvl10(Boss)_Bg_Img.png"; // redundant kept if want to add more or change Alhamdulilah

    No_of_Blocks_in_each_round = new int[Total_Levels_For_which_Data_is_Present];
    //To be assigned later when find no of blocks and postions in each rn gave 1 block to all levels and dummy position for testing, Alhamdulilah rab al alameen

    No_of_Blocks_in_each_round[0]=1;
    No_of_Blocks_in_each_round[1] = 1;
    No_of_Blocks_in_each_round[2] = 1;
    No_of_Blocks_in_each_round[3] = 1;
    No_of_Blocks_in_each_round[4]=1;
    No_of_Blocks_in_each_round[5] = 1;
    No_of_Blocks_in_each_round[6] = 1;
    No_of_Blocks_in_each_round[7] = 1;
    No_of_Blocks_in_each_round[8] = 1;
    No_of_Blocks_in_each_round[9] = 1;

    x_positions_of_blocks_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present]; // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
    //Now to loop and give needed width to each array (may be different for all, determined by no of blocks at respective index, Alhamdulilah)
    y_positions_of_blocks_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present];




    //Making Array in loop, assigning manually inshallah

    //To add more levels we have to add everything for new level but that was orignally happens so...>Alhamdulilah

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present;i++)
    {
        x_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];
        y_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];//at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
    }//Perhaps we could make a structure , or no actually a Vector2f with refrence to these as well for easier sending? Well May Allah SWT help us ameen
    //sfml vector2f cant have refrences as parameters...so we can think of another way,but for now leave it, Alhamdulilah Rab Al Alameen




    //As each block has different locations we must give it manually for each block
    //May Allah SWT help us, Ameen

    //Currently for testing, each level has one block so, bismillah hirahman nirahim (also ten levels total.... Alhamdulilah rab al alameen)

    x_positions_of_blocks_each_level_holder_array[0][0]=0;
    y_positions_of_blocks_each_level_holder_array[0][0]=0;//making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well

    x_positions_of_blocks_each_level_holder_array[1][1] = 10;//as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][1] = 10;

    x_positions_of_blocks_each_level_holder_array[2][2] = 20;
    y_positions_of_blocks_each_level_holder_array[2][2] = 20;

    x_positions_of_blocks_each_level_holder_array[3][3] = 30;
    y_positions_of_blocks_each_level_holder_array[3][3] = 30;

    x_positions_of_blocks_each_level_holder_array[4][4] = 40;
    y_positions_of_blocks_each_level_holder_array[4][4] = 40;

    x_positions_of_blocks_each_level_holder_array[5][5] = 50;
    y_positions_of_blocks_each_level_holder_array[5][5] = 50;

    x_positions_of_blocks_each_level_holder_array[6][6] = 60;
    y_positions_of_blocks_each_level_holder_array[6][6] = 60;

    x_positions_of_blocks_each_level_holder_array[7][7] = 70;
    y_positions_of_blocks_each_level_holder_array[7][7] = 70;

    x_positions_of_blocks_each_level_holder_array[8][8] = 80;
    y_positions_of_blocks_each_level_holder_array[8][8] = 80;//if the selective range find values is not finding, try turning selective range of, doing some click and writing and then try again after selecting, Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[9][9] = 90;//also when selecting whole (even multi) statements dont press ctrl+F, if needed then copy paste
    y_positions_of_blocks_each_level_holder_array[9][9] = 90;//Alhamdulilah Rab Al Alameen

    //I guess we found out the hard way? pasted the code for initialization inside class....to get red squigly lines...anyways, Alhamdulilah Rab Al Alameen

    no_of_mobs_in_each_round = new int[Total_Levels_For_which_Data_is_Present];
    // To be assigned later when find no of blocks and postions in each rn gave 1 block to all levels and dummy position for testing, Alhamdulilah rab al alameen

    no_of_mobs_in_each_round[0] = 1;
    no_of_mobs_in_each_round[1] = 1;
    no_of_mobs_in_each_round[2] = 1;
    no_of_mobs_in_each_round[3] = 1;
    no_of_mobs_in_each_round[4] = 1;
    no_of_mobs_in_each_round[5] = 1;
    no_of_mobs_in_each_round[6] = 1;
    no_of_mobs_in_each_round[7] = 1;
    no_of_mobs_in_each_round[8] = 1;
    no_of_mobs_in_each_round[9] = 1;

    x_of_spawn_pts_of_mobs_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present]; // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
    // Now to loop and give needed width to each array (may be different for all, determined by no of blocks at respective index, Alhamdulilah)
    y_of_spawn_pts_of_mobs_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present];

    types_of_mobs_each_level_holder_array=new string*[Total_Levels_For_which_Data_is_Present];
    // Making Array in loop, assigning manually inshallah

    // To add more levels we have to add everything for new level but that was orignally happens so...>Alhamdulilah

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {
        x_of_spawn_pts_of_mobs_each_level_holder_array[i] = new float[no_of_mobs_in_each_round[i]];
        y_of_spawn_pts_of_mobs_each_level_holder_array[i] = new float[no_of_mobs_in_each_round[i]]; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        types_of_mobs_each_level_holder_array[i] = new string[no_of_mobs_in_each_round[i]];
    } // Perhaps we could make a structure , or no actually a Vector2f with refrence to these as well for easier sending? Well May Allah SWT help us ameen
    // sfml vector2f cant have refrences as parameters...so we can think of another way,but for now leave it, Alhamdulilah Rab Al Alameen

    // As each block has different locations we must give it manually for each block
    // May Allah SWT help us, Ameen

    // Currently for testing, each level has one block so, bismillah hirahman nirahim (also ten levels total.... Alhamdulilah rab al alameen)

    x_of_spawn_pts_of_mobs_each_level_holder_array[0][0] = 0 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[0][0] = 0 + 10; // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    types_of_mobs_each_level_holder_array[0][0]="Blue_Bottom";//dummy enemies all blue bottoms Alhamdulilah

    x_of_spawn_pts_of_mobs_each_level_holder_array[1][1] = 10 + 10; // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_of_spawn_pts_of_mobs_each_level_holder_array[1][1] = 10 + 10;
    types_of_mobs_each_level_holder_array[1][1] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[2][2] = 20 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[2][2] = 20 + 10;//each mob is 10 pixels abouve a Block Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[2][2] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[3][3] = 30 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[3][3] = 30 + 10;
    types_of_mobs_each_level_holder_array[3][3] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[4][4] = 40 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[4][4] = 40 + 10;
    types_of_mobs_each_level_holder_array[4][4] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[5][5] = 50 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[5][5] = 50 + 10;
    types_of_mobs_each_level_holder_array[5][5] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[6][6] = 60 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[6][6] = 60 + 10;
    types_of_mobs_each_level_holder_array[6][6] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[7][7] = 70 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[7][7] = 70 + 10;
    types_of_mobs_each_level_holder_array[7][7] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[8][8] = 80 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[8][8] = 80 + 10; // if the selective range find values is not finding, try turning selective range of, doing some click and writing and then try again after selecting, Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[8][8] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[9][9] = 90 + 10; // also when selecting whole (even multi) statements dont press ctrl+F, if needed then copy paste
    y_of_spawn_pts_of_mobs_each_level_holder_array[9][9] = 90 + 10; // Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[9][9] = "Blue_Bottom";//Alhamdulilah rab al alameen
}

Stored_Level_Configs::~Stored_Level_Configs()
{
}