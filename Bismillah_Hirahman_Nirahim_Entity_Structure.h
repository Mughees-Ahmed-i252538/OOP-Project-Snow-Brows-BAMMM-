
#include <iostream>//if giving linker errors, first define  static vars inshallah
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
// #include <SFML/System/Vector2.hpp> although including graphics should work Alhamdulilah
using namespace std;
//Note have to save file before being able to commit changes


enum class Direction//we can also do non class but that way its parts simply work  like normal vars, I believe.... hence class
{
    Idle=0,
    Left=1,
    Right=2//basically made 3 intergers like things....Alhaamdulilah

};

class Entity//to make this an abstract class soon inshallah, but for now all majour methods taken care of by constructors, when making getter and setters perhaps, as might be using specififc things inshallah
{

private:
    sf::Vector2f spawnpoint;   // tells us the position, initialize location to here
    float Current_position_x, Current_position_y;//This is used as redundant variable, for ease of calculation, its value is stored after each movement in Move Left and Move Right, It is mainly helpful for ease of understanding while also simulatanously changing position for hitbox (also acting as health box being called as debug box) Alhamdulilah Rab Al Alameen
    float Current_velocity_x, Current_velocity_y; // tell us theh velocity, 0 or non 0 based on key press
    static float Usable_Movement_Speed;                  // similar to max speed only for left and right
    float Mass;                                          // for velocity of jump and fall down

    sf::Vector2f Size_Wanted;//Whats done: Wanted size is obtained by calling a function that changes  actual picture size to wanted using a scaling trick and comparision, Alhamdulilah rab al alameen
                                       
    //we need to see if we have to change this while aniimating inshallah Alhamdulilah
    sf::Texture texture;//each class can only have one texture but for animation it is needed moving Alhamdulilah, changed to nnon static to avoid issue, however constructor will auto load from same file
    sf::Sprite sprite;
    sf::RectangleShape Debug_box;//its size is determined in constructor of respective class Alhamdulilah Rab Al Alameen, The debuf button will work to change color of this bbox from invisible (initilaized in constructor) to another color (different for projectiles, players and enemies) Alhamdulilah Rab Al Alameen (I believe platform are not entities) Alhamdulilah Rab Al Alameen


public:
    // you can and often must use the syntax : ParentClass(parameters) in a child class constructor to pass arguments to a base clas (found on slighht search Alhamdulilah rab al alameen)
    Entity(sf::Vector2f spawn_at, float mass); // specific spawnpoint differnt for each class however using initializer list this allows us to set spawn point Alhamdulilah rab al alameen, Note verridden functions in a child class cannot directly access private members of a parent class.
    //Also sets current position of spawn point Alhamdulilah, setting current velocity to zero, also sets mass and default movement speed of obj Alhamdulilah rab al alameen
    //sprite, texture and debug box to be set using setters as their calculations are to be inside the comstructors of respective classses themselves, Alhamdulilah Rab Al Alameen
    // Ayan's suggestion for abstract class when he was orignally handling inittial structure before take over virtual void draw()=0;
    //Allah SWT knows best, Alhamdulilah rab al alameen

    void display(sf::RenderWindow &window,bool Debug_Mode_Show_Debug_Boxes);//Bismillah Hirahman Nirahim
    void setUsable_Movement_Speed(double s);
    virtual void setSprite_and_cocentric_Debug_box()=0;//shift move to entity, also keep track of position in each. Or better make move a virtual inherited function Inshallah, also keep colors for debug boxes using over riding make it a pure virtual here, enemy debug boxes red, player blue, projectile yellow, powerup green Alhamdulilah Rab al alameen
    //Bismillah hirahman nirahim, Plan

};//changingm movement speed update in setter instead Alhamdulilah Bismillah hirahman nirahim
class Player : public Entity//if issues arrive while calling constructor as is a DMA array then make DMA array a * to & and make P1 and P2 as simple dmas behind inshallah andd calling constructor
{

private:

    bool jump_state;
    //Snowballs snowballs; include throw snow balls function instead that creates a snowball by dma, note all entity disapearing will be managed by deleting dama Alhamdulilah rab al alameen
    float Snow_Ball_Throw_Distance;
    float Snow_Ball_Power;

    bool Gotten_Hit_Imunity;
    static double Hit_imunity_duration;//for mobs, every level configration haas such a spawn pt array for them along with their type and numbers (possibly using a class for mobsb spawn pt and adta, inshallah) Alhamdulilah Rab Al Alameen

    static sf::Vector2f Spawn_Points[2];

    static string File_From_Where_To_Load_Resources_names[5];

    int player_id;//which player 0 or 1

    static int No_of_Spawn_points_present;//Note this is used to get size of static (fixed length array) not used to initialize a dynamic length array Alhamdulilah rab al alameen

    static int Player_Count;//currently 0, first player, it becomes 1 which is used to get second indice of spawn pt array for p2

    sf::Clock Has_Been_Moving_in_same_direction_Animation_updation_counter;//eg for Walking Alhamdulilah
    float  Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder;//while clock resets in every loop, giving us time taken for that loop, this holder accumulates that clock value, this is what is directly used for animation next image text rect selecter after static cast to int, Alhamdulilah rab al alameen

    Direction Action_to_Move_in_Direction_Variable;
    Direction Previously_Moving_in;//if Action to move in is same as previous then keep acumulating timer for next animation image
    //If direction changes then reset accumulator and switch direction, Alhamdulilah Rab Al Alameen
    void setSprite_and_cocentric_Debug_box();//box color blue inshallah

    public : void Action_To_Move(Direction d); // sets which direction player wants to move in, before key check sets to idle, after key check if held then changes direction but actual move is called after key check
    void Move();//This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
    void Move_Left();//Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
    void Move_Right();//sets to +x
    
    Player(int Which_design_choosen_out_of_given_five); //loads the respective texture from the static string array of file names Alhamdulilah Rab Al Alameen

    /* void input_handling_player(char button);

    void draw();by ayan */
};


class Enemy: public Entity
{
    static int Hits_To_encase;//assigned for each distribution of enemy class but a sub enemy and level mob class takes same amount of hits Alhamdulilah 

    public:
    void setSprite_and_cocentric_Debug_box();//box color red inshallah
};

class Botom: public Enemy
{
    bool jump_state;
};


class Botom_Lvl_1_5: public Botom
{

};

class Botom_Lvl_6_7 : public Botom
{
};

class Botom_Lvl_7_8 : public Botom//considering both appear Alhamdulil 7 is common
{
};

class Botom_Lvl_8_9 : public Botom // considering both appear Alhamdulil 8 is common
{
};

class Flying_Fooga_Foog: public Enemy
{

};

class Flying_Fooga_Foog_Lvl_1_5 : public Flying_Fooga_Foog
{
    //Mass =0
};

class Flying_Fooga_Foog_Lvl_6_7 : public Flying_Fooga_Foog
{
};

class Flying_Fooga_Foog_Lvl_7_8 : public Flying_Fooga_Foog
{
};

class Flying_Fooga_Foog_Lvl_8_9 : public Flying_Fooga_Foog
{
};



class Tornado :public Enemy
{

};

class Tornado_Lvl_1_5 : public Tornado
{
};

class Tornado_Lvl_6_7 : public Tornado
{
};

class Tornado_Lvl_7_8 : public Tornado
{
};

class Tornado_Lvl_8_9 : public Tornado
{
};

class Projectile: virtual public Entity
{
public:
void setSprite_and_cocentric_Debug_box();//Box color yellow
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
    void setSprite_and_cocentric_Debug_box();
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

