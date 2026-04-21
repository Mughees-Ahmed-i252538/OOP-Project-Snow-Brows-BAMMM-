#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"


int Enemy::Hits_To_encase=0;//Alhamdulilah Child class doesnt need to define separately

float Entity::Usable_Movement_Speed=0;

Entity::Entity(sf::Vector2f spawn_at, float mass)
{
    //to define soon inshallah

    spawnpoint=spawn_at;
    Mass=mass;
    Current_position_x=spawn_at.x;
    Current_position_y=spawn_at.y;
    Current_velocity_x=0;
    Current_velocity_y=0;//usable speed actually specified in child's constructor, hence can only be suitable to be done using setters, Alhamdulilah Rab Al Alameen
    //Similarly have to make setters for texture, sprite and debug box, Alhamdulilah Rab Al Alameen, Note whenever constructing sprite dont forget to call the universal size to wanted size (that skips us the issue of managing multiplier of scale by comparing orignal size)Inshallah i will try to recover from assignment 2, May Allah SWT help me, Ameen sum ameen ya rab al alameen ya arham ar rahimeen
}

void Entity::setUsable_Movement_Speed(double s)
{
   this->Usable_Movement_Speed=s; 
}

void Entity::display(sf::RenderWindow &window,bool Debug_Mode_Show_Debug_Boxes)//passing the window itself by refernce to edit it in a function, Alhamdulilah rab al alameen
{
    window.draw(this->sprite);//Please remember, RenderWindow-> is the window, VideoMode-> is for Screen resolution, .draw(shape) is to place on back buffer ,display() switches back and front buffer,
    //Alhamdulilah Rab Al Alameen

    if(Debug_Mode_Show_Debug_Boxes)//Note as windows,clear() removes previous prints effect on screen, if this isnt run in next iteration its effect will disappear Alhamdulilah Rab Al Alameen
    window.draw(this->Debug_box);//Note the box as smaller than shape must be over the sprite elsewise not visible Alhamdulilah Rab Al Alameen
}

//================Player Functions===============================

sf::Vector2f Player::Spawn_Points[2] = {sf::Vector2f(200.f, 20.f), sf::Vector2f(300.f, 20.f)}; // have to mention sf::vector2f or else it cant do conversion, Alhamdulilah rab al alameem

int Player::No_of_Spawn_points_present = 2; // unfortunately have to change these two values manually for rescalaing, but it does Allow Reslacinf Alhamdulilah Rab Al Alameen

string Player::File_From_Where_To_Load_Resources_names[5] = {"..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Nick.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Blue.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Green.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Red.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Yellow.png"};

int Player::No_of_Player_Sprite_and_related_present = 5;

void Player::Action_To_Move(Direction d)
{
    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}

void Player::Move()
{
    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}
// This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
void Player::Move_Left() // Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
{
    // to define soon inshallah
}
void Player::Move_Right() // sets to +x
{
    // to define soon inshallah
}

Player::Player(int Which_design_choosen_out_of_given) : Entity(Spawn_Points[0], 2) // asigning 0 for movement speed will be changed using seter in this constructor soon inshallah, mass will be fixed though for gravity
{

    
    // to define soon inshallah
}