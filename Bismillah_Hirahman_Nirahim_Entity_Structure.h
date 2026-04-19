
#include <iostream>
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
// #include <SFML/System/Vector2.hpp> although including graphics should work Alhamdulilah
using namespace std;



enum class Direction//we can also do non class but that way its parts simply work  like normal vars, I believe.... hence class
{
    Idle=0,
    Left=1,
    Right=2//basically made 3 intergers like things....Alhaamdulilah

};

class Entity
{

private:
    sf::Vector2f spawnpoint;   // tells us the position, initialize location to here
    float Current_position_x, Current_position_y;//This is used as redundant variable, for ease of calculation, its value is stored after each movement in Move Left and Move Right, It is mainly helpful for ease of understanding while also simulatanously changing position for hitbox (also acting as health box being called as debug box) Alhamdulilah Rab Al Alameen
    float Current_velocity_x, Current_velocity_y; // tell us theh velocity, 0 or non 0 based on key press
    float Usable_Movement_Speed;                  // similar to max speed only for left and right
    float Mass;                                   // for velocity of jump and fall down
    
    //we need to see if we have to change this while aniimating inshallah Alhamdulilah
    static sf::Texture texture;//each class can only have one texture but for animation it is needed moving Alhamdulilah
    sf::Sprite sprite;
    sf::RectangleShape Debug_box;//its size is determined in constructor of respective class Alhamdulilah Rab Al Alameen, The debuf button will work to change color of this bbox from invisible (initilaized in constructor) to another color (different for projectiles, players and enemies) Alhamdulilah Rab Al Alameen (I believe platform are not entities) Alhamdulilah Rab Al Alameen


public:
    Entity(sf::Vector2f spawn_at);
    //virtual void draw()=0;
};

class Player : public Entity
{

private:

    bool jump_state;
    Snowballs snowballs;
    float Snow_Ball_Throw_Distance;
    float Snow_Ball_Pow;

    sf::Clock Has_Been_Moving_in_same_direction_Animation_updation_counter;//eg for Walking Alhamdulilah
    float  Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder;//while clock resets in every loop, giving us time taken for that loop, this holder accumulates that clock value, this is what is directly used for animation next image text rect selecter after static cast to int, Alhamdulilah rab al alameen

    Direction Action_to_Move_in_Direction_Variable;
    Direction Previously_Moving_in;//if Action to move in is same as previous then keep acumulating timer for next animation image
    //If direction changes then reset accumulator and switch direction, Alhamdulilah Rab Al Alameen

public:
    void Action_To_Move(Direction d);//sets which direction player wants to move in, before key check sets to idle, after key check if held then changes direction but actual move is called after key check
    void Move();//This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
    void Move_Left();//Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
    void Move_Right();//sets to +x
    

public:
    Player();

    void input_handling_player(char button);

    void draw();
};


class Enemy: public Entity
{
    static int Hits_To_encase;//assigned for each distribution of enemy class but a sub enemy and level mob class takes same amount of hits Alhamdulilah
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

};

class Snowballs: public Projectile
{

};

class Knives : public Projectile
{
};
