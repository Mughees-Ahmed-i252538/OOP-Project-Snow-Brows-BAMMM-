#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"


int Level_Config::Level_count = 0;


Level_Config::Level_Config()//can you just call destructor using . ? Allah SWT knows best what would happen, let me try it soon inshallah
{
    //levels_data= new Level_Data_Present[Total_Levels_For_which_Data_is_Present];//Lofic Changed, Alhamdulilah Rab Al Alameen, to avoid issues, all that data will be stored statically inside the class itself, Alhamdulilah Rab Al Alameen

    Level_id=Level_count;
    Level_count++;

    /* if(!BackgroundImageTexture.loadFromFile(stored_Level_configs.getTextureFileName(this->Level_id)))
    {

    }
    BackgroundImageSprite;
    Level_MusicSB;
    Level_MusicS; *///Forgot to implement the indexes for bonus count thing....doing that now Alhamdulilah
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

    widths_of_blocks_each_level_holder_array =new float *[Total_Levels_For_which_Data_is_Present];
    heights_of_blocks_each_level_holder_array =new float *[Total_Levels_For_which_Data_is_Present];//Had forgoted to inititalize the float* and directly done the float below, hence corrected Alahmdulilah Rab Al Alameen....It did give squiggly line in vscode....May Allah SWT help me and us all ameen

    // Making Array in loop, assigning manually inshallah

    // To add more levels we have to add everything for new level but that was orignally happens so...>Alhamdulilah

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {
        x_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];
        y_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];//at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        widths_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]]; // Bismillah Hirahman Nirahim, adding widths and height record arrays for each block as well, Alhamdulilah rab al alameen, logic changed from fixed width heiht, to varying Alhamdulilah
        heights_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];
    }//Perhaps we could make a structure , or no actually a Vector2f with refrence to these as well for easier sending? Well May Allah SWT help us ameen
    //sfml vector2f cant have refrences as parameters...so we can think of another way,but for now leave it, Alhamdulilah Rab Al Alameen




    //As each block has different locations we must give it manually for each block
    //May Allah SWT help us, Ameen

    //Currently for testing, each level has one block so, bismillah hirahman nirahim (also ten levels total.... Alhamdulilah rab al alameen)

    x_positions_of_blocks_each_level_holder_array[0][0]=0;
    y_positions_of_blocks_each_level_holder_array[0][0]=0;//making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][0]=10;
    heights_of_blocks_each_level_holder_array[0][0]=10;//Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[1][0] = 10; // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][0] = 10;
    widths_of_blocks_each_level_holder_array[1][0] = 11;
    heights_of_blocks_each_level_holder_array[1][0] = 11;

    x_positions_of_blocks_each_level_holder_array[2][0] = 20;
    y_positions_of_blocks_each_level_holder_array[2][0] = 20;
    widths_of_blocks_each_level_holder_array[2][0] = 12;
    heights_of_blocks_each_level_holder_array[2][0] = 12;

    x_positions_of_blocks_each_level_holder_array[3][0] = 30;
    y_positions_of_blocks_each_level_holder_array[3][0] = 30;
    widths_of_blocks_each_level_holder_array[3][0] = 13;
    heights_of_blocks_each_level_holder_array[3][0] = 13;

    x_positions_of_blocks_each_level_holder_array[4][0] = 40;
    y_positions_of_blocks_each_level_holder_array[4][0] = 40;
    widths_of_blocks_each_level_holder_array[4][0] = 14;
    heights_of_blocks_each_level_holder_array[4][0] = 14;

    x_positions_of_blocks_each_level_holder_array[5][0] = 50;
    y_positions_of_blocks_each_level_holder_array[5][0] = 50;
    widths_of_blocks_each_level_holder_array[5][0] = 15;
    heights_of_blocks_each_level_holder_array[5][0] = 15;

    x_positions_of_blocks_each_level_holder_array[6][0] = 60;
    y_positions_of_blocks_each_level_holder_array[6][0] = 60;
    widths_of_blocks_each_level_holder_array[6][0] = 16;
    heights_of_blocks_each_level_holder_array[6][0] = 16;

    x_positions_of_blocks_each_level_holder_array[7][0] = 70;
    y_positions_of_blocks_each_level_holder_array[7][0] = 70;
    widths_of_blocks_each_level_holder_array[7][0] = 17;
    heights_of_blocks_each_level_holder_array[7][0] = 17;

    x_positions_of_blocks_each_level_holder_array[8][0] = 80;
    y_positions_of_blocks_each_level_holder_array[8][0] = 80; // if the selective range find values is not finding, try turning selective range of, doing some click and writing and then try again after selecting, Alhamdulilah Rab Al Alameen
    widths_of_blocks_each_level_holder_array[8][0] = 18;
    heights_of_blocks_each_level_holder_array[8][0] = 18;

    x_positions_of_blocks_each_level_holder_array[9][0] = 90; // also when selecting whole (even multi) statements dont press ctrl+F, if needed then copy paste
    y_positions_of_blocks_each_level_holder_array[9][0] = 90; // Alhamdulilah Rab Al Alameen
    widths_of_blocks_each_level_holder_array[9][0] = 19;
    heights_of_blocks_each_level_holder_array[9][0] = 19;

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

    x_of_spawn_pts_of_mobs_each_level_holder_array[1][0] = 10 + 10; // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_of_spawn_pts_of_mobs_each_level_holder_array[1][0] = 10 + 10;
    types_of_mobs_each_level_holder_array[1][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[2][0] = 20 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[2][0] = 20 + 10; // each mob is 10 pixels abouve a Block Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[2][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[3][0] = 30 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[3][0] = 30 + 10;
    types_of_mobs_each_level_holder_array[3][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[4][0] = 40 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[4][0] = 40 + 10;
    types_of_mobs_each_level_holder_array[4][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[5][0] = 50 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[5][0] = 50 + 10;
    types_of_mobs_each_level_holder_array[5][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[6][0] = 60 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[6][0] = 60 + 10;
    types_of_mobs_each_level_holder_array[6][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[7][0] = 70 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[7][0] = 70 + 10;
    types_of_mobs_each_level_holder_array[7][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[8][0] = 80 + 10;
    y_of_spawn_pts_of_mobs_each_level_holder_array[8][0] = 80 + 10; // if the selective range find values is not finding, try turning selective range of, doing some click and writing and then try again after selecting, Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[8][0] = "Blue_Bottom";

    x_of_spawn_pts_of_mobs_each_level_holder_array[9][0] = 90 + 10; // also when selecting whole (even multi) statements dont press ctrl+F, if needed then copy paste
    y_of_spawn_pts_of_mobs_each_level_holder_array[9][0] = 90 + 10; // Alhamdulilah Rab Al Alameen
    types_of_mobs_each_level_holder_array[9][0] = "Blue_Bottom";//Alhamdulilah rab al alameen

    //========================For Boss Levels==============================================================

    Indexs_of_Boss_Level=new int[No_of_Boss_Levels];
    Indexs_of_Boss_Level[0]=5-1;
    Indexs_of_Boss_Level[1]=10-1;//as start from 0 so -1 Alhamdulilah

    //To add any more working on bosses if any here, inshallah Alhamdulilah Rab Al Alameen

    //========================For Bonus Levels==============================================================


    Indexes_of_Bonus_Levels=new int[No_of_Bonus_levels];

    //assigning indices, which levels out of non boss levels will be bonus,...Note indices take first level as 0

    srand(time(0));

    for(int i=0;i<No_of_Bonus_levels;i++)
    {

        if(No_of_Bonus_levels>(Total_Levels_For_which_Data_is_Present-No_of_Boss_Levels))
        {
            cout<<"Bonus Levels no. not possible, enough feasible levels dont exsist"<<endl;//Alhamdulilah
            break;
        }//As boss levels fixed, it is fine to keep their file name in origna l string array, but for other things, like enetity mobs etc, we might have too see inshallah, Alhamdulilah Rab Al Alameen


        Indexes_of_Bonus_Levels[i]=rand()%(Total_Levels_For_which_Data_is_Present);//0 to 9 if total 10

         //New plan-> to make different everything including arrays etc for Boss levels too, and if index detected equal to these then load from those not the orignal array-> as orignal arrays etc cant directly account for something extra, Allah SWT knows best, Alhamdulilah
         //eg we can easily list boss as enemy entity, but better keep those round special like bonus rounds, ok to implement after bonus inshallah

    
        bool already_undid_next_index_increment=false;

        for(int j=0;j<No_of_Boss_Levels;j++)
        {
            if (Indexes_of_Bonus_Levels[i] == Indexs_of_Boss_Level[j])
            {
            i--;//redo
            break;
            already_undid_next_index_increment=true;
            }
        }

        if (!already_undid_next_index_increment)//if already undid then shouldnt undo again, Alhamdulilah Rab Al Alameen
        {
            for(int j=i-1;j>=0;j++)//if i already 0 then loop just doesnt even start Alhamdulilah
            {
                if (Indexes_of_Bonus_Levels[j] == Indexes_of_Bonus_Levels[i])
                {
                    i--;
                    break;//redo Alhamdulilah
                }
            }
        }
        
    }//this basicalled goes on forever if not feasible so,






    Bonus_Level_BackgroundImageTexture_File_Locations=new string[No_of_Bonus_levels];
    Bonus_Level_BackgroundImageTexture_File_Locations[0] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LvlBonus.png";
    Bonus_Level_BackgroundImageTexture_File_Locations[1] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LvlBonus.png"; // LvlBonus

    string *Bonus_Level_MusicSB_File_Locations = new string[No_of_Bonus_levels];
    Bonus_Level_MusicSB_File_Locations[0] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";

    Bonus_Level_MusicSB_File_Locations[1] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";//May add new track if needed inshallah, Alhamdulilah

    No_of_Blocks_in_each_bonus_round=new int[No_of_Bonus_levels];

    x_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels];
    y_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels]; // at respectve level array see no of blocks at that level Alhamdullah Rab Al Alameen
    width_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels];
    height_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels];//had forgotten to initlialize the ptr arrays in first place and had directly initialized the 1d arrays using those ptrs, fixed that Alhamdulilah rab al alameen (should have given run time  or compile time, as couldnt find or more likkely saying that ptr is null ptr... or actually they didnt even exsist in dma yet so i guess huge issue thrown? ...possible crash....derefrencing uniitialized location,,,...)

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {//have to check if i dmaeed the array of float ptrs up....
        x_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];
        y_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]]; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        width_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];
        height_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];//could make a class of these each to stop the manual writing load........ but well, already done almost now Alhamdulilah
    }

    x_positions_of_blocks_each_bonus_level_holder_array[0][0] = 0;
    y_positions_of_blocks_each_bonus_level_holder_array[0][0] = 0; // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    width_positions_of_blocks_each_bonus_level_holder_array[0][0]= 10;
    height_positions_of_blocks_each_bonus_level_holder_array[0][0] = 10;

    x_positions_of_blocks_each_bonus_level_holder_array[1][0] = 10; // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_bonus_level_holder_array[1][0] = 10;
    width_positions_of_blocks_each_bonus_level_holder_array[1][0] = 10;
    height_positions_of_blocks_each_bonus_level_holder_array[1][0] = 10;

} // Bismillah Hirahman Nirahim, I realize that gravity can only be implementaed after collusion detector..Alhamdulilah Rab Al Alameen

