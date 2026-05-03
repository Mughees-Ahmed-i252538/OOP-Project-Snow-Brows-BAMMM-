#pragma once
#include <iostream>//if giving linker errors, first define  static vars inshallah
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
// #include <SFML/System/Vector2.hpp> although including graphics should work Alhamdulilah
using namespace std;
//Note have to save file before being able to commit changes

class Player;
class Level_Config;//declaaraing ahead of time Alhamdulilah
//self note, you can = something in class for a non static var that is non constant and use normally just default value = that which, but if it is static var and not constant, you must define it at top of a cpp and cant give value Alhamdulilah Rab Al Alameen
enum class x_Direction//we can also do non class but that way its parts simply work  like normal vars, I believe.... hence class
{
    Idle=0,
    Left=-1,//changed left to -1 to be used in image flipping as well, as setscale(-1,1) flips image horizontally, Inshallah we wont need to flip vertically seeing from images Alhamdulilah Rab Al Alameen
    Right=1//basically made 3 intergers like things....Alhaamdulilah

};//these are types not data memebers and hence can be accessed as if public Alhamdulilah Rab AL Alameen also you cant change their values in code so Alhamdulilah Rab Al Alameen

enum class y_State // we can also do non class but that way its parts simply work  like normal vars, I believe.... hence class
{
    Stationary = 0,
    Rising = 1, // changed left to -1 to be used in image flipping as well, as setscale(-1,1) flips image horizontally, Inshallah we wont need to flip vertically seeing from images Alhamdulilah Rab Al Alameen
    Falling = -1  // basically made 3 intergers like things....Alhaamdulilah

};

enum class State: char{

    w,//ok i am keeping char just to remember
    r,
    j
};//walking running,jumping

class Entity//to make this an abstract class soon inshallah, but for now all majour methods taken care of by constructors, when making getter and setters perhaps, as might be using specififc things inshallah
{

private:
    sf::Vector2f spawnpoint;   // tells us the position, initialize location to here
    static float Usable_Movement_Speed;                  // similar to max speed only for left and right
                                             // for velocity of jump and fall down

    sf::Vector2f Size_Wanted;//Whats done: Wanted size is obtained by calling a function that changes  actual picture size to wanted using a scaling trick and comparision, Alhamdulilah rab al alameen
                                       
    //we need to see if we have to change this while aniimating inshallah Alhamdulilah
    sf::Texture texture;//each class can only have one texture but for animation it is needed moving Alhamdulilah, changed to nnon static to avoid issue, however constructor will auto load from same file
    sf::Sprite sprite;
    sf::RectangleShape Debug_box;//its size is determined in constructor of respective class Alhamdulilah Rab Al Alameen, The debuf button will work to change color of this bbox from invisible (initilaized in constructor) to another color (different for projectiles, players and enemies) Alhamdulilah Rab Al Alameen (I believe platform are not entities) Alhamdulilah Rab Al Alameen
   

protected:
    /* float gravity = 0.8;//very small because added 30 times per second...
    sf::Clock gravity_timer;//to ease calculation done every less time
    float gravity_timer_accumulator=0;
    float gravity_applied_only_every_in_seconds=0.2;
     */
    float how_much_of_sprite_is_debug_box=0.7;
    float Mass;

    void Entity::ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition);
    void Entity::ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::RectangleShape &shape, sf::Vector2f Wantedposition);
    void ForRelativeSizeAndPostionSprite_Entity_Copy(float NeededWidth, float NeededHeight, sf::Sprite &sprite, sf::Vector2f Wantedposition);
    void ForRelativeSizeAndPostionText_Entity_Copy(float NeededWidth, float NeededHeight, sf::Text &text, sf::Vector2f Wantedposition);

    public :
    // you can and often must use the syntax : ParentClass(parameters) in a child class constructor to pass arguments to a base clas (found on slighht search Alhamdulilah rab al alameen)
    Entity(sf::Vector2f spawn_at, float mass); // specific spawnpoint differnt for each class however using initializer list this allows us to set spawn point Alhamdulilah rab al alameen, Note verridden functions in a child class cannot directly access private members of a parent class.
