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
    //cout<<"Displaying Entity Sprite Alhamdulilah"<<endl;//Un comment for debugging, inshallah
    window.draw(this->sprite);//Please remember, RenderWindow-> is the window, VideoMode-> is for Screen resolution, .draw(shape) is to place on back buffer ,display() switches back and front buffer,
    //Alhamdulilah Rab Al Alameen
/* 
    sf::RectangleShape a;
    a.setSize(sf::Vector2f(100,100));
    a.setPosition(100,300);
    

    a.setFillColor(sf::Color::Blue);
    window.draw(a); purely for debugging Alhamdulilah Rab al alameen*/


    if(Debug_Mode_Show_Debug_Boxes)//Note as windows,clear() removes previous prints effect on screen, if this isnt run in next iteration its effect will disappear Alhamdulilah Rab Al Alameen
    {//cout<<"Also Displaying Entity Debux Bux Alhamdulilah"<<endl;//uncomment to debug Alhamdulilah Rab Al ALameen
    window.draw(this->Debug_box);}//Note the box as smaller than shape must be over the sprite elsewise not visible Alhamdulilah Rab Al Alameen
    //window.display();
}


sf::Vector2f Entity::getSpawnPoint()
{return this->spawnpoint;}

sf::Texture &Entity::getTexture()
{
    return texture;
}
sf::Sprite &Entity::getSprite()
{
    return sprite;
}
sf::RectangleShape &Entity::getDebugBox()
{
    return Debug_box;
}   

//================Player Functions===============================
//Corrected 

//20 from bottom Alhamdulilah Rab Al Alameen, 150 left and 150 right of screen Alhamdulilah Rab Al Alameen, 500-20 wasnt appearing,on screen, changed to 500 - 100 Bismillah Hirahman Nirahim
sf::Vector2f Player::Spawn_Points[2] = {sf::Vector2f(150.f, (500.f - 100.f)), sf::Vector2f(500 - 150.f, (500.f - 100.f))}; // have to mention sf::vector2f or else it cant do conversion, Alhamdulilah rab al alameem

int Player::No_of_Spawn_points_present = 2; // unfortunately have to change these two values manually for rescalaing, but it does Allow Reslacinf Alhamdulilah Rab Al Alameen

string Player::File_From_Where_To_Load_Resources_names[5] = {"..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Nick.png", "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Blue.png", "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Green.png", "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Red.png", "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Yellow.png"};// a single \ was trying to register as an escape sequence, Turned them into \\ Alhamdulilah Rab Al Alameen

int Player::No_of_Player_Sprite_and_related_present = 5;

int Player::Standard_Default_Player_Mass=10;//10 kg....it is ceiling value of the 9.07 weight of nintendo switch and the snowbros game....because i couldnt find nicks weight anywhere...Alhamdulilah Rab Al Alameen, Although snowmen are generally over 200 kg, but there is no way such heavy person made of snow not only moves...but also flies.....in balood mode ofcourse...Alhamdulilah Rab Al Alameen...(other than the humour, 10 is choosen for ease of use, It may be changed as desired, Alhamdulilah Rab Al ALameen)

float Player::Player_sprite_height_to_display=55;

float Player::Player_sprite_width_to_display=40;//to be adjusted if needed inshallah

int Player::Player_Count = 0;//ld error because had missed player count, Added Alhamdulilah Rab Al Alameen



void Player::Action_To_Move(Direction d)
{
    this->Action_to_Move_in_Direction_Variable=d;//Bismillah hirahman Nirahim, this var means, in this iteration of main loop, player is intending to move in presented d direction Alhamdulilah, 0 if idle...(according to enum class direction Alhamdulilah Rab Al Alameen)
    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}

