
#include <iostream>
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
using namespace std;

class Entity
{

protected:
    sf::Vector2f spawnpoint;   // tells us the position
    float Current_velocity_x, Current_velocity_y; // tell us theh velocity, 0 or non 0 based on key press
    float Usable_Movement_Speed;                  // similar to max speed only for left and right
    float Mass;                                   // for velocity of jump and fall down

public:
    Entity(sf::Vector2f spawn_at);
    virtual void draw()=0;
};

class Player : public Entity
{

private:

    bool jump_state;
    

public:
    Player();

    void input_handling_player(char button);

    void draw();
};


class Enemy: public Entity
{

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