// Also sets current position of spawn point Alhamdulilah, setting current velocity to zero, also sets mass and default movement speed of obj Alhamdulilah rab al alameen
// sprite, texture and debug box to be set using setters as their calculations are to be inside the comstructors of respective classses themselves, Alhamdulilah Rab Al Alameen
//  Ayan's suggestion for abstract class when he was orignally handling inittial structure before take over virtual void draw()=0;
// Allah SWT knows best, Alhamdulilah rab al alameen

void display(sf::RenderWindow &window, bool Debug_Mode_Show_Debug_Boxes); // Bismillah Hirahman Nirahim
void setUsable_Movement_Speed(double s);
double getUsable_Movement_Speed();
virtual void setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position) = 0; // shift move to entity, also keep track of position in each. Or better make move a virtual inherited function Inshallah, also keep colors for debug boxes using over riding make it a pure virtual here, enemy debug boxes red, player blue, projectile yellow, powerup green Alhamdulilah Rab al alameen
sf::Vector2f getSpawnPoint();                                                                                                                            // kept as value, as spawn pt cant and shouldnt be modified after initializing, Alhamdulilah Rab Al Alameen
virtual void Move() = 0;

protected: // as theey allow access they cant be and shouldnt be used outside heirchy Alhamdulilah Rab Al Alameen
sf::Texture &getTexture();
sf::Sprite &getSprite(); // to make these functions private if needed
void setTextureRect(sf::IntRect Sub_part_inside_sprite_sheet, bool cc_or_not);
sf::RectangleShape &getDebugBox();
// move left and right kept for player, Enemies will use an Ai Algorithm in move inshallah

// virtual void update_Part_of_Sprite_sheet()=0;//Bismillah Hirahman Nirahim, to be used for animation changes in image Alhamdulilah Rab Al Alameen

bool Sprite_Already_Horizontally_Flipped = false;
float Current_position_x, Current_position_y; // This is used as redundant variable, for ease of calculation, its value is stored after each movement in Move Left and Move Right, It is mainly helpful for ease of understanding while also simulatanously changing position for hitbox (also acting as health box being called as debug box) Alhamdulilah Rab Al Alameen
float Current_velocity_x, Current_velocity_y; // tell us theh velocity, 0 or non 0 based on key press

int Part_of_Sprite_sheet_x;
int Part_of_Sprite_sheet_y;
int Part_of_Sprite_sheet_width;
int Part_of_Sprite_sheet_height;

// to solve bloadting,...think it like this, the above is the inside file actual coordinates, meanwhile these are what we need to display coordinates, Alhamdulilah
// I notice we dont need to track orignal location-> already done in spawn point so remove this sets x and y Alhamdulilah
int Wanted_For_Display_Part_of_Sprite_sheet_width; // I saw that we did resizing inside Set sprite after  getting sub texture but didnt do so in movement, hence the bloating, to solve we just need to manage these two in parallel, Alhamdulilah Rab Al Alameen
int Wanted_For_Display_Part_of_Sprite_sheet_height;
friend void Collusion_Detector(int No_of_Players, Player **Players, Level_Config *levelConfig);

};//changingm movement speed update in setter instead Alhamdulilah Bismillah hirahman nirahim
class Player : public Entity//if issues arrive while calling constructor as is a DMA array then make DMA array a * to & and make P1 and P2 as simple dmas behind inshallah andd calling constructor
{

private:

    //Will be used inshallah soon
    //Snowballs snowballs; include throw snow balls function instead that creates a snowball by dma, note all entity disapearing will be managed by deleting dama Alhamdulilah rab al alameen
    float Snow_Ball_Throw_Distance;
    float Snow_Ball_Power;
    bool Gotten_Hit_Imunity;
    static double Hit_imunity_duration;//for mobs, every level configration haas such a spawn pt array for them along with their type and numbers (possibly using a class for mobsb spawn pt and adta, inshallah) Alhamdulilah Rab Al Alameen
    //Used

    static sf::Vector2f Spawn_Points[2];

    static string File_From_Where_To_Load_Resources_names[5];

    int player_id;//which player 0 or 1

    static float Player_sprite_height_to_display;

    static float Player_sprite_width_to_display;

    static int Standard_Default_Player_Mass;//Alhamdulilah Rab Al Alameen, although seems redundant it is better than hardcoding a mass value into code
    static int Standard_Default_Player_Speed;