Stored_Level_Configs::~Stored_Level_Configs()
{//We could also do deleted on each specific array that is passed ptr to in level itself, but perhaps loading or perhaps other checks may not be possible hence everything declared in this class is destroyed here, Alhamdulilah Rab Al Alameen
    delete[] BackgroundImageTexture_File_Locations;
    delete[] Level_MusicSB_File_Locations;

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {//for each level there are a b c d etc block varyinh Alhamdulilah, each level will have a no of blocks holder and a 2d array each 1d array hosting positions of Npofblocks of that array no. of floats for x and y, this first deletes that array having these positions, then the array holding ptrs to these arrays is erased, note this could also be done in each level but thinking of later we consider that we might want to reuse that level and have to make another storee hence delted in storage Alhamdulilah rab al alameen
        delete[] x_positions_of_blocks_each_level_holder_array[i];
        delete[] y_positions_of_blocks_each_level_holder_array[i] ; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        delete[] widths_of_blocks_each_level_holder_array[i];
        delete[] heights_of_blocks_each_level_holder_array[i];//note here their size doesnt matter, but how many there are, there are total level amount of them, but size = variable, due to no of blocks in that level but delete[] takes care of that alhamdulilah
        //remember no index in delete []//// also try to find sleep time soon inshallah Jazakallah khairan
    }

    delete[] x_positions_of_blocks_each_level_holder_array;
    delete[] y_positions_of_blocks_each_level_holder_array;
    delete[] widths_of_blocks_each_level_holder_array;
    delete[] heights_of_blocks_each_level_holder_array;

    delete[] No_of_Blocks_in_each_round;//You can delte it before the bigger array of positions or actually ven before its inner array although these numbers was required to initialize their size, Alhamdulilah Rab AL Alameen but just for the sake of dependancy order that only exsists while constructing we do it this way Alhamdulilah
    

    //deleteing no of mobs in a level first it first to show independancy of next deletion alhamdulilah rab al alameen
    delete[] no_of_mobs_in_each_round;//Bismillah hirahman Nirahim on with the destructor Alhamdulilah

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {//for each level there are a b c d etc block varyinh Alhamdulilah, each level will have a no of blocks holder and a 2d array each 1d array hosting positions of Npofblocks of that array no. of floats for x and y, this first deletes that array having these positions, then the array holding ptrs to these arrays is erased, note this could also be done in each level but thinking of later we consider that we might want to reuse that level and have to make another storee hence delted in storage Alhamdulilah rab al alameen
        delete[] y_of_spawn_pts_of_mobs_each_level_holder_array[i];
        delete[] x_of_spawn_pts_of_mobs_each_level_holder_array[i] ; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        delete[] types_of_mobs_each_level_holder_array[i];
        //remember no index in delete []//// also try to find sleep time soon inshallah Jazakallah khairan
    }
    delete[] y_of_spawn_pts_of_mobs_each_level_holder_array;
    delete[] x_of_spawn_pts_of_mobs_each_level_holder_array; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
    delete[] types_of_mobs_each_level_holder_array;

    //============For Boss Levels Bismillah Hirahman Nirahim========================

    delete[] Indexs_of_Boss_Level;

    //============For Bonus Levels Bismillah Hirahman Nirahim========================

    delete[] Indexes_of_Bonus_Levels;
    delete[] Bonus_Level_BackgroundImageTexture_File_Locations;
    delete[] Bonus_Level_MusicSB_File_Locations;

    //again as size not needed for delete[] this below is able to be deleted first, Alhamdulilah rab al alameen, what this is doing is providing sizes of 1d arrays inside the 2d array(1d array of ptrs, Alhamdulilah, but delete[] makes do without, it ALhamdulilah)

    delete[] No_of_Blocks_in_each_bonus_round;

    //Note Bonus level everything separae cuz it is arbitary two levels, boss levels just need record of index for bonus levels, else they can coexsist in same arrays, Alhamdulilah rab al alameen soon inshallah, ok I checked and, (*P)[10] forces * to bind to P first, as [] have higher precedence, this makes an ptr to an array of 10, normally it would make [10] first and then decide that each of them is a ptr ti int (ie if datatype) Alhamdulilah Rab Al Alameen , advantage of (*P) is that it jusps by datatype*no of cells amount on adding 1, Alhamdulilah, oh Allah SWT please strengthen my basicas Ameen inshallah
    
    for(int i=0;i<No_of_Bonus_levels;i++)
    {//To check and compare access of (P*)[10] & P*[10]// ptr to 10 array vs array of ptrs Alhamdulilah Rab Al alameen
        //Bismillah Hirahman Nirahim, ensure use of [i] while delteing the 1d part in loop, else if the array of ptrs to it gone....memory leak...second try to delte it...error, Allah SWT knows best Alhamdulilah Rab Al Alameen
        delete[] x_positions_of_blocks_each_bonus_level_holder_array[i];

        delete[] y_positions_of_blocks_each_bonus_level_holder_array[i];

        delete[] width_positions_of_blocks_each_bonus_level_holder_array[i];

        delete[] height_positions_of_blocks_each_bonus_level_holder_array[i];
    }

    // Allah SWT knows best Alhamdulilah Rab Al Alameen
    delete[] x_positions_of_blocks_each_bonus_level_holder_array;

    delete[] y_positions_of_blocks_each_bonus_level_holder_array;

    delete[] width_positions_of_blocks_each_bonus_level_holder_array;

    delete[] height_positions_of_blocks_each_bonus_level_holder_array;
}

