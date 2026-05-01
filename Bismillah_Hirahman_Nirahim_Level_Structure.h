#pragma once
#include <iostream>          //if giving linker errors, first define  static vars inshallah
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Window_Res{
    float Win_Width=500;
    float Win_Height=500;
};

class Stored_Level_Configs;

class Level_Config{


    static Stored_Level_Configs stored_Level_configs;

    //Bismillah Hirahman Nirahim, This will just contain an huge array of stored data, 
    //Initially ten Level_Config so a Level_Config[10] array on which

    // (1) Block: No of Blocks & Their location (position and size(size static)) is stored
    // (2) Mobs: Mobs no, type and location are stored
    // (3) Background: Background image & bakground music, strings are stores for loading in the all data holders, Alhamdulilah Rab Al Alameen

    static int Level_count; // auto 0 no need to initialize with the definition thing Alhamdulilah Rab Al Alameen, for knowing what the number of the next level will be, Alhamdulilah Rab Al Alameen
    int Level_id;
    //static int Which_Of_The_Bonus_Levels ; //rechecked logic and found not needed, Alhamdulilah Rab Al Alameen

    //=================from here on requires Stored Level Configs, Alhamdulilah====================
    sf::Texture BackgroundImageTexture;
    sf::Sprite BackgroundImageSprite;//To implement if total no of levels reached than start ending in main inshallah
    sf::Music Level_MusicSB;//sound buffer changed to music Alhamdulilah
    //sf::Sound Level_MusicS;

    

    int No_of_Blocks_in_this_round; // initialized in constructor


    sf::Texture* BlockImageTextures;//this stays in memory because is object's class's memeber not local var ,Alhamdulilah Rab Al Alameen
    sf::Sprite* BlockImageSprites;//hAVE TO DMA AND ALSO DELETE in lvl config not store Alhamdulilah
    string* BlockImage_File_Locations;

    float *x_position_of_blocks_current_level_holder_array;//we just get ptrs for these
    float *y_position_of_blocks_current_level_holder_array;
    float *width_of_blocks_current_level_holder_array;
    float *heights_of_blocks_current_level_holder_array;

    int no_of_mobs_in_this_round;

    string *type_of_mobs_current_level_holder_array;

    float *x_spawn_pt_of_mobs_current_level_holder_array;
    float *y_spawn_pt_of_mobs_current_level_holder_array;

    //Alhamdulilah Rab Al Alameen, A level count gives the wanted level on the basis of iteration (loading level explicitly sends and changes this store count)

    //Alhamdulilah Rab Al Alameen

    //I want to just store 12 of this function itself as memebers if possible.... well that was the orignal idea,,,..having another class that has the same mebers and having no of levels no of objects in that class......, well arrays would allow for easier working Allah SWT knows best Alhamdulilah Rab Al Alameen, ok stored level configs it is..... Stores cofigs of each level in its constructor....Alhamdulilah Rab Al Alameen, this will be a static memeber and each obj should have only one of it if possible Alhamdulilah Rab Al Alameen


    //Aaozbillah minashaetaun nirajeem 
    //Bismillah Hirahman Nirahim
    //New plan-> Level

    //Level_Data_Present* levels_data;//initliaed in constructor of Level_Config, this is, Logic changed Alahamdulilah, now all the static data will be stored inside this class...although we could make a separate class that would make our lives easier by assign=ing using just an overridden eequal sign, Alhamdulilah Rab Al ALameen

    public://New Plan Level_Config instead holds a function that basically runs the level and everything in the bg....or rather, as Level is holding the level config, why dont we make it so Level_Config has
        Level_Config(float Window_view_width,float Window_view_heightw);
        ~Level_Config();//Bismillah Hirahman Niraheem I would <stdexcept> try{code, using throw invalid_argument ,runtime error etc} catch(std::invalid_argument & e) basically catches and destructs all locals in try and runs catch to try prevent program crash, if nothing catches than calls terminate() that crashes program, after catch block, program resumes from after catch block, Alhamdulilah rab al alameen
        void display(sf::RenderWindow& window);
        static int getLevel_Count();
    

};
//It seems that you have press apply button for refactoring...else even if you push changes, the refactoring keeps asking ypu to do its work,, also have to stop wprking if trying to make another file (interupted) But Alhamdulilah Rab Al ALameen, resolved

class Stored_Level_Configs
{//As tecknically only 1 one these should be made, it makes no difference if static or not Alhamdulilah Rab Al Alameen, but it is easier to do things in constructor rather than do it in class utself, so, Alhamdulilah rab al alameen
    //This basically has an array of whatever is in the Level Configs, one for each level, only static-> no of levels stored(tranfered here , Alhamdulilah)

    // This will become the size of Total Levels for which data is present, Alhamdulilah Rab Al Alameen

    //int Stored_Level_Configs::Total_Levels_For_which_Data_is_Present = 10; // This gives how many Level_Config we have data of, this is used to give size of LevelData Array Alhamdulilah Rab Al Alameen
     //This was decessively made non static, as only one object of stored is to be made technically, Alhamdulilah Rab Al Alameen                                                                      // 10+2 bonus Alhamdulilah, oops the bonus levels are selected from all levels except boss so only 10 levels Alhamdulilah Rab AL Alameen

