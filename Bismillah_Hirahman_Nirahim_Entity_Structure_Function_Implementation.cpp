#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"


int Enemy::Hits_To_encase=0;//Alhamdulilah Child class doesnt need to define separately

float Entity::Usable_Movement_Speed=0;

void ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::RectangleShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
void ForRelativeSizeAndPostionText_Entity_Copy(float NeededWidth, float NeededHeight, sf::Text &text, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void ForRelativeSizeAndPostionSprite_Entity_Copy(float NeededWidth, float NeededHeight, sf::Sprite &sprite, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void Entity::setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position)
{
    if(!texture.loadFromFile(Load_Texture_From_File))
    {
        cout<<"Log: couldnt load sprite texture for Entity"<<endl;
    }

    sprite.setTexture(texture);

    sf::Vector2f Wanted_Position(Wanted_Size_And_Position.getPosition().x, Wanted_Size_And_Position.getPosition().y); // vector 2f has width first as is x value, Alhamdulilah Rab Al Alameen
    float NeededWidth = Wanted_Size_And_Position.getSize().x;
    float NeededHeight = Wanted_Size_And_Position.getSize().y;

    ForRelativeSizeAndPostionSprite_Entity_Copy( NeededWidth, NeededHeight, sprite, Wanted_Position);
    //Also sets orign to centre, Alhamdulilah Rab Al Alameen

    //Auto Makes the size wanted Alhamdulilah Rab Al ALameen

    Debug_box.setSize(sf::Vector2f(1,1));//Set size takes argument of sf::Vector2f,  note could also use Needed size in calcualtion but in case we implement changes elsewhere we use it directly here, Alhamdulilah Rab al alameen, (This vector made inside call is a temporary object Alhamdulilah Rab Al Alameen)
    //The Debug Box is 90 percent of orignal shape, to allow it to perfectly be used for collusion and not be escaping shape either, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionShape_Entity_Copy(NeededWidth * 0.9, NeededHeight * 0.9, Debug_box, Wanted_Position); // using orignal set size to avoid division with 0, using this function as it also sets origin and All Alhamdulilah Rab Al Alameen
    //This auto sets orign to centre, position to same place as shape etc, hence it is better this way Alhamdulilah Rab Al Alameen


    Debug_box.setFillColor(Color_of_Debug_Box);

    float Thickness_of_outline=10;

    Debug_box.setOutlineThickness(Thickness_of_outline); // TO ADJUST ACCORDING TO Size but be uniform, the outline size is respective to Height of box, may seem incosisitant as the bigger the entity the thicker the outline, perhaps choosing to change to constant later on, now set to variable currently 10 Alhamdulilah Rab Al Alameen

    //Alhamdulilah Rab Al Alameen now i can understand sfml better and easier to use to, Alhamdulilah Rab Al Alameen

    //To later inshallah add checks if size is sent 0 as that might start causing issues (from memory:as you can do operations like printing and scaling etc normally, mostly scaling) allah swt knows best Alhamdulilah Rab Al ALameen, especially since we are using the Relative.... Functions that use divisions for comarision Alhamdulilah Rab Al Alameen
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