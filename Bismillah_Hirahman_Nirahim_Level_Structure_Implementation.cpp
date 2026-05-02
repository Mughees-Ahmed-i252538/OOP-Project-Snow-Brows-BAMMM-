#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"

Stored_Level_Configs Level_Config::stored_Level_configs;//as static so need to define must define in a cpp, ,also as we cant do =0 as object... so we leave as is and it calls default constructor, Alhamdulilah Rab Al Alameen., Alhamdulilah Rab Al Alameen
int Level_Config::Level_count = 0;
//int Level_Config::Which_Of_The_Bonus_Levels=0;//made this static Alhamdulilah to track the bonus levels actually, Alhamdulilah rab al alameen, Bismillah hirahman nirahim, now found that it wasnt needed, Alhamdulilah Rab Al Alameen

void ForRelativeSizeAndPostionShape_Level_Copy(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
{
    // you see we need to manage orignal size of picture and have to do individual calculations for each sprite, to adjust width, and all relative to something...which is a bit too much sometimes

    // Instead we can compare wanted to real size, using getLocalbounds() a function slightly differnt from global bounds( ) in the fact that it gives orignal (without calcualtion,position etc stats...)

    sf::FloatRect RealBounds = shape.getLocalBounds(); // Hold orignal bounds , at the end size of sprite image without roaation ppostion change etc

    float Realwidth = RealBounds.width;   // self:: width is most likely a member of container rectangle
    float Realheight = RealBounds.height; // I should change it to realheight isntead of current

    shape.setOrigin(Realwidth / 2, Realheight / 2); // This helps locate orign of objects as orign is basically at (total width/2,total width/2) eact cente ofrectangle

    shape.setScale(NeededWidth / Realwidth, NeededHeight / Realheight); // FOr example take wanted size = real size, it remains 1, so scale doesnt change, however if wanted size<real size, then scale is less than 1 greater than 0 (inshallah if input correct in code ) May Allah help me ameen

    shape.setPosition(Wantedposition); // now that we have orign at centre and size resolved it got easier to set the position, ALhamdulilahi Rab al alameen
}

void ForRelativeSizeAndPostionShape_Level_Copy(float NeededWidth, float NeededHeight, sf::RectangleShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
{
    // you see we need to manage orignal size of picture and have to do individual calculations for each sprite, to adjust width, and all relative to something...which is a bit too much sometimes

    // Instead we can compare wanted to real size, using getLocalbounds() a function slightly differnt from global bounds( ) in the fact that it gives orignal (without calcualtion,position etc stats...)

    sf::FloatRect RealBounds = shape.getLocalBounds(); // Hold orignal bounds , at the end size of sprite image without roaation ppostion change etc

    float Realwidth = RealBounds.width;   // self:: width is most likely a member of container rectangle
    float Realheight = RealBounds.height; // I should change it to realheight isntead of current

    shape.setOrigin(Realwidth / 2, Realheight / 2); // This helps locate orign of objects as orign is basically at (total width/2,total width/2) eact cente ofrectangle

    shape.setScale(NeededWidth / Realwidth, NeededHeight / Realheight); // FOr example take wanted size = real size, it remains 1, so scale doesnt change, however if wanted size<real size, then scale is less than 1 greater than 0 (inshallah if input correct in code ) May Allah help me ameen

    shape.setPosition(Wantedposition); // now that we have orign at centre and size resolved it got easier to set the position, ALhamdulilahi Rab al alameen
}

// Overloading for text
void ForRelativeSizeAndPostionText_Level_Copy(float NeededWidth, float NeededHeight, sf::Text &text, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
{
    // you see we need to manage orignal size of picture and have to do individual calculations for each sprite, to adjust width, and all relative to something...which is a bit too much sometimes

    // Instead we can compare wanted to real size, using getLocalbounds() a function slightly differnt from global bounds( ) in the fact that it gives orignal (without calcualtion,position etc stats...)

    sf::FloatRect RealBounds = text.getLocalBounds(); // Hold orignal bounds , at the end size of sprite image without roaation ppostion change etc

    float Realwidth = RealBounds.width;   // self:: width is most likely a member of container rectangle
    float Realheight = RealBounds.height; // I should change it to realheight isntead of current

    text.setOrigin(Realwidth / 2, Realheight / 2); // This helps locate orign of objects as orign is basically at (total width/2,total width/2) eact cente ofrectangle

    text.setScale(NeededWidth / Realwidth, NeededHeight / Realheight); // FOr example take wanted size = real size, it remains 1, so scale doesnt change, however if wanted size<real size, then scale is less than 1 greater than 0 (inshallah if input correct in code ) May Allah help me ameen

    text.setPosition(Wantedposition); // now that we have orign at centre and size resolved it got easier to set the position, ALhamdulilahi Rab al alameen
}

void ForRelativeSizeAndPostionSprite_Level_Copy(float NeededWidth, float NeededHeight, sf::Sprite &sprite, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
{
    // you see we need to manage orignal size of picture and have to do individual calculations for each sprite, to adjust width, and all relative to something...which is a bit too much sometimes

    // Instead we can compare wanted to real size, using getLocalbounds() a function slightly differnt from global bounds( ) in the fact that it gives orignal (without calcualtion,position etc stats...)

    sf::FloatRect RealBounds = sprite.getLocalBounds(); // Hold orignal bounds , at the end size of sprite image without roaation ppostion change etc

    float Realwidth = RealBounds.width;   // self:: width is most likely a member of container rectangle
    float Realheight = RealBounds.height; // I should change it to realheight isntead of current

    sprite.setOrigin(Realwidth / 2, Realheight / 2); // This helps locate orign of objects as orign is basically at (total width/2,total width/2) eact cente ofrectangle

    sprite.setScale(NeededWidth / Realwidth, NeededHeight / Realheight); // FOr example take wanted size = real size, it remains 1, so scale doesnt change, however if wanted size<real size, then scale is less than 1 greater than 0 (inshallah if input correct in code ) May Allah help me ameen

    sprite.setPosition(Wantedposition); // now that we have orign at centre and size resolved it got easier to set the position, ALhamdulilahi Rab al alameen
}

Level_Config::Level_Config(float Window_view_width, float Window_view_height,bool Bonus_levels_on) // can you just call destructor using . ? Allah SWT knows best what would happen, let me try it soon inshallah
{
    //levels_data= new Level_Data_Present[Total_Levels_For_which_Data_is_Present];//Lofic Changed, Alhamdulilah Rab Al Alameen, to avoid issues, all that data will be stored statically inside the class itself, Alhamdulilah Rab Al Alameen
    cout<<"--------------------------------------------------"<<"\n"<<endl;
    cout<<"Bismillah Hirahman Nirahim, Constructing New Level"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    Level_id=Level_count;
    Level_count++;//To Make constructor of Level Config Next inshallah Alahamdulilah Rab Al Alameen

    cout<<"Level id:"<<Level_id<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    cout << "Level count:" << Level_count << endl;
    //Forgot to implement the indexes for bonus count thing....doing that now Alhamdulilah

    //===================Bonus Level or Not Check========================
    int No_of_Bonus_Levels=stored_Level_configs.getNo_of_Bonus_levels();
    //Oh I see the which of the bonus level is a local....want recording bonus levels but always starting at 0...I think some allocation may have been bad due to mismatches Allah SWT knows best, but we shouldnt be accessing the same level again although only the sprites and textures made in this class itself are delected, Allah SWT Knows best, may he help us understand the real reason soon inshallah, May he also help us solve it instantly inshallah, Ameen May Allah be with you, Ameen,Lets make it static and inshallah wont crash, Alhamdulilah Rab Al Alameen
    bool is_Bonus_level=false;
    int Which_Of_The_Bonus_Levels=0;//I found that this is not needed 0,as not tracked this is found completely new each turn, not needed updated, nor needed memeber Alhamdulilah Rab Al Alameen
    //first second etc


    for (int i = 0; i < No_of_Bonus_Levels; i++) // it seems doing a \n in the ctrl + F actually does next line...so have to put \\n Alhamdulilah Rab Al Alameen
    {
        if(Level_id==stored_Level_configs.getIndexes_of_Bonus_Levels(i))//this array isnt sorted so we have to store which of the stored bonus levels as well ALhamdulilah
        {
            cout << "\n\nThis Level is a bonus level\n"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
            cout<<"It is taking the design of:"<<Which_Of_The_Bonus_Levels<<" among the bonus levels (0,1...in storage)"<<"\n"<<endl;
            Which_Of_The_Bonus_Levels=i;
            if(Bonus_levels_on)//if sent false then bonus levels wont occur, this is being used for debugging and inshallah also forselective lvel playing, soon inshallah, bonus level data will still exsist but wont be copied, Alhamdulilah rab al alameen
            is_Bonus_level=true;//set comment for debugging why crashing, to uncomment soon inshallah, issue must be in the else block alhamdulilah
            break;
        }
    }

    //===================Boss Level or Not Check========================
    int No_of_Boss_Levels=stored_Level_configs.getNo_of_Boss_levels();
    bool is_Boss_level = false;
    int Which_Of_The_Boss_Levels = 0;//calculated in this functions Alhamdulilah Rab Al Alameen, not tracked

    for(int i=0;i<No_of_Boss_Levels;i++)//it seems doing a \n in the ctrl + F actually does next line...so have to put \\n Alhamdulilah Rab Al Alameen
    {//! moeans to come back to this later soon inshallah, dont compile elsewise
        if(Level_id==stored_Level_configs.getIndexs_of_Boss_Level(i))//this array isnt sorted so we have to store which of the stored bonus levels as well ALhamdulilah
        {
            cout << "\n\nThis Level is a boss level\n"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
            Which_Of_The_Boss_Levels=i;
            //is_Boss_level=true;//set comment for debugging why crashing, to uncomment soon inshallah
            break;
        }
    }



    if(!is_Bonus_level)
    {//if not bonus level, this otherwise that Alhamdulilah
       
        //Bismillah Hirahman Nirahim starting from bg texture

        if(!BackgroundImageTexture.loadFromFile(stored_Level_configs.getBackgroundImageTexture_File_Locations(Level_id)))
        {
            cout<<"Filed to load lvl Background texture from file:"<<stored_Level_configs.getBackgroundImageTexture_File_Locations(Level_id)<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

        }
        else
        {

            cout<<"Loaded lvl Background texture from file:"<<stored_Level_configs.getBackgroundImageTexture_File_Locations(Level_id)<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

            BackgroundImageSprite.setTexture(BackgroundImageTexture);
            //now to set size of background to window height and width
            ForRelativeSizeAndPostionSprite_Level_Copy(Window_view_width,Window_view_height, BackgroundImageSprite, sf::Vector2f(Window_view_width/ 2, Window_view_height / 2));

        }   //For sound, perhaps transfer it to music and then play in main as it will be destructed at function end as local, hence called in main and then played


        if(!Level_MusicSB.openFromFile(stored_Level_configs.getLevel_MusicSB_File_Locations(Level_id)))
        {
            cout << "Filed to load lvl Background music from file"<<stored_Level_configs.getLevel_MusicSB_File_Locations(Level_id)<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
        }//no need for else here, music loaded
        else
        {
            cout << "Loaded lvl Background music from file" << stored_Level_configs.getLevel_MusicSB_File_Locations(Level_id) << endl;
        }
        

        No_of_Blocks_in_this_round=stored_Level_configs.getNo_of_Blocks_in_each_round(Level_id);

        BlockImageTextures = new sf::Texture[No_of_Blocks_in_this_round];
        BlockImageSprites = new sf::Sprite[No_of_Blocks_in_this_round];//to add the block strings in bonus level as well inshallah

        x_position_of_blocks_current_level_holder_array=stored_Level_configs.getx_positions_of_blocks_each_level_holder_array(Level_id); // we just get ptrs for these
        y_position_of_blocks_current_level_holder_array = stored_Level_configs.gety_positions_of_blocks_each_level_holder_array(Level_id);
        width_of_blocks_current_level_holder_array=stored_Level_configs.getwidths_of_blocks_each_level_holder_array(Level_id);
        heights_of_blocks_current_level_holder_array=stored_Level_configs.getheights_of_blocks_each_level_holder_array(Level_id);

        BlockImage_File_Locations=stored_Level_configs.getBlockImageTexture_File_Location(Level_id);

        for (int i = 0; i < No_of_Blocks_in_this_round; i++)
        {

            if(!BlockImageTextures[i].loadFromFile(BlockImage_File_Locations[i]))
            {
                cout<<"Failed to load Block texture from file:"<<BlockImage_File_Locations[i]<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
            }
            else
            {
                
                cout<<"Loaded Block texture from file:"<<BlockImage_File_Locations[i]<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
            
                BlockImageSprites[i].setTexture(BlockImageTextures[i]);
                //As sprite so no /0 issue else had to setsize 1 1 for shapes before calling this....Not done in function cuz not done research on what happens if not Alhamdulilah
                ForRelativeSizeAndPostionSprite_Level_Copy(width_of_blocks_current_level_holder_array[i], heights_of_blocks_current_level_holder_array[i], BlockImageSprites[i], sf::Vector2f(x_position_of_blocks_current_level_holder_array[i], y_position_of_blocks_current_level_holder_array[i]));
            }
        }

        no_of_mobs_in_this_round=stored_Level_configs.getno_of_mobs_in_each_round(Level_id);

        type_of_mobs_current_level_holder_array=stored_Level_configs.gettypes_of_mobs_each_level_holder_array(Level_id);

        x_spawn_pt_of_mobs_current_level_holder_array = stored_Level_configs.getx_of_spawn_pts_of_mobs_each_level_holder_array(Level_id);
        y_spawn_pt_of_mobs_current_level_holder_array = stored_Level_configs.gety_of_spawn_pts_of_mobs_each_level_holder_array(Level_id);
        //boss level to use same arrays as normals, but the indices stored may be used for special purposes, Alhamdulilah Rab AL ALameen
    }
    else
    {//for bonus lvls..

        cout<<"---------------------------------------------------"<<"\n"<<endl;
        cout<<"Which of the Bonus Levels i.e First of Second etc:"<<Which_Of_The_Bonus_Levels<<"\n"<<endl;
        cout << "No of blocks in this rounds:" << stored_Level_configs.getNo_of_Blocks_in_each_bonus_round(Which_Of_The_Bonus_Levels) << "\n"
             << endl;
        cout<<"Location of Bonus Level's Background Image:"<<stored_Level_configs.getBonus_Level_BackgroundImageTexture_File_Locations(Which_Of_The_Bonus_Levels)<<"\n"<<endl;
        cout << "Location of Bonus Level's Background Image:" << stored_Level_configs.getBonus_Level_MusicSB_File_Locations(Which_Of_The_Bonus_Levels) << "\n"<< endl;
        // Bismillah Hirahman Nirahim starting from bg texture
        //One more Level_id was remaining, resolved that and now it is normmaly working for all rounds, Alhamdulilah Rab Al Alameen

        if (!BackgroundImageTexture.loadFromFile(stored_Level_configs.getBonus_Level_BackgroundImageTexture_File_Locations(Which_Of_The_Bonus_Levels)))
        {
            cout << "Filed to load bonus lvl Background texture from file" << stored_Level_configs.getBonus_Level_BackgroundImageTexture_File_Locations(Which_Of_The_Bonus_Levels) << endl;
        }
        else//Next goal to improve debugging, improve patience and be observant, see if more of what you just did is required instead of thinking it isnt correct inshallah may Allah SWT aid us in this path Ameen
        {
            cout << "Loaded bonus lvl Background texture from file" << stored_Level_configs.getBonus_Level_BackgroundImageTexture_File_Locations(Which_Of_The_Bonus_Levels) << endl;
       
            cout<<"Bismillah Hirahman Nirahim Bonus Round Construction Test 1"<<"\n"<<endl;
            BackgroundImageSprite.setTexture(BackgroundImageTexture);
            // now to set size of background to window height and width
            ForRelativeSizeAndPostionSprite_Level_Copy(Window_view_width,Window_view_height, BackgroundImageSprite, sf::Vector2f(Window_view_width / 2, Window_view_height / 2));
            cout<<"Bismillah Hirahman Nirahim Bonus Round Construction Test 2"<<"\n"<<endl;
        } // For sound, perhaps transfer it to music and then play in main as it will be destructed at function end as local, hence called in main and then played

        cout<<"Bismillah Hirahman Nirahim Bonus Round Construction Test 3"<<"\n"<<endl;
        if (!Level_MusicSB.openFromFile(stored_Level_configs.getBonus_Level_MusicSB_File_Locations(Which_Of_The_Bonus_Levels)))//Corrected another use of Level id instead of which of the bonus levels Alhamdulilah Rab Al Alameen
        {
            cout << "Filed to load bonus lvl Background music from file:" << stored_Level_configs.getBonus_Level_MusicSB_File_Locations(Which_Of_The_Bonus_Levels) << endl;
        } // no need for else here, music loaded
        else
        {
            cout<<"Bismillah Hirahman Nirahim Bonus Round Construction Test 4"<<"\n"<<endl;
            cout << "Loaded bonus lvl Background music from file:" << stored_Level_configs.getBonus_Level_MusicSB_File_Locations(Which_Of_The_Bonus_Levels) << endl;
        } 

        cout<<"Bismillah Hirahman Nirahim Bonus Round Construction Test 5"<<"\n"<<endl;//self remember if template takes 1 data type and sent are two differnt then error compiler,,..Alhamdulilah Rab Al Alameen
        No_of_Blocks_in_this_round = stored_Level_configs.getNo_of_Blocks_in_each_bonus_round(Which_Of_The_Bonus_Levels);//The entire issue was that this was being called using Level id instead of which of the bonus rounds,....Solved, Alhamdulilah Rab AL Alameen

        BlockImageTextures = new sf::Texture[No_of_Blocks_in_this_round];
        BlockImageSprites = new sf::Sprite[No_of_Blocks_in_this_round]; // to add the block strings in bonus level as well inshallah

        x_position_of_blocks_current_level_holder_array = stored_Level_configs.getx_positions_of_blocks_each_bonus_level_holder_array(Which_Of_The_Bonus_Levels); // we just get ptrs for these
        y_position_of_blocks_current_level_holder_array = stored_Level_configs.gety_positions_of_blocks_each_bonus_level_holder_array(Which_Of_The_Bonus_Levels);
        width_of_blocks_current_level_holder_array = stored_Level_configs.getwidth_of_blocks_each_bonus_level_holder_array(Which_Of_The_Bonus_Levels);
        heights_of_blocks_current_level_holder_array = stored_Level_configs.getheight_of_blocks_each_bonus_level_holder_array(Which_Of_The_Bonus_Levels);

        BlockImage_File_Locations = stored_Level_configs.getBlockImageTexture_Bonus_lvl_File_Location(Which_Of_The_Bonus_Levels);

        for (int i = 0; i < No_of_Blocks_in_this_round; i++)
        {

            if (!BlockImageTextures[i].loadFromFile(BlockImage_File_Locations[i]))
            {
                cout << "Failed to load texture from file" << endl;//Plenty of functions accidnelty called using Level id (most likely forgot to change to which of the bonus levels, now fixed, Alhamdulilah Rab Al Alameen)
            }
            else
            {
                BlockImageSprites[i].setTexture(BlockImageTextures[i]);
                // As sprite so no /0 issue else had to setsize 1 1 for shapes before calling this....Not done in function cuz not done research on what happens if not Alhamdulilah
                ForRelativeSizeAndPostionSprite_Level_Copy(width_of_blocks_current_level_holder_array[i], heights_of_blocks_current_level_holder_array[i], BlockImageSprites[i], sf::Vector2f(x_position_of_blocks_current_level_holder_array[i], y_position_of_blocks_current_level_holder_array[i]));
            }
        }

        //No mobs in bonus Alhamdulilah
        //Which_Of_The_Bonus_Levels++;//First Bonus Level then second in storage, later note, this variable is local, calculated each time, and not tracked Alhamdulilah Rab Al Alameen
    }//I dont think we need to add check for Which of Bonus Level= Total Bonus level...



}

Level_Config::~Level_Config(){
    delete[] BlockImageTextures;
    delete[] BlockImageSprites;//these are only two thingsthat require deleting, to still delay mob logic, perhpas changes soon inshallah
    // delete levels_data;//Logic changed Alhamdulilah Rab Al Alameen
} // As you know staging commit, makes the commit to your local repo then syncing will push it to orign main, i.e the remote repo, Alhamdulilah Rab Al Alameen

void Level_Config::display(sf::RenderWindow &window)
{

    window.draw(BackgroundImageSprite);

    for(int i=0;i<No_of_Blocks_in_this_round;i++)
    {
        window.draw(BlockImageSprites[i]);
    }
}

int Level_Config::getLevel_Count()
{
    return Level_count;
}

//============================Stored_Level_Configs=====================================

// Static Varible stays in memory until program terminates

Stored_Level_Configs::Stored_Level_Configs()
{

    cout<<"Creating Storage of Configs Alhamdulilah Rab Al Alameen"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
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

    cout<<"Bismillah Hirahman Nirahim Storage Construction Test 1"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

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
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\final_boss_snow_bros.ogg"; // redundant kept if want to add more or change Alhamdulilah

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 2" << endl;

    No_of_Blocks_in_each_round = new int[Total_Levels_For_which_Data_is_Present];
    //To be assigned later when find no of blocks and postions in each rn gave 1 block to all levels and dummy position for testing, Alhamdulilah rab al alameen

    int const Blocks_of_boundary = 4;

    //Assign No of Blocks in each round
    No_of_Blocks_in_each_round[0] = Blocks_of_boundary + 8; // 4 of boundary 8 otherwise, Alhamdulilah Rab Al Alameen
    No_of_Blocks_in_each_round[1] = Blocks_of_boundary +13;
    No_of_Blocks_in_each_round[2] = Blocks_of_boundary  +15;
    No_of_Blocks_in_each_round[3] = Blocks_of_boundary + 7;//accidently did for three the +6 is for boss level 4 from 0 Alhamdulilah corrected
    No_of_Blocks_in_each_round[4] = Blocks_of_boundary + 6;
    No_of_Blocks_in_each_round[5] = Blocks_of_boundary + 5;
    No_of_Blocks_in_each_round[6] = Blocks_of_boundary + 6;
    No_of_Blocks_in_each_round[7] = Blocks_of_boundary + 6;
    No_of_Blocks_in_each_round[8] = Blocks_of_boundary + 7;
    No_of_Blocks_in_each_round[9] = Blocks_of_boundary + 5;//oops accidently forgot that i made no of blocks = boundary blocks and then trying to add blocks causes issues...and exe doesnt pop up, solved, Alhamduluilah rab al alameen

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 3" << endl;

    x_positions_of_blocks_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present]; // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
    //Now to loop and give needed width to each array (may be different for all, determined by no of blocks at respective index, Alhamdulilah)
    y_positions_of_blocks_each_level_holder_array = new float *[Total_Levels_For_which_Data_is_Present];

    widths_of_blocks_each_level_holder_array =new float *[Total_Levels_For_which_Data_is_Present];
    heights_of_blocks_each_level_holder_array =new float *[Total_Levels_For_which_Data_is_Present];//Had forgoted to inititalize the float* and directly done the float below, hence corrected Alahmdulilah Rab Al Alameen....It did give squiggly line in vscode....May Allah SWT help me and us all ameen
    BlockImageTexture_File_Location = new string *[Total_Levels_For_which_Data_is_Present];
    // Making Array in loop, assigning manually inshallah

    // To add more levels we have to add everything for new level but that was orignally happens so...>Alhamdulilah

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 4" << endl;//The non bonus levbel block sprite texture was miss spelled

    for (int i = 0; i < Total_Levels_For_which_Data_is_Present; i++)
    {
        x_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];
        y_positions_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];//at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        widths_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]]; // Bismillah Hirahman Nirahim, adding widths and height record arrays for each block as well, Alhamdulilah rab al alameen, logic changed from fixed width heiht, to varying Alhamdulilah
        heights_of_blocks_each_level_holder_array[i] = new float[No_of_Blocks_in_each_round[i]];
        BlockImageTexture_File_Location[i] = new string[No_of_Blocks_in_each_round[i]];

        //On all levels the four blocks are required to be walls, Alhamdulilah Rab Al Alameen

    }//Perhaps we could make a structure , or no actually a Vector2f with refrence to these as well for easier sending? Well May Allah SWT help us ameen
    //sfml vector2f cant have refrences as parameters...so we can think of another way,but for now leave it, Alhamdulilah Rab Al Alameen

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5" << endl;

    //As each block has different locations we must give it manually for each block
    //May Allah SWT help us, Ameen

    //Currently for testing, each level has one block so, bismillah hirahman nirahim (also ten levels total.... Alhamdulilah rab al alameen)

    Window_Res Window_view_Size;//should I make it an Enum class instead to not allow it to be changed? but enum cant take floats..., Well this should be easier to do but changing will be hard later on, Lets see as we go inshallah, Oh Allah SWT Please guide us all
    int considered_sub_cube_width=30;

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.5" << endl;

    int size_of_hot_bar_at_bottom=50;//This place is where all the hearts etc go so it is made space at below, Thought of as countermeasure to snowmen being up and full bottom not being visible  Alhamdulilah Rab Al Alameen

    for(int i=0;i<Total_Levels_For_which_Data_is_Present;i++)//Creating walls, texture different elsewise same size and position for each level, Alhamdulilah Rab Al Alameen
    {
        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.6.i:"<<i<<" " << endl;
        string Wanted_Texture_Header_FL;//ensuring there is a new local scope each iteration to ensure no trouble of removing the initialy present work in it, Alhamdulilah Rab Al Alameen
        string Wanted_Texture_Footer_FL;
        string Wanted_Texture_Sides_FL;

        if(i>=0&&i<=3)//Note file names are +1 to index s of level that are in it Alhamdulilah rab al alameen Alhamdulilah rab al alameen
        {
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1toL4Header.png";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1toL4Footer.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1toL4Sides.png ";
        }
        else if(i==4)
        {
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Header.png ";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Footer.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Sides.png ";
               }
        else if (i >= 5 && i <= 8)
        {
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6toL9Header.png ";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6toL9Footer.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6toL9Sides.png ";
               }
        else{
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Header.png ";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Footer.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Sides.png ";
            }

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.7.i:" << i << " " << endl;
        cout << Wanted_Texture_Header_FL << endl;

        // Left Wall, considering each sub block is 20 tall and 20 wide, so the whole wall should be stack of 25 blocks, that is 20 wide and 500 heigh or vice versa, centre one at 10 and the other at 250 Alhamdulilah Rab Al Alameen
        // For left specifically, y at 250 and x at 10, as you notice both position will be at half of full sizes as becomes orign and then places , to ensure that the block summoned stays entirely on screen not leaking out, Alhadmulilah Rab AL Alameen
        x_positions_of_blocks_each_level_holder_array[i][0] = considered_sub_cube_width/2;       // Note: although the walls can be done in a loop, but we try to keep the wall texture variable
        y_positions_of_blocks_each_level_holder_array[i][0] = Window_view_Size.Win_Height / 2; // these are used to call the relative size & position function later on so work perfectly Alhamdulilah Rab Al Alameen
        widths_of_blocks_each_level_holder_array[i][0] = considered_sub_cube_width;
        heights_of_blocks_each_level_holder_array[i][0] = Window_view_Size.Win_Height; // Alhamdulilah Rab Al Alameen

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.7.5.i:" << i << " " << endl;

        BlockImageTexture_File_Location[i][0] = Wanted_Texture_Sides_FL; // oops accidently went overbound, resolved Alhamdulilah Rab Al Alameen

        cout<<"X position of Left Block for Level: "<<i<<" = "<<x_positions_of_blocks_each_level_holder_array[i][0]<<"\n"<<endl;
        cout<<"Y position of Left Block for Level: "<<i<<" = "<<y_positions_of_blocks_each_level_holder_array[i][0]<<"\n"<<endl;

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.8.i:" << i << " " << endl;

        // Right, left shifted to right side by taking left x position and doing 500 - that, the sizes remain the same Alhamdulilah Rab Al Alameen, so does the ya pos
        x_positions_of_blocks_each_level_holder_array[i][1] = Window_view_Size.Win_Width - considered_sub_cube_width / 2; // Just think that it is left boundary move right wards by increasing x, which you get equal as left was from left corner of screen (its x pos) but right corner is 500, so to get equal distance we subtract from 500, Alhamdulilah Rab AL Alameen
        y_positions_of_blocks_each_level_holder_array[i][1] = Window_view_Size.Win_Height / 2;
        widths_of_blocks_each_level_holder_array[i][1] = considered_sub_cube_width;
        heights_of_blocks_each_level_holder_array[i][1] = Window_view_Size.Win_Height; // Alhamdulilah Rab Al Alameen
        BlockImageTexture_File_Location[i][1] = Wanted_Texture_Sides_FL;

        //Top Wall,x centre at 250 so it doent escape out, y centre at 10, width full screen, Width instead of height, but we are assuming subcubes...I beleieve that boundaries may get thin or thick depending on resultion but they will cover any resolution inshallah May Allah help us Ameen 
        x_positions_of_blocks_each_level_holder_array[i][2] = Window_view_Size.Win_Width / 2;
        y_positions_of_blocks_each_level_holder_array[i][2] = considered_sub_cube_width / 2;
        widths_of_blocks_each_level_holder_array[i][2] = Window_view_Size.Win_Width;// note cube with=cube height
        heights_of_blocks_each_level_holder_array[i][2] = considered_sub_cube_width; // Alhamdulilah Rab Al Alameen
        BlockImageTexture_File_Location[i][2] = Wanted_Texture_Header_FL;

        //Reordereing ensuring left and right come over top and bottom for design, as drawn in order,0 --- so on, Alhamdulilah Rab Al alameen

        

        //Bottom is similar to top shifted down, just y value of position taken wrt down corner of screem ie Window res-position of x of top, Alhamdulilah Rab Al Alameen
        x_positions_of_blocks_each_level_holder_array[i][3] = Window_view_Size.Win_Width / 2;//Rememeber x remains unaltered from top but y is different, Alhamdulilah Rab Al Alameen, Bismillah Hirahman Nirahim, Test
        y_positions_of_blocks_each_level_holder_array[i][3] = Window_view_Size.Win_Width- considered_sub_cube_width / 2 - size_of_hot_bar_at_bottom/2; // here the no of sub cubes constintuesnts of figures get as per resolution and we dont directly touch that, Alhamdulilah Rab AL ALameen, subtracting to move up Alhamdulilah rab al alameen
        widths_of_blocks_each_level_holder_array[i][3] = Window_view_Size.Win_Width ;  //Added full width, orign moves up by half? to be experimented on Bismillah Hirahman Nirahim                                     // Perhaps we could replace the single block texture in files to whole wall one, Allah SWT knows best, Alhamdulilah Rab Al Alameen
        heights_of_blocks_each_level_holder_array[i][3] = considered_sub_cube_width + size_of_hot_bar_at_bottom; // Alhamdulilah Rab Al Alameen
        BlockImageTexture_File_Location[i][3] = Wanted_Texture_Footer_FL;                                        // Deadline was extended Alhamdulilah, Oh ALlah SWT please help me complete this project Ameen
    }

    
    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.9.i:" << " " << endl;//Oh no i went overbound for every 5th block indexing it 5 instead of 4.....Oh Allah please save me Ameen

    //shifted up Alhamdulilah//    int const Blocks_of_boundary=4;//These meassures kept different for rescalability Alhamdulilah Rab Al Alameen
    float Alvation_by_base_boundary = 60; // dexreased alivation(elevation by base as changed textuer.. gives differt look Alhamdulilah) ALhamdulilah
    // alevation had to be decreased so that first platform and second plat form are at same distance from lower level Alhamdulilah rab al alameen

    float LBlockHeight = 30;                                          // I feel they arent scaling equal to walls so do this, bismillah hirahman nirahim
    float L_distance_to_next_platform_level = (LBlockHeight + 3) * 2; // considering distance = 1 block worth of empty space(aka middle range) Alhmaudlilah rab al alameen, no made the gap slightly bigger than before, ok to better the orientation, plan , vhanged to wider gap than block, then decreased player height so switched back, not covering whole screen perhasp make block more in height or restore to gap more than block, ok i felt header bigger wasnt suitable, just made gap bigger than block height, Alhamdulilah rab al alameen
    float LDistance_Required_to_be_on_top_of_previous_platform = LBlockHeight;
    int L=2;//holds level for ease of calculation writing Alhamdulilah rab al alameen
    //if stacking false then the distance for stack objects doesnt get added Alhamdulilah rab al alameen, base of stack is 0 henceforth Alhamdulilah rab al alameen
    int WS=0;//which of stack, these also make cal easier Alhamdulilah rab al alameen, we can just copy paste and manage heights using these value changes Alhamdulilah

    int No_of_blocks_in_W = 10;
    int No_of_blocks_in_H = 1;
    char place = 'c'; // dont try accessing using place directly...instead use [] else wise whole string may be displayed also usng ptr logic is troubelsome as acts like string from that pt if tried to write instead of writing ptr...Alhamdulilah rab al alameen
    float custom_calculation = 0;
    int pr = 1; // platform range
    int Bi = Blocks_of_boundary + 2; // To easify calculation we just ++ this instead of manually writing each tie from now on inshallah
    //Introduced later carried here, Alhamdulilah rab al alameen

    //==========Lvl#0============
    //I feel they arent scaling equal to walls so do this, bismillah hirahman nirahim
        // considering distance = 1 block worth of empty space(aka middle range) Alhmaudlilah rab al alameen, no made the gap slightly bigger than before, ok to better the orientation, plan , vhanged to wider gap than block, then decreased player height so switched back, not covering whole screen perhasp make block more in height or restore to gap more than block, ok i felt header bigger wasnt suitable, just made gap bigger than block height, Alhamdulilah rab al alameen
     // Self considering in same range for now as previous platform (although it would be a middle range, Alhamdiulilah rab al alameen), currently middle range= block height but kept for rescalability Alhamdulilah rab al alameen, this is directly depending on block height so if gap is bigger than hright it wouldnt effect on top placement but might defer the blocky look

    
    //3 of such required to almost cover whole screen width hence around 120 considering the walls (not detailed calculation, perhaps i should measure deatils of walls first Bimsillah Hirahman Nirahim )
    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary+0]=250;//Alvation_by_base_boundary is height of raised base, Alhamdulilah Rab AL Alameen
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 0] = Window_view_Size.Win_Height - Alvation_by_base_boundary - L_distance_to_next_platform_level; // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary+0]=120;//Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary+0]=LBlockHeight;//Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary+0] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform.png";
    //This blocks of boundary set up is to understand which one is our manually placed first Alhamdulilah rab al alameen

    // 3 of such required to almost cover whole screen width hence around 120 considering the walls (not detailed calculation, perhaps i should measure deatils of walls first Bimsillah Hirahman Nirahim )
    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 1] = 50;//remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 1] = Window_view_Size.Win_Height - Alvation_by_base_boundary - L_distance_to_next_platform_level; // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 1] = 120;            // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 1] = LBlockHeight; // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 1] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform.png";

    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 2] = Window_view_Size.Win_Width-50;//To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 2] = Window_view_Size.Win_Height- Alvation_by_base_boundary - L_distance_to_next_platform_level ; // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 2] = 120;            // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 2] = LBlockHeight; // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 2] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform.png";

    //--second platform range Alhamdulilah (had missed now added Alhamdulilah)
    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 3] =  Window_view_Size.Win_Width/2;//at centre of screen Alhamdulilah                                     // To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 3] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (L_distance_to_next_platform_level * 2); // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 3] = 300;//This one appearing bigger than half, Alhamdulilah                                                                                                      // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 3] = LBlockHeight;                                                                                           // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 3] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform2.png";

    
    //--third platform range
    //Two wider platforms slightly upper

    //Which platofmr_level (same range of height)* alevation per height, Alhamdulilah Rab Al Alameen 

    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 4] = (210/2);    //half its width from left side +  left side base width  //To look better, now measure for not overlapping with boundary have been removed, they look better this way Alhamdulilah rab al alameen                                // To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary +4] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (L_distance_to_next_platform_level*3) ; // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    //Alvation_by_base_boundary to overcome raised base, then L_distance_to_next_platform_level is height of each platform level so Alhamdulilah Rab Al Alameen
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 4] = 210;                                    // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 4] = LBlockHeight;                         // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 4] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform3.png";

    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 5] = Window_view_Size.Win_Width - ((210 / 2) ); // To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 5] = Window_view_Size.Win_Height - Alvation_by_base_boundary-(L_distance_to_next_platform_level*3); // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 5] = 210;                                    // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 5] = LBlockHeight;                         // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 5] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform3.png";


    //fourth platform range and the platform that lie atop without gap, Alhamdulilah Rab al alameen
    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 6] = Window_view_Size.Win_Width/2;//centre of screen Alhamdulilah                                                            // To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 6] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (L_distance_to_next_platform_level * 4); // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 6] = 400;//Taking most of the screen Alhamdulilah Rab Al Alameen                                                                                                      // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 6] = LBlockHeight;                                                                                           // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 6] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform4.png";

    x_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 7] = Window_view_Size.Win_Width / 2;                                                                      // centre of screen Alhamdulilah                                                            // To make it same distance from right as second is from left boundary Alhamdulilah Rab Al Alameen, now so I beleive the down boundary is hotbar+ cube so Alvation_by_base_boundary rn, Allah SWT knows best Alhamdulilah Rab Al Alameen // remember the greater the values of y pos the downeer..Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 7] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (L_distance_to_next_platform_level * 4) - LDistance_Required_to_be_on_top_of_previous_platform; // Alvation_by_base_boundary is base Alhamdulilah      // 3 blocks height,size same different places in x Alhamdulilah     // making daignol outlook, with 10 as width and height expectant of each block, oh reminds me lets transfer that var here as well
    widths_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 7] = 267.5;//Slightly less wide than previous block Alhamdulilah Rab Al alameen                                                                                                      // Taking most of the screen Alhamdulilah Rab Al Alameen        No. adjusted to match common lines Alhamdulilah rab al alameen, we could also make this dependant on the base of this but lets keep it independant for solidarity, also we may choose to change these specifc two blocks patrens soon inshallah                                                                                              // Bismillah Hirahman Nirahim
    heights_of_blocks_each_level_holder_array[0][Blocks_of_boundary + 7] = LBlockHeight;                                                                                           // Ok I had mistaken made eg for 9th level access [9][9] although theire was only one block , fixed it to [9][0] for everything currently 2d Alhamdulilah Rab Al Alameen
    BlockImageTexture_File_Location[0][Blocks_of_boundary + 7] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L1Platform5.png";
    

    
    //==========Lvl#1============
    //cout << "Test 1";
     // Self considering in same range for now as previous platform (although it would be a middle range, Alhamdiulilah rab al alameen), currently middle range= block height but kept for rescalability Alhamdulilah rab al alameen, this is directly depending on block height so if gap is bigger than hright it wouldnt effect on top placement but might defer the blocky look

    //It appears that for inversed images it is better to just get new shot of those inversed images, because they are sccaled later on in relative...and all together, it would be easy to add an array to see if inverted or not, but this is easier to understand although slightly more work, if it gets much we can switch from that point on, inshallah May Allah SWT help us, Ameen Sum Ameen Ya rab al alameen, Ya arham ar rahimeen
    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary] = Window_view_Size.Win_Width / 2 - 40;//Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen, changed back due to found difference again to right wards Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary] = Window_view_Size.Win_Height - Alvation_by_base_boundary - L_distance_to_next_platform_level;
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary] = Window_view_Size.Win_Width/2+40;//slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform.png";
    //cout << "Test 2";

    //now for the stacking to full monster Bismillah Hirahman Nirahim

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary+1] =112-20; // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 1] = Window_view_Size.Win_Height - Alvation_by_base_boundary - L_distance_to_next_platform_level - LDistance_Required_to_be_on_top_of_previous_platform; // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 1] =  55; // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 1] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 1] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform2.png";

    //Head of stack monster face, Bismillah hirahman nirahim

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 2] = 112-20;//shifting slightly left to make space for right block Alhamdulilah rab al alameen (was overlapping or touching)                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 2] = Window_view_Size.Win_Height - Alvation_by_base_boundary - L_distance_to_next_platform_level - (2*LDistance_Required_to_be_on_top_of_previous_platform);//second piece being stacked so 2* Alhamdulilah rab rab al alameen // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 2] = 55;                                                                                                                                                         // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 2] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 2] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform3.png";

    //second platform range begins Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 3] = (Window_view_Size.Win_Width-(Window_view_Size.Win_Width / 2 - 20))+53.25;  //needed to shift right now that smaller Alhamdulilah                                  // same distance as first placed block after boundary but from right side Alhamdulilah Rab Al Alameen                                                                                     // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 3] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (2*L_distance_to_next_platform_level) ; //Second platform level so 2* Alhamdulilah Rab Al Alameen// the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 3] = Window_view_Size.Win_Width / 2 - 30;                                                                     // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 3] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 3] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform4.png";
    //ok i notice the right side one has lesser width elsewise the monster faces would be equal Alhamdulilah rab al alameen noticed in time, width and position x adjusted Alhamdulilah

    //Now for the stack Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 4] = Window_view_Size.Win_Height - (112-20 );                                                                                                                    // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 4] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (2 * L_distance_to_next_platform_level) - LDistance_Required_to_be_on_top_of_previous_platform; // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 4] = 55;                                                                                                                                                         // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 4] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 4] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform2.png";

    // Head of stack monster face, Bismillah hirahman nirahim

    //Same x distance as of previous head of monster but from right instead of left Alhamdulilah rab al aalameen
    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 5] = Window_view_Size.Win_Height - (112-20 );                                                                                                                        // shifting slightly left to make space for right block Alhamdulilah rab al alameen (was overlapping or touching)                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 5] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (2*L_distance_to_next_platform_level) - (2 * LDistance_Required_to_be_on_top_of_previous_platform); // second piece being stacked so 2* Alhamdulilah rab rab al alameen // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 5] = 55;                                                                                                                                                               // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 5] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 5] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform3.png";

    //platform range 3 a duplicate of platform 1 but up ALhamdulilah rab al alameen considering stcks on same platform
    //Note dont forget that fn should be on to press F10 Alhamdulilah rab al alameen
    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary+6] = Window_view_Size.Win_Width / 2 - 40; // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen, changed back due to found difference again to right wards Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 6] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (3*L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 6] = Window_view_Size.Win_Width / 2 + 40; // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 6] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 6] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform.png";
    // cout << "Test 2";

    // now for the stacking to full monster Bismillah Hirahman Nirahim

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 7] = 112-20;                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 7] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (3*L_distance_to_next_platform_level) - LDistance_Required_to_be_on_top_of_previous_platform; // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 7] = 55;                                                                                                                                                         // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 7] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 7] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform2.png";

    // Head of stack monster face, Bismillah hirahman nirahim

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 8] = 112-20;                                                                                                                                                         // shifting slightly left to make space for right block Alhamdulilah rab al alameen (was overlapping or touching)                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 8] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (3 * L_distance_to_next_platform_level) - (2 * LDistance_Required_to_be_on_top_of_previous_platform); // second piece being stacked so 2* Alhamdulilah rab rab al alameen // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 8] = 55;                                                                                                                                                               // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 8] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 8] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform3.png";
 
    //platforms intersecting moving apart, Bismillah Hirahman Nirahim, Alhamdulilah

    //platform range 4 copy of 2 Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 9] = (Window_view_Size.Win_Width - (Window_view_Size.Win_Width / 2 - 20)) + 53.25;                        // needed to shift right now that smaller Alhamdulilah                                  // same distance as first placed block after boundary but from right side Alhamdulilah Rab Al Alameen                                                                                     // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 9] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (4 * L_distance_to_next_platform_level); // Second platform level so 2* Alhamdulilah Rab Al Alameen// the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 9] = Window_view_Size.Win_Width / 2 - 30;                                                                      // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 9] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 9] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform4.png";
    // ok i notice the right side one has lesser width elsewise the monster faces would be equal Alhamdulilah rab al alameen noticed in time, width and position x adjusted Alhamdulilah

    // Now for the stack Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary +10] = Window_view_Size.Win_Height - (112 - 20);                                                                                                                    // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary +10] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (4 * L_distance_to_next_platform_level) - LDistance_Required_to_be_on_top_of_previous_platform; // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary +10] = 55;                                                                                                                                                               // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary +10] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary +10] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform2.png";

    // Head of stack monster face, Bismillah hirahman nirahim

    // Same x distance as of previous head of monster but from right instead of left Alhamdulilah rab al aalameen
    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary +11] = Window_view_Size.Win_Height - (112 - 20);                                                                                                                          // shifting slightly left to make space for right block Alhamdulilah rab al alameen (was overlapping or touching)                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary +11] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (4 * L_distance_to_next_platform_level) - (2 * LDistance_Required_to_be_on_top_of_previous_platform); // second piece being stacked so 2* Alhamdulilah rab rab al alameen // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary +11] = 55;                                                                                                                                                                     // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary +11] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary +11] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform3.png";

    //If you find an entire range mising it is most likely due to using its indexes accdiently in another range calculation leading to overwirting...Allah swt knows best Alhadulilah rab al alameen

    //platform 5, a single long platform simple alhamdulilah

    x_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 12] = 200 ;//left of centre                                                                                                                          // shifting slightly left to make space for right block Alhamdulilah rab al alameen (was overlapping or touching)                                                                                                                                                   // Slightly left of centre,to adjust the left end of the monster Alhamdulilah rab al alameen // as each level has only one block so it ends  up lookjing like 0,0 1,1//// Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 12] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (5 * L_distance_to_next_platform_level) ; // second piece being stacked so 2* Alhamdulilah rab rab al alameen // the LDistance_Required_to_be_on_top_of_previous_platform allows stacking Alhamdulilah rab al alameen
    widths_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 12] = 150;                                                                                                                                                                     // slightly greater than half
    heights_of_blocks_each_level_holder_array[1][Blocks_of_boundary + 12] = LBlockHeight;
    BlockImageTexture_File_Location[1][Blocks_of_boundary + 12] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L2Platform5.png";

    //==========Lvl#2============

     // I feel they arent scaling equal to walls so do this, bismillah hirahman nirahim
     // considering distance = 1 block worth of empty space(aka middle range) Alhmaudlilah rab al alameen, no made the gap slightly bigger than before, ok to better the orientation, plan , vhanged to wider gap than block, then decreased player height so switched back, not covering whole screen perhasp make block more in height or restore to gap more than block, ok i felt header bigger wasnt suitable, just made gap bigger than block height, Alhamdulilah rab al alameen
    

  

    x_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary] = Window_view_Size.Win_Width/2;//centre of page
    y_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr*L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[2][Blocks_of_boundary] = (considered_sub_cube_width*6);//slightly less than half of page , now using cube calculation and six cubes Alhamdulilah
    heights_of_blocks_each_level_holder_array[2][Blocks_of_boundary] = LBlockHeight;
    BlockImageTexture_File_Location[2][Blocks_of_boundary] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform.png";

    x_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 1] = (4 * considered_sub_cube_width)/2; // note keeo this half of size as half of this is left of object's orign, hence if not shape will escape page
    y_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 1] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 1] = 4*considered_sub_cube_width;//90 as three blocks
    heights_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 1] = LBlockHeight;//changed to 4 block thing...
    BlockImageTexture_File_Location[2][Blocks_of_boundary + 1] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform7.png";

    x_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 2] = Window_view_Size.Win_Width - (4 * considered_sub_cube_width)/2;
    y_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 2] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 2] = 4 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 2] = LBlockHeight;
    BlockImageTexture_File_Location[2][Blocks_of_boundary + 2] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform7.png";

    pr=2;//second range Alhamdulilah
    Bi=3;
    //block index

    x_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 3] = Window_view_Size.Win_Width / 2;//centre of page
    y_positions_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 3] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 3] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[2][Blocks_of_boundary + 3] = LBlockHeight;
    BlockImageTexture_File_Location[2][Blocks_of_boundary + 3] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";
    //now that i think about it we could also do this for level... ok from next level o...or not

    

    Bi = Blocks_of_boundary+4; // next block is the single block at the side

    x_positions_of_blocks_each_level_holder_array[L][Blocks_of_boundary + 4] = (2 * considered_sub_cube_width)/2; // left corner of page hence the measure for making sure its left edge is toucing left edge of view of screen Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[L][Blocks_of_boundary + 4] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Blocks_of_boundary + 4] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[L][Blocks_of_boundary + 4] = LBlockHeight;
    BlockImageTexture_File_Location[L][Blocks_of_boundary + 4] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";

    //same block to the right Alhamdulilah Rab Al Alameen

    Bi = Blocks_of_boundary + 5;

    float WW=Window_view_Size.Win_Width;
    float WH=Window_view_Size.Win_Height;//changed to two blocks as single block gets merged into side of screen(wall) Alhamdulilah rab al alameen

    x_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Width-((2 * considered_sub_cube_width) / 2); // left corner of page hence the measure for making sure its left edge is toucing left edge of view of screen Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";

    pr=3;//now platform 3, which will be exact same as 2, which we now can just copy paste, Alhamdulilah rab al alameen

    Bi = Blocks_of_boundary + 6;
    // block index

    x_positions_of_blocks_each_level_holder_array[2][Bi] = Window_view_Size.Win_Width / 2; // centre of page
    y_positions_of_blocks_each_level_holder_array[2][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level);
    widths_of_blocks_each_level_holder_array[2][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[2][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[2][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";

    Bi = Blocks_of_boundary + 7; // next block is the single block at the side

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (2 * considered_sub_cube_width) / 2; // left corner of page hence the measure for making sure its left edge is toucing left edge of view of screen Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";

    // same block to the right Alhamdulilah Rab Al Alameen

    Bi = Blocks_of_boundary + 8;

    x_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Width - ((2 * considered_sub_cube_width) / 2); // left corner of page hence the measure for making sure its left edge is toucing left edge of view of screen Alhamdulilah rab al alameen
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform4.png";

    //Now it is time for the stack blocks monster image that I have made into one platform Alhamdulilah, notice how its size is 2 blocks * 3 blocks also notice how it is exactly between centre blocks and 3 and second level? we use exactly that to our advantage Alhamdulilah rab al alameen, but as it lies differently from platforms hence we dont use pr in its formula Alhamdulilah Rab Al Alameen

    Bi = Blocks_of_boundary + 9; // now keeping track along with incrementing easily Alhamdulilah rab al alameen

    //For better positioning using in suggested in the middle of logic Bismillah hirahman Nirahim
    //for x it is bw [2][6] and 2 7, 2 7 combes first
    //Alhamdulilah finally got it right
    x_positions_of_blocks_each_level_holder_array[2][Bi] = WW / 4 + considered_sub_cube_width/2;//first quarter plus left side thickness/2  //  i.e mid pt formula Alhamdulilah     // at centre of first half, Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[2][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform) + (L_distance_to_next_platform_level/2);//Note we add to go down Alhamdulilah//last tesm is to bring it down half a distance to next platform... /*  -(pr/2) */
                                                                                                                                                                                                                                                                      //-pr/2 as its centre would lie below this platform by half a platform could also go for using the Distance for stack but i think as it involves gap it is better to use -pr/2 Alhamdulilah rab al alameen, y pos is equal to difference bw y pos of the two platforms/2
    widths_of_blocks_each_level_holder_array[2][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[2][Bi] = LBlockHeight*3;//composed of 3 platforms in height Alhamdulilah
    BlockImageTexture_File_Location[2][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3SPlatformStack.png";

    //now it is hanrder to understand code, is there a way to replace Bi with its valur at a click? do we have to use math notepad? May Allah SWT save us ameen

    Bi = Blocks_of_boundary + 10;

    x_positions_of_blocks_each_level_holder_array[2][Bi] = WW-(WW / 4 + considered_sub_cube_width / 2);         //same thing but from right Alhmadulilah                                                                                                                                                                 // first quarter plus left side thickness/2  //  i.e mid pt formula Alhamdulilah     // at centre of first half, Alhamdulilah
    y_positions_of_blocks_each_level_holder_array[2][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform) + (L_distance_to_next_platform_level / 2); // Note we add to go down Alhamdulilah//last tesm is to bring it down half a distance to next platform... /*  -(pr/2) */
                                                                                                                                                                                                                                                                            //-pr/2 as its centre would lie below this platform by half a platform could also go for using the Distance for stack but i think as it involves gap it is better to use -pr/2 Alhamdulilah rab al alameen, y pos is equal to difference bw y pos of the two platforms/2
    widths_of_blocks_each_level_holder_array[2][Bi] = 2 * considered_sub_cube_width; // I should just use the calculated height of each block being 30.....
    heights_of_blocks_each_level_holder_array[2][Bi] = LBlockHeight * 3;            // composed of 3 platforms in height Alhamdulilah
    BlockImageTexture_File_Location[2][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3SPlatformStack.png";


    pr=4;/////////////////////////////////////////////////////////////////////////
    Bi = Blocks_of_boundary + 11;//remember in a platform centre then left then right then first quarter then last quearter Alhamdulilah Rab Al Alameen

    x_positions_of_blocks_each_level_holder_array[L][Bi]=WW/2;
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = 8*considered_sub_cube_width;
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform5.png";

    Bi = Blocks_of_boundary + 12;//two side pts of 4th range Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (3 * considered_sub_cube_width) / 2;//from left side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (3 * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform2.png";

    Bi = Blocks_of_boundary + 13;

    x_positions_of_blocks_each_level_holder_array[L][Bi] =WW- ((3 * considered_sub_cube_width) / 2); // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (3 * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform2.png";

    pr=5;
    Bi = Blocks_of_boundary + 14;

    //nvm we only needed a single character...Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2):WW/2);//last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H*LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L3Platform6.png";

    //==========Lvl#3============
     // I feel they arent scaling equal to walls so do this, bismillah hirahman nirahim
     // considering distance = 1 block worth of empty space(aka middle range) Alhmaudlilah rab al alameen, no made the gap slightly bigger than before, ok to better the orientation, plan , vhanged to wider gap than block, then decreased player height so switched back, not covering whole screen perhasp make block more in height or restore to gap more than block, ok i felt header bigger wasnt suitable, just made gap bigger than block height, Alhamdulilah rab al alameen
    

     L=3;
     pr = 1;
     Bi = Blocks_of_boundary ; // removed the redundant local vars Alhamdulilah now working on same var
     No_of_blocks_in_W = 2;
     No_of_blocks_in_H = 1;
     place = 'c';
 
     
 
     //New 'f' = first quarter, s= last quarter
     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(place=='f'?(WW / 4):(place=='s'?(WW-(WW / 4)):(custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform.png";

     pr = 2;
     Bi = Blocks_of_boundary + 1; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 6;
     No_of_blocks_in_H = 1;
     place = 'c';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(place=='f'?(WW / 4):(place=='s'?(WW-(WW / 4)):(custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform2.png";

     pr = 3;
     Bi = Blocks_of_boundary + 2; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 10;
     No_of_blocks_in_H = 1;
     place = 'c';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                     : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform3.png";

     pr = 4;
     Bi = Blocks_of_boundary + 3; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 4;
     No_of_blocks_in_H = 1;
     place = 'c';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                     : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform4.png";

     Bi = Blocks_of_boundary + 4; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 4;
     No_of_blocks_in_H = 1;
     place = 'l';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                     : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform5.png";

     Bi = Blocks_of_boundary + 5; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 4;
     No_of_blocks_in_H = 1;
     place = 'r';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                     : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform5.png";

     pr = 5;
     Bi = Blocks_of_boundary + 6; // blovk opposite it Alhamdulilah
     No_of_blocks_in_W = 10;
     No_of_blocks_in_H = 1;
     place = 'c';

     x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                     : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
     y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
     widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
     heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
     BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L4Platform3.png";

     //==========Lvl#4============
     // I feel they arent scaling equal to walls so do this, bismillah hirahman nirahim
     // considering distance = 1 block worth of empty space(aka middle range) Alhmaudlilah rab al alameen, no made the gap slightly bigger than before, ok to better the orientation, plan , vhanged to wider gap than block, then decreased player height so switched back, not covering whole screen perhasp make block more in height or restore to gap more than block, ok i felt header bigger wasnt suitable, just made gap bigger than block height, Alhamdulilah rab al alameen

     // Boss Level

    Bi=Blocks_of_boundary;//removed the redundant local vars Alhamdulilah now working on same var
    pr=1;
    L=4;
    No_of_blocks_in_W=7;
    No_of_blocks_in_H=1;
    place='0';//0 means custom Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform.png";

    Bi = Blocks_of_boundary+1; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 2;
    No_of_blocks_in_W = 8;
    No_of_blocks_in_H = 1;
    place = 'l';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform2.png";

    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    //same pr
    No_of_blocks_in_W = 5;
    No_of_blocks_in_H = 1;
    place = 'r';
    //we could make this a function at the pt....
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform3.png";

    Bi = Blocks_of_boundary + 3; // removed the redundant local vars Alhamdulilah now working on same var
    // same pr
    No_of_blocks_in_W = 5;
    No_of_blocks_in_H = 1;
    place = 'r';
    WS=1;//Stack first Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform4.png";

    Bi = Blocks_of_boundary + 4; // removed the redundant local vars Alhamdulilah now working on same var
    pr=3;
    WS = 0;

    No_of_blocks_in_W=7;
    No_of_blocks_in_H=1;
    place='0';//0 means custom Alhamdulilah

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform.png";

    Bi = Blocks_of_boundary+5; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 4;
    No_of_blocks_in_W = 8;
    No_of_blocks_in_H = 1;
    place = 'l';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) :(place=='c')?( WW / 2):(WW / 4 +40)); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L5Platform2.png";




    //==========Lvl#5============'

    L = 5;
    pr = 1;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6; // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;//left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8.png";

    pr = 2;
    Bi = Blocks_of_boundary+1; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8.png";

    pr = 3;
    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 12;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform.png";
 
    pr = 4;
    Bi = Blocks_of_boundary+3; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8r.png";

    pr = 5;
    Bi = Blocks_of_boundary + 4; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8r.png";

    //==========Lvl#6============//If blobk not placing another block is mistakely over writing that blocks coordinates insteaad of its iwn Alhamdulilah rab al alameen
    L = 6;
    pr = 1;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 2;
    Bi = Blocks_of_boundary+1; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 4;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform7.png";

    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 3;
    Bi = Blocks_of_boundary+3; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 4;
    Bi = Blocks_of_boundary+4; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 12;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform.png";

    pr = 5;
    Bi = Blocks_of_boundary+5; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 4;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform7.png";

   
    //==========Lvl#7============
    L = 7;
    pr = 1;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 2;
    Bi = Blocks_of_boundary + 1; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 3;
    Bi = Blocks_of_boundary + 3; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 4;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform7.png";

    
    Bi = Blocks_of_boundary + 4; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;      // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 4;
    Bi = Blocks_of_boundary + 5; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 12;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform.png";

    //==========Lvl#8============
    L = 8;
    pr = 1;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 12;   // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;   // left left cent ri ri Alhamdulilah
    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform.png";

    pr = 2;
    Bi = Blocks_of_boundary + 1; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    
    pr = 3;

    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    Bi = Blocks_of_boundary + 3; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 3;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 's';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform6.png";

    pr = 4;
    Bi = Blocks_of_boundary + 4; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6;       // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8.png";

    Bi = Blocks_of_boundary + 5; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 6;      // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform8r.png";

    pr = 5;
    Bi = Blocks_of_boundary + 6; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 4;      // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;       // left left cent ri ri Alhamdulilah
    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L6to9Platform7.png";

    //==========Lvl#9============
    L = 9;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 1;
    No_of_blocks_in_W = 4.5;//four and half about Alhamdulilah
    No_of_blocks_in_H = 1;
    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                            : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Platform3.png";

    Bi = Blocks_of_boundary + 1; // blovk opposite it Alhamdulilah
    place = 's';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Platform3.png";

    pr = 2;
    Bi = Blocks_of_boundary+2; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 7.5; // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;
    place = 'l';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Platform2.png";

    Bi = Blocks_of_boundary + 3;//self note found....if exe doesnt load trying  to access undeclared dma, and if throws bad allocation then the thing you are feeding [] in new array is something wrong, especially check if the bad case is hitting if you called a function inside [] I think we should throw exception directly in that case or do error handling bu if==0 then dont dma Allah swt knows best Alhamdulilah rab al alameen
    place = 'r';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Platform2.png";

    pr = 3;
    Bi = Blocks_of_boundary+4; // removed the redundant local vars Alhamdulilah now working on same var
    No_of_blocks_in_W = 11.5; // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;
    place = 'c';

    x_positions_of_blocks_each_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    widths_of_blocks_each_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    heights_of_blocks_each_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\L10Platform.png";

    //remembered whats drawn later pprints oer hence top abd footer are over sides Alhamdulilah rab al alameen

    //////////////////////////////////////////////////////////////////////////////////////////////////////////


    
    //I guess we found out the hard way? pasted the code for initialization inside class....to get red squigly lines...anyways, Alhamdulilah Rab Al Alameen


    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 6" << endl;//Alhamdulilah Rab Al Alameen done with the walls now to slightly fix texture if possible inshallah

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

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 7" << endl;

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

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 8" << endl;
    //========================For Boss Levels==============================================================

    Indexs_of_Boss_Level=new int[No_of_Boss_Levels];
    Indexs_of_Boss_Level[0]=5-1;
    Indexs_of_Boss_Level[1]=10-1;//as start from 0 so -1 Alhamdulilah

    //To add any more working on bosses if any here, inshallah Alhamdulilah Rab Al Alameen

    //========================For Bonus Levels==============================================================


    Indexes_of_Bonus_Levels=new int[No_of_Bonus_levels];

    //assigning indices, which levels out of non boss levels will be bonus,...Note indices take first level as 0

    srand(time(0));

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 10" << endl;

    for(int i=0;i<No_of_Bonus_levels;i++)
    {

        if(No_of_Bonus_levels>(Total_Levels_For_which_Data_is_Present-No_of_Boss_Levels))
        {
            cout<<"Bonus Levels no. not possible, enough feasible levels dont exsist"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;//Alhamdulilah
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

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 11" << endl;

        if (!already_undid_next_index_increment)//if already undid then shouldnt undo again, Alhamdulilah Rab Al Alameen
        {
            for(int j=i-1;j>=0;j--)//if i already 0 then loop just doesnt even start Alhamdulilah
            {//Huge mistake started and then went forward instead of backwards as j++ by comparing with itself, always wrong so kept in infinte loop.... Astigfirullah
                if (Indexes_of_Bonus_Levels[j] == Indexes_of_Bonus_Levels[i])
                {
                    i--;
                    break;//redo Alhamdulilah
                }
            }
        }


        
    }//this basicalled goes on forever if not feasible so,

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 12" << endl;

    
    Bonus_Level_BackgroundImageTexture_File_Locations=new string[No_of_Bonus_levels];
    Bonus_Level_BackgroundImageTexture_File_Locations[0] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LvlBonus.png";
    Bonus_Level_BackgroundImageTexture_File_Locations[1] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LvlBonus.png"; // LvlBonus

    Bonus_Level_MusicSB_File_Locations = new string[No_of_Bonus_levels];//removed accident relocal instead of memeber of this array Alhamdulilah rab al alameen
    Bonus_Level_MusicSB_File_Locations[0] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";

    Bonus_Level_MusicSB_File_Locations[1] =
        "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\snow_bros_theme_01.ogg";//May add new track if needed inshallah, Alhamdulilah

    No_of_Blocks_in_each_bonus_round=new int[No_of_Bonus_levels];

    No_of_Blocks_in_each_bonus_round[0]=Blocks_of_boundary+8;
    No_of_Blocks_in_each_bonus_round[1] = Blocks_of_boundary+5;

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 13" << endl;

    x_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels];
    y_positions_of_blocks_each_bonus_level_holder_array = new float *[No_of_Bonus_levels]; // at respectve level array see no of blocks at that level Alhamdullah Rab Al Alameen
    width_of_each_blocks_bonus_level_holder_array = new float *[No_of_Bonus_levels];
    height_of_each_blocks_bonus_level_holder_array = new float *[No_of_Bonus_levels];//had forgotten to initlialize the ptr arrays in first place and had directly initialized the 1d arrays using those ptrs, fixed that Alhamdulilah rab al alameen (should have given run time  or compile time, as couldnt find or more likkely saying that ptr is null ptr... or actually they didnt even exsist in dma yet so i guess huge issue thrown? ...possible crash....derefrencing uniitialized location,,,...)
    BlockImageTexture_Bonus_Lvl_File_Location = new string *[No_of_Bonus_levels];

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 14" << endl;
    for (int i = 0; i < No_of_Bonus_levels; i++) // Issue was, Loop was using Total No of levels in condiion instead of no of bonus level
    {//have to check if i dmaeed the array of float ptrs up....
        x_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];
        y_positions_of_blocks_each_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]]; // at respective level array see no of blocks at that level Alhamdulilah Rab Al Alameen
        width_of_each_blocks_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];
        height_of_each_blocks_bonus_level_holder_array[i] = new float[No_of_Blocks_in_each_bonus_round[i]];//could make a class of these each to stop the manual writing load........ but well, already done almost now Alhamdulilah
        BlockImageTexture_Bonus_Lvl_File_Location[i] = new string[No_of_Blocks_in_each_bonus_round[i]];
    }

    

    

    for (int i = 0; i < No_of_Bonus_levels; i++) // Creating walls, texture different elsewise same size and position for each level, Alhamdulilah Rab Al Alameen
    {
        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.6.i:" << i << " " << endl;
        string Wanted_Texture_Header_FL; // ensuring there is a new local scope each iteration to ensure no trouble of removing the initialy present work in it, Alhamdulilah Rab Al Alameen
        string Wanted_Texture_Footer_FL;
        string Wanted_Texture_Sides_FL;

        if (i >= 0 && i <= 3) // Note file names are +1 to index s of level that are in it Alhamdulilah rab al alameen Alhamdulilah rab al alameen
        {
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBHeader.png";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBFooter.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBSides.png ";
        }
        else//for resclability kept seprate although same things alloted ALhamdulilah rab al alameen
        {
            Wanted_Texture_Header_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBHeader.png";
            Wanted_Texture_Footer_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBFooter.png ";
            Wanted_Texture_Sides_FL = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBSides.png ";
        }

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.7.i:" << i << " " << endl;
        //cout << Wanted_Texture_FL << endl;

        // Left Wall, considering each sub block is 20 tall and 20 wide, so the whole wall should be stack of 25 blocks, that is 20 wide and 500 heigh or vice versa, centre one at 10 and the other at 250 Alhamdulilah Rab Al Alameen
        // For left specifically, y at 250 and x at 10, as you notice both position will be at half of full sizes as becomes orign and then places , to ensure that the block summoned stays entirely on screen not leaking out, Alhadmulilah Rab AL Alameen
        x_positions_of_blocks_each_bonus_level_holder_array[i][0] = considered_sub_cube_width / 2;   // Note: although the walls can be done in a loop, but we try to keep the wall texture variable
        y_positions_of_blocks_each_bonus_level_holder_array[i][0] = Window_view_Size.Win_Height / 2; // these are used to call the relative size & position function later on so work perfectly Alhamdulilah Rab Al Alameen
        width_of_each_blocks_bonus_level_holder_array[i][0] = considered_sub_cube_width;
        height_of_each_blocks_bonus_level_holder_array[i][0] = Window_view_Size.Win_Height; // Alhamdulilah Rab Al Alameen

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.7.5.i:" << i << " " << endl;

        BlockImageTexture_Bonus_Lvl_File_Location[i][0] = Wanted_Texture_Sides_FL; // oops accidently went overbound, resolved Alhamdulilah Rab Al Alameen

        //cout << "Bismillah Hirahman Nirahim Storage Construction Test 5.8.i:" << i << " " << endl;

        // Right, left shifted to right side by taking left x position and doing 500 - that, the sizes remain the same Alhamdulilah Rab Al Alameen, so does the ya pos
        x_positions_of_blocks_each_bonus_level_holder_array[i][1] = Window_view_Size.Win_Width - considered_sub_cube_width / 2; // Just think that it is left boundary move right wards by increasing x, which you get equal as left was from left corner of screen (its x pos) but right corner is 500, so to get equal distance we subtract from 500, Alhamdulilah Rab AL Alameen
        y_positions_of_blocks_each_bonus_level_holder_array[i][1] = Window_view_Size.Win_Height / 2;
        width_of_each_blocks_bonus_level_holder_array[i][1] = considered_sub_cube_width;
        height_of_each_blocks_bonus_level_holder_array[i][1] = Window_view_Size.Win_Height; // Alhamdulilah Rab Al Alameen
        BlockImageTexture_Bonus_Lvl_File_Location[i][1] = Wanted_Texture_Sides_FL;

        // Top Wall,x centre at 250 so it doent escape out, y centre at 10, width full screen, Width instead of height, but we are assuming subcubes...I beleieve that boundaries may get thin or thick depending on resultion but they will cover any resolution inshallah May Allah help us Ameen
        x_positions_of_blocks_each_bonus_level_holder_array[i][2] = Window_view_Size.Win_Width / 2;
        y_positions_of_blocks_each_bonus_level_holder_array[i][2] = considered_sub_cube_width / 2;
        width_of_each_blocks_bonus_level_holder_array[i][2] = Window_view_Size.Win_Width; // note cube with=cube height
        height_of_each_blocks_bonus_level_holder_array[i][2] = considered_sub_cube_width; // Alhamdulilah Rab Al Alameen
        BlockImageTexture_Bonus_Lvl_File_Location[i][2] = Wanted_Texture_Header_FL;

        // Reordereing ensuring left and right come over top and bottom for design, as drawn in order,0 --- so on, Alhamdulilah Rab Al alameen

        // Bottom is similar to top shifted down, just y value of position taken wrt down corner of screem ie Window res-position of x of top, Alhamdulilah Rab Al Alameen
        x_positions_of_blocks_each_bonus_level_holder_array[i][3] = Window_view_Size.Win_Width / 2;                             // Rememeber x remains unaltered from top but y is different, Alhamdulilah Rab Al Alameen, Bismillah Hirahman Nirahim, Test
        y_positions_of_blocks_each_bonus_level_holder_array[i][3] = Window_view_Size.Win_Width- considered_sub_cube_width / 2 - size_of_hot_bar_at_bottom/2; // here the no of sub cubes constintuesnts of figures get as per resolution and we dont directly touch that, Alhamdulilah Rab AL ALameen
        width_of_each_blocks_bonus_level_holder_array[i][3] = Window_view_Size.Win_Width;                                      // Perhaps we could replace the single block texture in files to whole wall one, Allah SWT knows best, Alhamdulilah Rab Al Alameen
        height_of_each_blocks_bonus_level_holder_array[i][3] = considered_sub_cube_width+size_of_hot_bar_at_bottom;//So hotbar leaves extra space at bottom for UI Alhamdulilah Rab Al Alameen                                      // Alhamdulilah Rab Al Alameen
        BlockImageTexture_Bonus_Lvl_File_Location[i][3] = Wanted_Texture_Footer_FL;                                 // Deadline was extended Alhamdulilah, Oh ALlah SWT please help me complete this project Ameen
    }
    //===================LvlB#1======================

    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 14.5" << endl;//std bad allocation is thrown when compiler fails to allocate memeory may be due to exhastion of RAM
    L = 0;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 1;
    No_of_blocks_in_W = 5; // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;
    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    Bi = Blocks_of_boundary+1;
    place = 'r';

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    //nextpr 3s
    pr = 2;
    Bi = Blocks_of_boundary + 2;
    place = 'l';
    No_of_blocks_in_W = 3;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform2.png";

    Bi = Blocks_of_boundary + 3;
    place = 'r';
    No_of_blocks_in_W = 3;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform2.png";

    //pr 3

    pr = 3;
    Bi = Blocks_of_boundary + 4;
    place = 'l';
    No_of_blocks_in_W = 3;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform2.png";

    Bi = Blocks_of_boundary + 5;
    place = 'r';
    No_of_blocks_in_W = 3;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform2.png";

    //pr 4

    pr = 4;
    Bi = Blocks_of_boundary + 6;
    place = 'l';
    No_of_blocks_in_W = 4;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform3.png";

    Bi = Blocks_of_boundary + 7;
    place = 'r';
    No_of_blocks_in_W = 4;

    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform3.png";

    //===================LvlB#2======================
    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 15" << endl;

    L = 1;
    Bi = Blocks_of_boundary; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 1;
    No_of_blocks_in_W = 5; // four and half about Alhamdulilah
    No_of_blocks_in_H = 1;
    place = 'r';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    //pr 2

    
    Bi = Blocks_of_boundary+1; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 2;
    // Alhamdulilah
   
    place = 's';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    // pr 3

    Bi = Blocks_of_boundary + 2; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 3;
    // Alhamdulilah

    place = 'c';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    // pr 4

    Bi = Blocks_of_boundary + 3; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 4;
    // Alhamdulilah

    place = 'f';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    // pr 5

    Bi = Blocks_of_boundary + 4; // removed the redundant local vars Alhamdulilah now working on same var
    pr = 5;
    // Alhamdulilah

    place = 'l';

    // New 'f' = first quarter, s= last quarter
    x_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = (place == 'r') ? (WW - ((No_of_blocks_in_W * considered_sub_cube_width) / 2)) : ((place == 'l') ? ((No_of_blocks_in_W * considered_sub_cube_width) / 2) : (place == 'c') ? (WW / 2)
                                                                                                                                                                                                                                    : (place == 'f' ? (WW / 4) : (place == 's' ? (WW - (WW / 4)) : (custom_calculation)))); // last case is centre Alhamdulilah rab al alameen, do by manually for custom, ALhamdulilah rab al alameen // from right side
    y_positions_of_blocks_each_bonus_level_holder_array[L][Bi] = Window_view_Size.Win_Height - Alvation_by_base_boundary - (pr * L_distance_to_next_platform_level) - (WS * LDistance_Required_to_be_on_top_of_previous_platform);
    width_of_each_blocks_bonus_level_holder_array[L][Bi] = (No_of_blocks_in_W * considered_sub_cube_width);
    height_of_each_blocks_bonus_level_holder_array[L][Bi] = No_of_blocks_in_H * LBlockHeight;
    BlockImageTexture_Bonus_Lvl_File_Location[L][Bi] = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\LBPlatform4.png";

    //////////////////////////////////////////////////////////////////////////////////
    //cout << "Bismillah Hirahman Nirahim Storage Construction Test 16" << endl;

    cout << "--------------------------"<<"\n" << endl;
    cout << "Indices of Bonus Levels"<<"\n" << endl;

    for(int i=0;i<No_of_Bonus_levels;i++)
    {
        cout << "Indices of Bonus Level:"<<i<<" = "<<Indexes_of_Bonus_Levels[i]<<"\n" << endl;
    }

    cout << "--------------------------"<<"\n" << endl;

    cout << "Indices of Boss Levels"<<"\n" << endl;

    for(int i=0;i<No_of_Boss_Levels;i++)
    {
        cout << "Indices of Boss Level:"<<i<<" = "<<Indexs_of_Boss_Level[i]<<"\n" << endl;
    }
    cout << "--------------------------"<<"\n" << endl;

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

        delete[] width_of_each_blocks_bonus_level_holder_array[i];

        delete[] height_of_each_blocks_bonus_level_holder_array[i];
    }

    // Allah SWT knows best Alhamdulilah Rab Al Alameen
    delete[] x_positions_of_blocks_each_bonus_level_holder_array;

    delete[] y_positions_of_blocks_each_bonus_level_holder_array;

    delete[] width_of_each_blocks_bonus_level_holder_array;

    delete[] height_of_each_blocks_bonus_level_holder_array;
}

//-----------Getters of Stored_Level_Configs::

int Stored_Level_Configs::Total_Levels_For_which_Data_is_Present=10;//to be able to return outside using :: it was made a static again, Alhamdulilah Rab Al Alameen

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

string* Stored_Level_Configs::getBlockImageTexture_File_Location(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return BlockImageTexture_File_Location[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}

//========For Bonus Levels

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
    return 0; // Now plan-> have to sort the indices array of indices soon inshallah, or maybe we wont have to-> we will see working inshallah soon
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
int Stored_Level_Configs::getNo_of_Blocks_in_each_bonus_round(int level) // array that holds no of blocks for each level
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

string *Stored_Level_Configs::getBlockImageTexture_Bonus_lvl_File_Location(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return BlockImageTexture_Bonus_Lvl_File_Location[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}

float *Stored_Level_Configs::getwidth_of_blocks_each_bonus_level_holder_array(int level) // An array that holds arrays in dma on eacg blocks x position in each level, an array per level. Alhamdulilah Rab Al Alameen, rather than copying, we can also just give ptr to that dma,but Level Config shouldnt destroy it but stored should, Alhamdulilah rab al alameen
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return width_of_each_blocks_bonus_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}
float *Stored_Level_Configs::getheight_of_blocks_each_bonus_level_holder_array(int level)
{
    if (level >= 0 && level <= Total_Levels_For_which_Data_is_Present)
    {
        return height_of_each_blocks_bonus_level_holder_array[level]; // note issue was forgot to include get in function name...so var name and function name same-> have to check later if time, inshallah
    }
    return nullptr;
}

//===========For Boss Levels

int Stored_Level_Configs::getNo_of_Boss_levels()
{
    return No_of_Boss_Levels;
}

int Stored_Level_Configs::getIndexs_of_Boss_Level(int index)
{
    if(index>=0&&index<No_of_Boss_Levels)
    return Indexs_of_Boss_Level[index];
    return 0;
}