    static int Total_Levels_For_which_Data_is_Present; // This gives how many Level_Config we have data of, this is used to give size of LevelData Array Alhamdulilah Rab Al Alameen
    //float Width_of_a_block=10; //These made viarying for each block and now stored for each block, Alhamdulilah Rab Al Alameen                     // to define soon inshallah
    //float Height_of_a_block=10;//these can be static but it is easier to manage this way as it is only planneed for a single storage level config to be made Alhamdulilah Rab Al Alameen, currently defining both height and width as 10 for testing later inshallah, Alhamdulilah rab al alameen
    //This stored doesnt have is-> the one by one increasing level count and the level id, those are needed to track this level and know next level
    //Both are actually required to ask from storage hence storage doesnt need them, Alhamdulilah

    //its says on google that ypu cant put functions calls in class body...but by using objec..constructor call...Allah SWT knows best Alhamdulilah Rab AL Alameen

    //Instead of sprites it has texture file locations, hence sprites textures can be assigned at run time while asking it for location, Alhamdulilah rab al alameen

    string *BackgroundImageTexture_File_Locations;
    string *Level_MusicSB_File_Locations;//this holds sounder buffers file locations, Alhamdulilah rab al alameen

    int* No_of_Blocks_in_each_round;//array that holds no of blocks for each level



    string** BlockImageTexture_File_Location;  // this stays in memory because is object's class's memeber not local var ,Alhamdulilah Rab Al Alameen
    float **x_positions_of_blocks_each_level_holder_array;//An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
    float **y_positions_of_blocks_each_level_holder_array;
    float **widths_of_blocks_each_level_holder_array;
    float **heights_of_blocks_each_level_holder_array;

    int* no_of_mobs_in_each_round;

    string **types_of_mobs_each_level_holder_array;

    float **x_of_spawn_pts_of_mobs_each_level_holder_array;
    float **y_of_spawn_pts_of_mobs_each_level_holder_array;

    //Ok play for separate bonus level system, as a random choosen 2 levels of non boss levels will be bonus load bonus level things...., those levels are not with mobs but have blocks, these bonus level will be selected in stored's constructir usng rand inshallah, Bismillah Hirahman Nirahim

    int No_of_Bonus_levels=2;
    int* Indexes_of_Bonus_Levels;

    string* Bonus_Level_BackgroundImageTexture_File_Locations;
    string *Bonus_Level_MusicSB_File_Locations;

    int *No_of_Blocks_in_each_bonus_round; // array that holds no of blocks for each level

    string **BlockImageTexture_Bonus_Lvl_File_Location;
    float **x_positions_of_blocks_each_bonus_level_holder_array; // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
    float **y_positions_of_blocks_each_bonus_level_holder_array;
    float **width_of_each_blocks_bonus_level_holder_array;
    float **height_of_each_blocks_bonus_level_holder_array;

    //No mobs Alhamdulilah Rab Al Alameen

    // In constructor-> all level's data assigned into this stored confis

    //when each level made they get data from this, hence this is assigned first-> first memeber, Alhamdulilah Rab Al Alameen, first memeber gets assigned value forst no matter of sending order, Alhamdulilah Rab Al Alameen

    int No_of_Boss_Levels=2;
    int* Indexs_of_Boss_Level;
    //as indices start from 0, so -1 Alhamdulilah

    public:
        //-------getters
        //-----------General Functions------------------
        static int getTotal_Levels_For_which_Data_is_Present();     // Alhamdulilah Rab Al Alameen
        string getBackgroundImageTexture_File_Locations(int level); // Dont forget the out of bound checks inshallah, Alhamdulilah Rab Al Alameen
        string getLevel_MusicSB_File_Locations(int level);

        //-----------Blocks Functions------------------
        float getNo_of_Blocks_in_each_round(int level);
        float *getwidths_of_blocks_each_level_holder_array(int level);
        float *getheights_of_blocks_each_level_holder_array(int level);
        float *getx_positions_of_blocks_each_level_holder_array(int level);
        float *gety_positions_of_blocks_each_level_holder_array(int level); // directly give ptr of that array ensure dont delete in single Level for possible reuse Alhamdulilah Rab Al Alameen

        //-----------Mobs Functions------------------
        int getno_of_mobs_in_each_round(int level);
        string *gettypes_of_mobs_each_level_holder_array(int level);
        float *getx_of_spawn_pts_of_mobs_each_level_holder_array(int level);
        float *gety_of_spawn_pts_of_mobs_each_level_holder_array(int level);

        //-------Bonus Levels Functions---------
        int getNo_of_Bonus_levels();
        int getIndexes_of_Bonus_Levels(int level);
        string getBonus_Level_BackgroundImageTexture_File_Locations(int level);
        string getBonus_Level_MusicSB_File_Locations(int level);

        //--Bonus lvl, Blocks
        string *getBlockImageTexture_File_Location(int level);
        string *getBlockImageTexture_Bonus_lvl_File_Location(int level);
        int getNo_of_Blocks_in_each_bonus_round(int level); // array that holds no of blocks for each level
        float *getx_positions_of_blocks_each_bonus_level_holder_array(int level); // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
        float *gety_positions_of_blocks_each_bonus_level_holder_array(int level);
        float *getwidth_of_blocks_each_bonus_level_holder_array(int level); // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
        float *getheight_of_blocks_each_bonus_level_holder_array(int level);

        //-------Boss Levels Functions---------

        int getNo_of_Boss_levels();
        int  getIndexs_of_Boss_Level(int index);

        //-----Constructors, Destructor Alhamdulilah Rab Al Alameen
        Stored_Level_Configs();//Bismillah Hirahman Nirahim made meansures to have window size records without input, also ensuring they are same in main,by defining its structure here Alhamdulilah Rab Al ALameen 
        ~Stored_Level_Configs(); // declared here and also defined in cpp( constructor and destructor) Alhamdulilah
};  