    static int No_of_Spawn_points_present;//Note this is used to get size of static (fixed length array) not used to initialize a dynamic length array Alhamdulilah rab al alameen

    static int No_of_Player_Sprite_and_related_present;

    static int Player_Count; // currently 0, first player, it becomes 1 which is used to get second indice of spawn pt array for p2

    sf::SoundBuffer FootStepsSB;
    sf::Sound FootStepsS;

    sf::Clock Has_Been_Moving_in_same_direction_Animation_updation_counter;//eg for Walking Alhamdulilah
    int  Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder;//while clock resets in every loop, giving us time taken for that loop, this holder accumulates that clock value, this is what is directly used for animation next image text rect selecter after static cast to int, Alhamdulilah rab al alameen

    x_Direction x_Action_To_Move_in_Direction_Variable;
    x_Direction x_Previously_Moving_in;//if Action to move in is same as previous then keep acumulating timer for next animation image
    x_Direction Currently_Faces;

    //bool Action_to_jump;// Right now forgetting baloon mode player doesnt have power to go down except gravity hence only action to jump right now, Alhamdulilah
    //actually just the function called Make Action to jump shall be enough inshallah, as jump is euphemeral and instantanous, it also doesnt happen after leaving ground, only after Landing, that is being Stationary Alhamdulilah rab al alameen
    float jump_speed=5;//remember - is up but that will be seen in respective funtions as this is speed not velocity Alhamdulilah rab al alameen
    float jump_span=20;//in iterations
    //Bismillah hirahman nirahim
    //Bismillah hirahman Nirahim

    sf::Clock Has_Been_Rolling_Animation_updation_counter;
    int Has_Been_Rolling_Animation_updation_counter_updation_Holder;
    y_State Current_y_State=y_State::Stationary;//lets try to skip gravity and keep matters separate from x motion along with making it single trigger not hold trigger jump inshallah, Alhamdulilah rab al alameen
    bool reset_roll_animation_timer=false;
    //set y state stationary at default to allow movement at start Alhamdulilah
    //Single trigger solves alot of things Alhamdulilah rab al alameen, at jump just put velocity = - jump speed Alhamdulilah Rab Al Alameen

    bool Block_underneath;
    bool Action_To_Jump=false;
    //Bismillah hirahman Nirahim, starting the jump and y dimension work in the name of Allah SWT with whose name there is barakah, Oh Allah Please put Barakah in this work and please accept our small actions, Please also forgive our mistakes, Ya Zuljalal e wal ikraam Ameen sum ameen ya rab al alameen ya arham ar rahimeen ! 

    /*  y_Direction y_Action_To_Move_in_Direction_Variable;
     y_Direction y_Previous_State;
     y_Direction y_State ; // Jumping falling or idle Alhamdulilah rab al alameen
     
     float jump_velocity=5;
     int terminal_velocity=10; */

    int total_no_of_images_in_walking_animation = 3;
    int total_no_of_images_in_rolling_animation = 6;

    //If direction changes then reset accumulator and switch direction, Alhamdulilah Rab Al Alameen
    //Removed void setSprite_and_cocentric_Debug_box();//box color blue inshallah

    bool reverse_image;//general for each animation Alhamdulilah
    float Animation_Speed=10;//Determines how fast next image comes, Alhamdulilah Rab Al Alameen

    //prevents downwards velocity from being too much Alhamdulilah rab al alameen, Being super professional we can even use the acti=ual formulah Alhamdulilah rab al alameen
    //remove tv and now uses if condition ALhamdulilah
    //readded now as if cindition Alhamdulilah
    //needed int for the % but if want float can do changes in function and use the *100 into int and then back conversion Alhamdulilah rab al alameen

    public : void x_Action_To_Move(x_Direction d); // sets which direction player wants to move in, before key check sets to idle, after key check if held then changes direction but actual move is called after key check
    //void y_Action_To_Move(y_Direction d);//this is basically jump but kept so for addable changes like balloon mode inshallah Alhamdulilah rab al alameen
    void Move();//This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah

    /* void Move_Left();//Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
    void Move_Right();//sets to +x */
    void Move_Left_Right_and_Animate();//Bismillah Hirahman Nirahim trying with Walk Alhamdulilah
    void Jumping_Animate();
    void Jump();
    void Fall();
    void is_Not_Moving();
    void Falling();