//-----------Getters of Stored_Level_Configs::

int Stored_Level_Configs::getTotal_Levels_For_which_Data_is_Present() // Alhamdulilah Rab Al Alameen
{
    return Total_Levels_For_which_Data_is_Present;
}

string Stored_Level_Configs::getBackgroundImageTexture_File_Locations(int level) // Dont forget the out of bound checks inshallah, Alhamdulilah Rab Al Alameen
{
    if(level>=0&&level<=Total_Levels_For_which_Data_is_Present)
    {
        return BackgroundImageTexture_File_Locations[level];
    }
    return " ";//else return a space string to avoid crashs....that sometimes occur with ""...
}
string Stored_Level_Configs::getLevel_MusicSB_File_Locations(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return Level_MusicSB_File_Locations[level];
    }
    return " "; // else return a space string to avoid crashs....that sometimes occur with ""..
}
float Stored_Level_Configs::getNo_of_Blocks_in_each_round(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return No_of_Blocks_in_each_round[level];
    }
    return 0;
}
float *Stored_Level_Configs::getx_positions_of_blocks_each_level_holder_array(int level)
{

    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return x_positions_of_blocks_each_level_holder_array[level];
    }
    return nullptr;
}

float *Stored_Level_Configs::getwidths_of_blocks_each_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return widths_of_blocks_each_level_holder_array[level];
    }
    return nullptr;
}
float *Stored_Level_Configs::getheights_of_blocks_each_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return heights_of_blocks_each_level_holder_array[level];
    }
    return nullptr;
}

