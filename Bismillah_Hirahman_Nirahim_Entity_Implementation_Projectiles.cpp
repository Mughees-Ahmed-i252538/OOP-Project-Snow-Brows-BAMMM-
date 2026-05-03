#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"


//Aaozbillah minanshartaun nirajeem 
//Bismillah hirahman nirahim

//========Projectiles===========
Projectile::Projectile() 
{//just here.... later found was virtually inheriting so..Well Alhamdulilah bypasses this to call entity const directly ALhamdulilah
}

//========Snowballs=============
int Snowballs::Snowball_Count = 0;
string Snowballs::File_to_load_sprite_from = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\SnowballsProjectile.png";

Snowballs::Snowballs(sf::Vector2f Start_at, float x_speed, Player *Which_players_it_is) : Entity(Start_at, standard_mass) // Cant make consteuctor virtual i beleive, ok so virtual ingheritance in projectile so we have to send to entity directly ALhamdulilah
{
    Snowball_id=Snowball_Count;//Bismillah awala hu wa akhira hu
    //In the name of Allah SWT with whose name these is barakah, ya zuljalale wal ikram
    Snowball_Count++;

    Current_velocity_x=x_speed;
    Current_velocity_y=Always_down_y_speed;

    Which_player_it_blongs_to=Which_players_it_is;//Alhamdulilah 

    sf::FloatRect Wanted_Size_And_Position(getSpawnPoint().x, getSpawnPoint().y, Snowball_sprite_width_to_display, Snowball_sprite_height_to_display);

    // Note one thing, spawn pt already stored, hence now which calling setter for sprite and debug box we can just utilize that....I just got the idea...Alhamdulilah....
    // Note done in Entity class setter for sprite itself, but that makes it multi purpose in some possible findout able way, I will check respawn at places, but lets use spawn pt here, Alhamdulilah Rab Al Alameen
    setSprite_and_cocentric_Debug_box(File_to_load_sprite_from, sf::Color::Yellow, Wanted_Size_And_Position); // debug box fixatedly blue for players, red for enemies, yellow for projections and green for power ups inshallah
}
Snowballs::~Snowballs()
{
    Snowball_Count--;
}
void Snowballs::Move()
{
    getSprite().move(sf::Vector2f(Current_velocity_x,Current_velocity_y));
    getDebugBox().move(sf::Vector2f(Current_velocity_x, Current_velocity_y));

    getSprite().rotate(Angle_to_rotate);
    getDebugBox().rotate(Angle_to_rotate);
}

void Snowballs::setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position)
{
    if (!getTexture().loadFromFile(Load_Texture_From_File))
    {
        // cout << "Log: couldnt load sprite texture for Entity" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    }

    getSprite().setTexture(getTexture());//working like it normally does without functions ALhamdulilah

   
    // cout<<"----------------------------------"<<"\n"<<endl;
    // cout<<"Statistics of Made Entity:\n"<<"\n"<<endl;

    // cout << "local width of sprite sheet :" << getSprite().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "local height of sprite sheet:" << getSprite().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "global width of sprite sheet:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global height of sprite sheet:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "local width of sprite sheet sub part:" << getSprite().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "local height of sprite sheet sub part:" << getSprite().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "global width of sprite sheet sub part before relative size and position wanted:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global height of sprite sheet sub part before relative size and position wanted:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    sf::Vector2f Wanted_Position(Wanted_Size_And_Position.getPosition().x, Wanted_Size_And_Position.getPosition().y); // vector 2f has width first as is x value, Alhamdulilah Rab Al Alameen
    float NeededWidth = Wanted_Size_And_Position.width;
    float NeededHeight = Wanted_Size_And_Position.height;

    // cout<<"Needed Width of Sprite found at proces time"<<NeededWidth<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    // cout << "Needed Height of Sprite found at proces time:" << NeededHeight <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionSprite_Entity_Copy(NeededWidth, NeededHeight, getSprite(), Wanted_Position); //!!!!!!
                                                                                                          // Also sets orign to centre, Alhamdulilah Rab Al Alameen

    // to solve bloadting,...think it like this, the above is the inside file actual coordinates, meanwhile these are what we need to display coordinates, Alhamdulilah
    // we only need to track scale hence orignal waned position x and y trackers removed, Alhamdulilah Rab Al Alameen, If needed these wanteds can be explicity reset too, Alhamdulilah Rab Al Alameen
    
    // Auto Makes the size wanted Alhamdulilah Rab Al ALameen

    // cout << "global width of sprite sheet sub part after relative size and position wanted:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global height of sprite sheet sub part after relative size and position wanted:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    getDebugBox().setSize(sf::Vector2f(1, 1)); // Set size takes argument of sf::Vector2f,  note could also use Needed size in calcualtion but in case we implement changes elsewhere we use it directly here, Alhamdulilah Rab al alameen, (This vector made inside call is a temporary object Alhamdulilah Rab Al Alameen)
    // The Debug Box is 90 percent of orignal shape, to allow it to perfectly be used for collusion and not be escaping shape either, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionShape_Entity_Copy(NeededWidth * how_much_of_sprite_is_debug_box, NeededHeight * how_much_of_sprite_is_debug_box, getDebugBox(), Wanted_Position); // using orignal set size to avoid division with 0, using this function as it also sets origin and All Alhamdulilah Rab Al Alameen
    // This auto sets orign to centre, position to same place as shape etc, hence it is better this way Alhamdulilah Rab Al Alameen

    getDebugBox().setFillColor(Color_of_Debug_Box);

    // float Thickness_of_outline = 10;

    // getDebugBox().setOutlineThickness(Thickness_of_outline); // TO ADJUST ACCORDING TO Size but be uniform, the outline size is respective to Height of box, may seem incosisitant as the bigger the entity the thicker the outline, perhaps choosing to change to constant later on, now set to variable currently 10 Alhamdulilah Rab Al Alameen

    // Old one, now at start, but perhaps some logic differnece, leaving here just in case, Allah SWT know best Alhamdulilah Rab Al Alameen ////cout<<"Setting Sprite Sheet and Debug Box"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

    // cout << "local width of debug box:" << getDebugBox().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "local height of debug box:" << getDebugBox().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "global width of debug box:" << getDebugBox().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global height of debug box:" << getDebugBox().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // Now for location to confirm best spawn points

    ////cout << "local width of debug box:" << getDebugBox().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    ////cout << "local height of debug box:" << getDebugBox().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen To change this to track location of texturect in sprite inshallah

    // cout << "global left of sprite:" << getSprite().getGlobalBounds().left <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global top of sprite:" << getSprite().getGlobalBounds().top <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "x_position of orign of sprite:" << getSprite().getOrigin().x<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "y_position of orign of sprite:" << getSprite().getOrigin().y <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout<< "Now for spawn point of given sprite"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

    // cout << "x_position of spawn point of sprite:" << getSpawnPoint().x <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "y_position of spawn point of sprite:" << getSpawnPoint().y <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout<<"----------------------------------"<<"\n"<<endl;
    //  Alhamdulilah Rab Al Alameen now i can understand sfml better and easier to use to, Alhamdulilah Rab Al Alameen

    // To later inshallah add checks if size is sent 0 as that might start causing issues (from memory:as you can do operations like printing and scaling etc normally, mostly scaling) allah swt knows best Alhamdulilah Rab Al ALameen, especially since we are using the Relative.... Functions that use divisions for comarision Alhamdulilah Rab Al Alameen
}
