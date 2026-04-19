#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"


int Enemy::Hits_To_encase=0;//Alhamdulilah Child class doesnt need to define separately

float Entity::Usable_Movement_Speed=0;

Entity::Entity(sf::Vector2f spawn_at, float mass)
{
    //to define soon inshallah
}


sf::Vector2f Player::Spawn_Points[2] = {sf::Vector2f(200.f, 20.f), sf::Vector2f(300.f, 20.f)}; // have to mention sf::vector2f or else it cant do conversion, Alhamdulilah rab al alameem

//================Player Functions===============================

string Player::File_From_Where_To_Load_Resources_names[5] = {"..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Nick.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Blue.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Green.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Red.png", "..\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Images\Player_Yellow.png"};

int Player::No_of_Spawn_points_present = 2; // unfortunately have to change these two values manually for rescalaing, but it does Allow Reslacinf Alhamdulilah Rab Al Alameen

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

Player::Player() : Entity(Spawn_Points[0],  2) // asigning 0 for movement speed will be changed using seter in this constructor soon inshallah, mass will be fixed though for gravity
{
    // to define soon inshallah
}