    Player(int Which_design_choosen_out_of_given); //loads the respective texture from the static string array of file names Alhamdulilah Rab Al Alameen

    void setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position);

    friend void Collusion_Detector(int No_of_Players, Player **Players, Level_Config *levelConfig);//can you declare friend in private: Will have to try later inshallah?

     /* void input_handling_player(char button);

    void draw();by ayan */

    void SendtoSpawnPt();

    void Make_Action_To_Jump();
};


class Enemy: public Entity
{
    static int Hits_To_encase;//assigned for each distribution of enemy class but a sub enemy and level mob class takes same amount of hits Alhamdulilah 

    public:
    //Removed void setSprite_and_cocentric_Debug_box();//box color red inshallah
};

class Botom: public Enemy
{

    // Will be used inshallah soon
    // for mobs, every level configration haas such a spawn pt array for them along with their type and numbers (possibly using a class for mobsb spawn pt and adta, inshallah) Alhamdulilah Rab Al Alameen
    

    

    int Botom_id; // which Botom 0 or 1

    static float Botom_sprite_height_to_display;

    static float Botom_sprite_width_to_display;

    static int Standard_Default_Botom_Mass; // Alhamdulilah Rab Al Alameen, although seems redundant it is better than hardcoding a mass value into code
    static int Standard_Default_Botom_Speed;

    static int No_of_Spawn_points_present; // Note this is used to get size of static (fixed length array) not used to initialize a dynamic length array Alhamdulilah rab al alameen

    static int No_of_Botom_Sprite_and_related_present;

    static int Botom_Count; // currently 0, first Botom, it becomes 1 which is used to get second indice of spawn pt array for p2

    sf::SoundBuffer FootStepsSB;
    sf::Sound FootStepsS;

    sf::Clock Has_Been_Moving_in_same_direction_Animation_updation_counter;           // eg for Walking Alhamdulilah
    int Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder; // while clock resets in every loop, giving us time taken for that loop, this holder accumulates that clock value, this is what is directly used for animation next image text rect selecter after static cast to int, Alhamdulilah rab al alameen

    x_Direction x_Action_To_Move_in_Direction_Variable;
    x_Direction x_Previously_Moving_in; // if Action to move in is same as previous then keep acumulating timer for next animation image
    x_Direction Currently_Faces;

    // bool Action_to_jump;// Right now forgetting baloon mode Botom doesnt have power to go down except gravity hence only action to jump right now, Alhamdulilah
    // actually just the function called Make Action to jump shall be enough inshallah, as jump is euphemeral and instantanous, it also doesnt happen after leaving ground, only after Landing, that is being Stationary Alhamdulilah rab al alameen
    float jump_speed = 5; // remember - is up but that will be seen in respective funtions as this is speed not velocity Alhamdulilah rab al alameen
    float jump_span = 20; // in iterations
    // Bismillah hirahman nirahim
    // Bismillah hirahman Nirahim

    // only one image for jumping Alhamdulilah rab al alameen
    y_State Current_y_State = y_State::Stationary; // lets try to skip gravity and keep matters separate from x motion along with making it single trigger not hold trigger jump inshallah, Alhamdulilah rab al alameen

    // set y state stationary at default to allow movement at start Alhamdulilah
    // Single trigger solves alot of things Alhamdulilah rab al alameen, at jump just put velocity = - jump speed Alhamdulilah Rab Al Alameen

    bool Block_underneath;
    bool Action_To_Jump = false;
    // Bismillah hirahman Nirahim, starting the jump and y dimension work in the name of Allah SWT with whose name there is barakah, Oh Allah Please put Barakah in this work and please accept our small actions, Please also forgive our mistakes, Ya Zuljalal e wal ikraam Ameen sum ameen ya rab al alameen ya arham ar rahimeen !

    /*  y_Direction y_Action_To_Move_in_Direction_Variable;
     y_Direction y_Previous_State;
     y_Direction y_State ; // Jumping falling or idle Alhamdulilah rab al alameen

     float jump_velocity=5;
     int terminal_velocity=10; */

    int total_no_of_images_in_walking_animation = 3;

    // If direction changes then reset accumulator and switch direction, Alhamdulilah Rab Al Alameen
    // Removed void setSprite_and_cocentric_Debug_box();//box color blue inshallah