void Player::Move()//to be made into pure virtual instead soon, inshallah
{
    
    if(Action_to_Move_in_Direction_Variable==Direction::Left)
    {
        Move_Left();//then move left and right handle if have been moving right -> shift texturerect to wanted.... Implementing wanted function next inshallah
    }
    else
    {
        Move_Right();
    }
    
    
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

Player::Player(int Which_design_choosen_out_of_given) : Entity(Spawn_Points[Player_Count], Standard_Default_Player_Mass) // asigning 0 for movement speed will be changed using seter in this constructor soon inshallah, mass will be fixed though for gravity
{
    cout << "Making Player" << endl;

     Part_of_Sprite_sheet_x=0;//for me the simple single first image is coming 80x80 Alhamdulilah Rab Al Alameen
     Part_of_Sprite_sheet_y=0;
     Part_of_Sprite_sheet_width=80;//To set textureRect of sprite = differnt while animating inshallah, use the before discussed algorithms for movement inshallah
     Part_of_Sprite_sheet_height=80;//we can use scale (-1,1) for flipping image horizontally Alhamdulilah Rab Al Alameen, to arrange this and movement and possibly display inshallah, Self: I want to keep display simple, Movement handles this, also the Direction enum can be used and left value changed to -1, Alhamdulilah Rab Al Alameen

    player_id=Player_Count;
    Player_Count++;//For next player spawn pt at index 1 will be alloted Alhamdulilah Rab Al Alameen
    //spawn pt to set using player count, Alhamdulilah Rab Al Alameen

    // to define soon inshallah

    cout << "Using File for texture Player" <<File_From_Where_To_Load_Resources_names[Which_design_choosen_out_of_given%No_of_Player_Sprite_and_related_present/* The % logic has been implemented as a safety measure Alhamdulilah rab al alameen */]<< endl;

    //ok it says syntax is left top width height....hence the issue, we have done width first then position
    sf::FloatRect Wanted_Size_And_Position(getSpawnPoint().x, getSpawnPoint().y,Player_sprite_width_to_display, Player_sprite_height_to_display);

    //Note one thing, spawn pt already stored, hence now which calling setter for sprite and debug box we can just utilize that....I just got the idea...Alhamdulilah....
    //Note done in Entity class setter for sprite itself, but that makes it multi purpose in some possible findout able way, I will check respawn at places, but lets use spawn pt here, Alhamdulilah Rab Al Alameen
    setSprite_and_cocentric_Debug_box(File_From_Where_To_Load_Resources_names[Which_design_choosen_out_of_given%No_of_Player_Sprite_and_related_present/* The % logic has been implemented as a safety measure Alhamdulilah rab al alameen */],sf::Color::Blue,Wanted_Size_And_Position);//debug box fixatedly blue for players, red for enemies, yellow for projections and green for power ups inshallah
    cout << "Player Made Alhamdulilah" << endl;
}
//Bismillah Hirahman Nirahim, tests
//Bismillah Hirahman Nirahim

void Player::setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position)
{
    if (!getTexture().loadFromFile(Load_Texture_From_File))
    {
        cout << "Log: couldnt load sprite texture for Entity" << endl;
    }

    getSprite().setTexture(getTexture());

    cout << "local width of sprite sheet " << getSprite().getLocalBounds().width << endl;
    cout << "local height of sprite sheet" << getSprite().getLocalBounds().height << endl;

    cout << "global width of sprite sheet" << getSprite().getGlobalBounds().width << endl;
    cout << "global height of sprite sheet" << getSprite().getGlobalBounds().height << endl;

    getSprite().setTextureRect(sf::IntRect(Part_of_Sprite_sheet_x, Part_of_Sprite_sheet_y, Part_of_Sprite_sheet_width, Part_of_Sprite_sheet_height)); // lets see from start we get 40 40 size sub texture from sprite sheet, Bismillah Hirahman Nirahim

    cout << "local width of sprite sheet sub part" << getSprite().getLocalBounds().width << endl;
    cout << "local height of sprite sheet sub part" << getSprite().getLocalBounds().height << endl;

    cout << "global width of sprite sheet sub part before relative size and position wanted" << getSprite().getGlobalBounds().width << endl;
    cout << "global height of sprite sheet sub part before relative size and position wanted" << getSprite().getGlobalBounds().height << endl;

    sf::Vector2f Wanted_Position(Wanted_Size_And_Position.getPosition().x, Wanted_Size_And_Position.getPosition().y); // vector 2f has width first as is x value, Alhamdulilah Rab Al Alameen
    float NeededWidth = Wanted_Size_And_Position.width;
    float NeededHeight = Wanted_Size_And_Position.height;

    cout<<"Needed Width of Sprite found at proces time"<<NeededWidth<<endl;
    cout << "Needed Height of Sprite found at proces time" << NeededHeight << endl;

    ForRelativeSizeAndPostionSprite_Entity_Copy(NeededWidth, NeededHeight, getSprite(), Wanted_Position);
    // Also sets orign to centre, Alhamdulilah Rab Al Alameen

    // Auto Makes the size wanted Alhamdulilah Rab Al ALameen

    cout << "global width of sprite sheet sub part after relative size and position wanted" << getSprite().getGlobalBounds().width << endl;
    cout << "global height of sprite sheet sub part after relative size and position wanted" << getSprite().getGlobalBounds().height << endl;

    getDebugBox().setSize(sf::Vector2f(1, 1)); // Set size takes argument of sf::Vector2f,  note could also use Needed size in calcualtion but in case we implement changes elsewhere we use it directly here, Alhamdulilah Rab al alameen, (This vector made inside call is a temporary object Alhamdulilah Rab Al Alameen)
    // The Debug Box is 90 percent of orignal shape, to allow it to perfectly be used for collusion and not be escaping shape either, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionShape_Entity_Copy(NeededWidth * 0.9, NeededHeight * 0.9, getDebugBox(), Wanted_Position); // using orignal set size to avoid division with 0, using this function as it also sets origin and All Alhamdulilah Rab Al Alameen
    // This auto sets orign to centre, position to same place as shape etc, hence it is better this way Alhamdulilah Rab Al Alameen

    getDebugBox().setFillColor(Color_of_Debug_Box);

    float Thickness_of_outline = 10;

    getDebugBox().setOutlineThickness(Thickness_of_outline); // TO ADJUST ACCORDING TO Size but be uniform, the outline size is respective to Height of box, may seem incosisitant as the bigger the entity the thicker the outline, perhaps choosing to change to constant later on, now set to variable currently 10 Alhamdulilah Rab Al Alameen

    cout<<"set sprite sheet and debug box"<<endl;

    

    cout << "local width of debug box" << getDebugBox().getLocalBounds().width << endl;
    cout << "local height of debug box" << getDebugBox().getLocalBounds().height << endl;

    cout << "global width of debug box" << getDebugBox().getGlobalBounds().width << endl;
    cout << "global height of debug box" << getDebugBox().getGlobalBounds().height << endl;


    //Now for location to confirm best spawn points

    //cout << "local width of debug box" << getDebugBox().getLocalBounds().width << endl;
    //cout << "local height of debug box" << getDebugBox().getLocalBounds().height << endl; To change this to track location of texturect in sprite inshallah

    cout << "global left of sprite" << getSprite().getGlobalBounds().left << endl;
    cout << "global top of sprite" << getSprite().getGlobalBounds().top << endl;

    cout << "x_position of orign of sprite" << getSprite().getOrigin().x<< endl;
    cout << "y_position of orign of sprite" << getSprite().getOrigin().y << endl;

    cout<< "Now for spawn point of given sprite"<<endl;

    cout << "x_position of spawn point of sprite" << getSpawnPoint().x << endl;
    cout << "y_position of spawn point of sprite" << getSpawnPoint().y << endl;

    // Alhamdulilah Rab Al Alameen now i can understand sfml better and easier to use to, Alhamdulilah Rab Al Alameen

    // To later inshallah add checks if size is sent 0 as that might start causing issues (from memory:as you can do operations like printing and scaling etc normally, mostly scaling) allah swt knows best Alhamdulilah Rab Al ALameen, especially since we are using the Relative.... Functions that use divisions for comarision Alhamdulilah Rab Al Alameen
}