float *Stored_Level_Configs::gety_positions_of_blocks_each_level_holder_array(int level) // directly give ptr of that array ensure dont delete in single Level for possible reuse Alhamdulilah Rab Al Alameen
{

    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return y_positions_of_blocks_each_level_holder_array[level];
    }
    return nullptr;
}

int Stored_Level_Configs::getno_of_mobs_in_each_round(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return no_of_mobs_in_each_round[level];//note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return 0;
}
string *Stored_Level_Configs::gettypes_of_mobs_each_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return types_of_mobs_each_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}
float *Stored_Level_Configs::getx_of_spawn_pts_of_mobs_each_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return x_of_spawn_pts_of_mobs_each_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}
float *Stored_Level_Configs::gety_of_spawn_pts_of_mobs_each_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return y_of_spawn_pts_of_mobs_each_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}
int Stored_Level_Configs::getNo_of_Bonus_levels()
{
    return No_of_Bonus_levels;
}
int Stored_Level_Configs::getIndexes_of_Bonus_Levels(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return Indexes_of_Bonus_Levels[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return 0;//Now plan-> have to sort the indices array of indices soon inshallah, or maybe we wont have to-> we will see working inshallah soon
}
string Stored_Level_Configs::getBonus_Level_BackgroundImageTexture_File_Locations(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return Bonus_Level_BackgroundImageTexture_File_Locations[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return " ";
}
string Stored_Level_Configs::getBonus_Level_MusicSB_File_Locations(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return Bonus_Level_MusicSB_File_Locations[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return " ";
}
int Stored_Level_Configs::getNo_of_Blocks_in_each_bonus_round(int level)// array that holds no of blocks for each level
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return No_of_Blocks_in_each_bonus_round[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return 0;
}

float *Stored_Level_Configs::getx_positions_of_blocks_each_bonus_level_holder_array(int level) // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return x_positions_of_blocks_each_bonus_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}
float *Stored_Level_Configs::gety_positions_of_blocks_each_bonus_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return y_positions_of_blocks_each_bonus_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}