    bool reverse_image;         // general for each animation Alhamdulilah
    float Animation_Speed = 10; // Determines how fast next image comes, Alhamdulilah Rab Al Alameen

    // prevents downwards velocity from being too much Alhamdulilah rab al alameen, Being super professional we can even use the acti=ual formulah Alhamdulilah rab al alameen
    // remove tv and now uses if condition ALhamdulilah
    // readded now as if cindition Alhamdulilah
    // needed int for the % but if want float can do changes in function and use the *100 into int and then back conversion Alhamdulilah rab al alameen

public:
    void x_Action_To_Move(x_Direction d); // sets which direction Botom wants to move in, before key check sets to idle, after key check if held then changes direction but actual move is called after key check
    // void y_Action_To_Move(y_Direction d);//this is basically jump but kept so for addable changes like balloon mode inshallah Alhamdulilah rab al alameen
    void Move(); // This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah

    /* void Move_Left();//Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
    void Move_Right();//sets to +x */
    void Move_Left_Right_and_Animate(); // Bismillah Hirahman Nirahim trying with Walk Alhamdulilah
    void Jumping_Animate();
    void Jump();
    void Fall();
    void is_Not_Moving();
    void Falling();

    Botom(int Which_design_choosen_out_of_given); // loads the respective texture from the static string array of file names Alhamdulilah Rab Al Alameen

    void setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position);

    friend void Collusion_Detector(int No_of_Botoms, Botom **Botoms, Level_Config *levelConfig); // can you declare friend in private: Will have to try later inshallah?

    /* void input_handling_Botom(char button);

   void draw();by ayan */

    //void SendtoSpawnPt();//enemies are destroyed and remode so they dont need this ALhamdulilah rab al alameen

    void Make_Action_To_Jump();
};


class Botom_Lvl_1_5: public Botom
{
    //static sf::Vector2f Spawn_Points[2];//given by level Alhamdulilah rab al alameen

    static string File_From_Where_To_Load_Resources_names ;
};

class Botom_Lvl_6_7 : public Botom
{
    static string File_From_Where_To_Load_Resources_names;
};

class Botom_Lvl_7_8 : public Botom//considering both appear Alhamdulil 7 is common
{
    static string File_From_Where_To_Load_Resources_names;
};

class Botom_Lvl_8_9 : public Botom // considering both appear Alhamdulil 8 is common
{
    static string File_From_Where_To_Load_Resources_names;
};

class Flying_Fooga_Foog: public Enemy//note every specific has its own file loacation to load from Alhamdulilah
{
   
};

class Flying_Fooga_Foog_Lvl_1_5 : public Flying_Fooga_Foog
{
    static string File_From_Where_To_Load_Resources_names ;
    //Mass =0
};

class Flying_Fooga_Foog_Lvl_6_7 : public Flying_Fooga_Foog
{
    static string File_From_Where_To_Load_Resources_names ;
};

class Flying_Fooga_Foog_Lvl_7_8 : public Flying_Fooga_Foog
{
    static string File_From_Where_To_Load_Resources_names ;
};

class Flying_Fooga_Foog_Lvl_8_9 : public Flying_Fooga_Foog
{
    static string File_From_Where_To_Load_Resources_names;
};



class Tornado :public Enemy
{

};

class Tornado_Lvl_1_5 : public Tornado
{
    static string File_From_Where_To_Load_Resources_names ;
};

class Tornado_Lvl_6_7 : public Tornado
{
    static string File_From_Where_To_Load_Resources_names ;
};

class Tornado_Lvl_7_8 : public Tornado
{
    static string File_From_Where_To_Load_Resources_names ;
};

class Tornado_Lvl_8_9 : public Tornado
{
    static string File_From_Where_To_Load_Resources_names;
};

class Projectile: virtual public Entity
{
public:
//Removed void setSprite_and_cocentric_Debug_box();//Box color yellow
};

class Snowballs: public Projectile
{

};

class Knives : public Projectile
{
};


class Power_Ups: public Entity
{
public:
    // Removed void setSprite_and_cocentric_Debug_box();
};//box color green

class Speed_Boost : public Power_Ups
{};

class Snowball_Power : public Power_Ups
{};

class Distance_Increase : public Power_Ups
{
};

class Balloon_Mode : public Power_Ups
{
};

