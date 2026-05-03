#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"



float Entity::Usable_Movement_Speed=0;

void Entity::ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void Entity::ForRelativeSizeAndPostionShape_Entity_Copy(float NeededWidth, float NeededHeight, sf::RectangleShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
void Entity::ForRelativeSizeAndPostionText_Entity_Copy(float NeededWidth, float NeededHeight, sf::Text &text, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void Entity::ForRelativeSizeAndPostionSprite_Entity_Copy(float NeededWidth, float NeededHeight, sf::Sprite &sprite, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
    ////cout<<"Displaying Entity Sprite Alhamdulilah"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;//Un comment for debugging, inshallah
    window.draw(this->sprite);//Please remember, RenderWindow-> is the window, VideoMode-> is for Screen resolution, .draw(shape) is to place on back buffer ,display() switches back and front buffer,
    //Alhamdulilah Rab Al Alameen
/* 
    sf::RectangleShape a;
    a.setSize(sf::Vector2f(100,100));
    a.setPosition(100,300);
    

    a.setFillColor(sf::Color::Blue);
    window.draw(a); purely for debugging Alhamdulilah Rab al alameen*/


    if(Debug_Mode_Show_Debug_Boxes)//Note as windows,clear() removes previous prints effect on screen, if this isnt run in next iteration its effect will disappear Alhamdulilah Rab Al Alameen
    {////cout<<"Also Displaying Entity Debux Bux Alhamdulilah"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;//uncomment to debug Alhamdulilah Rab Al ALameen
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

double Entity::getUsable_Movement_Speed()
{
    return Usable_Movement_Speed;
}

void Entity::setTextureRect(sf::IntRect Sub_part_inside_sprite_sheet, bool Right_or_not)
{
    sprite.setTextureRect(Sub_part_inside_sprite_sheet); // Noticed, flipping is actually needed whenm wanted to face right not left, chaginfg mechanisms Alhamdulilah Rab Al Alameen

    Part_of_Sprite_sheet_x = sprite.getTextureRect().getPosition().x;//These are supposed to hold the values of actual inside asprite file coordinates
    Part_of_Sprite_sheet_y = sprite.getTextureRect().getPosition().y;//the wanted ones are for display size Alhamdulilah Rab Al Alameen
    Part_of_Sprite_sheet_width = sprite.getTextureRect().width;
    Part_of_Sprite_sheet_height = sprite.getTextureRect().height;//I believ set scale(-1,1) sets the scale to orignal local again hence we also need to keep track of wanted scale

    ////cout<<"Sprite H Flipped?:"<<Sprite_Already_Horizontally_Flipped<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    ////cout<<"Should The sprite be moving right?:"<<Right_or_not<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;//For Debugging Alhamdulilah


    if (!Sprite_Already_Horizontally_Flipped && Right_or_not) // it should be flipped but isnt already
    {
        
        Sprite_Already_Horizontally_Flipped=true;
        ////cout<<"Was Facing Left Intent to Flip Right as trying to move right"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;//I realized that sending one aspect negative here would work like set scale for flipping, but with new position, Alhamdulilah Rab Al Alameen, checking if it messes with something else, if so we could make a different function, Alhamdulilah Rab Al Alameen
        ForRelativeSizeAndPostionSprite_Entity_Copy(-Wanted_For_Display_Part_of_Sprite_sheet_width, Wanted_For_Display_Part_of_Sprite_sheet_height, sprite, sf::Vector2f(sprite.getPosition().x, sprite.getPosition().y)); // This is needed because scale(-1,1) resets enforced display scale, Alhamdulilah Rab Al Alameen//this hf sprite image Alhamdulilah, ok fine alhamdulilah but the - must go with needed width else flipped vertically if send with hight, Alhamdulilah Rab Al Alameen
    }
    if (Sprite_Already_Horizontally_Flipped && !Right_or_not) // it shouldnt be flipped but is already
    {
        //sprite.setScale(1, 1); // this re hf to bring back ALhamdulilah sprite image Alhamdulilah, this comment set scale has been left for understanding, other removed, Alhamdulilah Rab Al Alameen
        //Realized setscale works with orignal image then scales.,, hence to flip back we need +1 not -1. However now the for relative uses set scale too...so this one wont work we have to concatinate its function for realtive
        Sprite_Already_Horizontally_Flipped = false;
        ////cout << "Was Facing Right Intent to Flip Left as trying to move left" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen//For Debugging
        ForRelativeSizeAndPostionSprite_Entity_Copy(Wanted_For_Display_Part_of_Sprite_sheet_width, Wanted_For_Display_Part_of_Sprite_sheet_height, sprite, sf::Vector2f(sprite.getPosition().x, sprite.getPosition().y));
    }//If no need to flip no need to write empty boxes Alhamdulilah
    //figure becomes bigger for some reason need to inspect...also need to make animation way faster..currently only changes image on one second....
}

//================Player Functions===============================
//Corrected 

//20 from bottom Alhamdulilah Rab Al Alameen, 150 left and 150 right of screen Alhamdulilah Rab Al Alameen, 500-20 wasnt appearing,on screen, changed to 500 - 100 Bismillah Hirahman Nirahim
sf::Vector2f Player::Spawn_Points[2] = {sf::Vector2f(150.f, (500.f - 100.f)), sf::Vector2f(500 - 150.f, (500.f - 100.f))}; // have to mention sf::vector2f or else it cant do conversion, Alhamdulilah rab al alameem

int Player::No_of_Spawn_points_present = 2; // unfortunately have to change these two values manually for rescalaing, but it does Allow Reslacinf Alhamdulilah Rab Al Alameen

string Player::File_From_Where_To_Load_Resources_names[5] = {"..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Nick.png"
    , "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Blue.png"
    , "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Green.png"
    , "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Red.png"
    , "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Yellow.png"};// a single \ was trying to register as an escape sequence, Turned them into \\ Alhamdulilah Rab Al Alameen

int Player::No_of_Player_Sprite_and_related_present = 5;

int Player::Standard_Default_Player_Mass=10;//10 kg....it is ceiling value of the 9.07 weight of nintendo switch and the snowbros game....because i couldnt find nicks weight anywhere...Alhamdulilah Rab Al Alameen, Although snowmen are generally over 200 kg, but there is no way such heavy person made of snow not only moves...but also flies.....in balood mode ofcourse...Alhamdulilah Rab Al Alameen...(other than the humour, 10 is choosen for ease of use, It may be changed as desired, Alhamdulilah Rab Al ALameen)

float Player::Player_sprite_height_to_display=55;//for trial raisinf to 1.5 times Alhamdulilah

float Player::Player_sprite_width_to_display=40;//to be adjusted if needed inshallah, making smaller again

int Player::Player_Count = 0;//ld error because had missed player count, Added Alhamdulilah Rab Al Alameen

int Player::Standard_Default_Player_Speed=6.5;

int Player::Player_Max_Health=2;

void Player::x_Action_To_Move(x_Direction d)
{
    this->x_Action_To_Move_in_Direction_Variable=d;//Bismillah hirahman Nirahim, this var means, in this iteration of main loop, player is intending to move in presented d direction Alhamdulilah, 0 if idle...(according to enum class direction Alhamdulilah Rab Al Alameen)
    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}

void Player::Throw_Snowball()
{

    for(int i=0;i<Snowball_Capacity;i++)
    {
        if(snowballs_thrown[i]==nullptr)
        {
            if(Currently_Faces==x_Direction::Left)//to handle snow ball flipping logic soon inshallah
                snowballs_thrown[i] = new Snowballs(sf::Vector2f(getDebugBox().getGlobalBounds().left, getDebugBox().getPosition().y),-Snow_Ball_Throw_x_Speed,this);//orign left position ALhamdulilah, neg speed makes go left Alhamdulilah
            else if (Currently_Faces == x_Direction::Right)
                snowballs_thrown[i] = new Snowballs(sf::Vector2f(getDebugBox().getGlobalBounds().left + getDebugBox().getGlobalBounds().width, getDebugBox().getPosition().y), Snow_Ball_Throw_x_Speed, this);//left + width is right Alhamdulilah
                break;//i forgot this...all sbs thrown at once...astigfirullah
        }
    }
}
//meamory leak rn remember to delte in collusion detection soon inshallah

void Player::display_snowballs_of_Player(sf::RenderWindow& window, bool is_Debug_Mode_on)
{
    for (int i = 0; i < Snowball_Capacity; i++)
    {
        if (snowballs_thrown[i] != nullptr)
        {
              snowballs_thrown[i]->display(window,is_Debug_Mode_on); // Alhamdulilah rab al alameen
        }
    }
}

void Player::Move()//to be made into pure virtual instead soon, inshallah
{//to mainly delete snowballs in collusion detector inshallah

    if(Action_To_Throw_Snowball)
    {
        if(Current_Snowballs_Exsisting<Snowball_Capacity)//to also decrease current snowball thrown using player ptr if snowball ends inshallah
        {
            cout<<"Throwing snowball"<<endl;
        Throw_Snowball();
        }   
        Action_To_Throw_Snowball=false;//to prevent keep throwing spam... Bismillah hirahman nirahim testing
    }
    
    bool Jump_Test=false;
    if(Action_To_Jump)
    {
        //cout<<"Pressed jump"<<endl;
        if (Block_underneath&&Current_y_State==y_State::Stationary)                 // still deciding if we need a bool Action to ump..Lets see bismillah hirahman Nirahim
        {
            //cout << "Block Was also underneath" << endl; // ok lets transfer this to move, Bismillah hirahman nirahim
            Jump();
            Jump_Test=true;
            //cout<<"vy:"<<Current_velocity_y<<endl;
        }
        Action_To_Jump=false;
    }

    //Doing a fall test for animation Alhamdulilah Bismillah hirhman nirahim
    static float Going_up_since=0;

    if(Current_y_State==y_State::Rising)
    {
        
        Going_up_since++;
    }

    if(Going_up_since>=jump_span)//fbs current lowered ti 30 per second or 20 i think this should work inshallah, I hope the calculation per second doesnt harm the computer inshallah
    {//this should be about 2 second as 20 fps ALhamdulilah
        Fall();//no headed down wards Alhamdulilah
        Going_up_since=0;//Forgot to reset counter..... Coudnt jump again, resolved Alhamdulilah
       
    }

    if(Current_y_State==y_State::Stationary&&!Block_underneath)
    {
        Current_velocity_y = falling_speed;    // no headed down wards Alhamdulilah
        Going_up_since = 0;                    // Forgot to reset counter..... Coudnt jump again, resolved Alhamdulilah
        Current_y_State = y_State::Falling;
    }
    //This allows falling if the player walks of the block ALhamdulilah



    if (Jump_Test)
    {
        //cout << "vy at check pt 0.5:" << Current_velocity_y << endl;
        }

    if(Current_y_State==y_State::Falling&&Block_underneath)
    {
        Current_y_State = y_State::Stationary;
        Current_velocity_y=0;//Alhamdulilah rab al alameen
    }

    if (Jump_Test)
    {
        //cout << "vy at check pt 1:" << Current_velocity_y << endl;
        
    }

    //Now for back to , ok lets do rolling movement first before back to stationary inshallah

   

    ////cout << "Current vy"<<Current_velocity_y<<":"<<endl;//count<<//cout?
    ////cout << "Current vx" << Current_velocity_x << ":" << endl;

    //if no ourter if then vy becomes 0 in each of inner function Alhamdulilah
    //this should work same as vy-0 check leme see//if stationary wrt y then can walk, if jumping then different animation, and movement if falling then differentt movement
    
        ////cout<<"Not Falling or Jumping, Permissible to Walk Alhamdulilah"<<endl;

        //Falling logic has been moved into the now Animate and move left and right as fall only has different image, ALhamdulilah rab ak akameen
    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left || x_Action_To_Move_in_Direction_Variable == x_Direction::Right ) // to prevent walking while going up or down, we will be adding a rolling movement set inside this inshallah, Alhmost nearly identical to walking function
    {
        Move_Left_Right_and_Animate(); // For both left and right walking as has same images, also handles flipping for left and right by checking action to move in direction Alhamdulilah rab al alameen
    }

    if (Jump_Test)
    {
        //cout << "vy at check pt 2:" << Current_velocity_y << endl;
        }
    /* else if(x_Action_To_Move_in_Direction_Variable==x_Direction::Idle&&Current_y_State==y_State::Falling)
    {
        //ok planning to permiss left right movement in fall too, Bismillah hirahman nirahim
    } */
    else if(x_Action_To_Move_in_Direction_Variable==x_Direction::Idle&&Current_y_State==y_State::Stationary)//only do the stand pose if not rising or falling Alhamdulililah
    {
        is_Not_Moving();//this should initialize state of sub frame to first image inshallah no complex calculations inshallah
    }
    
    if(Jump_Test)
    {
        //cout << "new vy:" << Current_velocity_y << endl;
        Jump_Test=false;
    }

    if (Current_y_State == y_State::Falling)
    {
        Falling_Animate();

    }
    
    if (Current_y_State == y_State::Rising)
    {
        Jumping_Animate();//Jumping animation only happened when left or right key were pressed hence made independent and now entirely depending on jumping ALhamdulilah rab al alameen
    }


    //cout<<"vx"<<Current_velocity_x<<endl;

    //cout << "vy" << Current_velocity_y << endl;

    getSprite().move(Current_velocity_x,Current_velocity_y);
    getDebugBox().move(Current_velocity_x, Current_velocity_y);

    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}
// This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
void Player::Move_Left_Right_and_Animate() // Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
{//to add fourth imaage to animation and also making first image the idle picture, Alhamdulilah Rab Al Alameen, perhaps making the resizing common and making a which side bool in the Move() to take care of set scale instead of separately in each blockk, perhaps changing move left and right j=to simply walk....,, Alhamdulilah Rab Al Alameen
    // to define soon inshallah
    ////cout<<"Bismillah Setting Player Velocity to Usbale speed for Moving Right and Jump speed=0"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    ////cout << "Usable Speed" << getUsable_Movement_Speed() <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    if(x_Action_To_Move_in_Direction_Variable==x_Direction::Left)
    {Current_velocity_x = -getUsable_Movement_Speed(); // pos for right, neg for left...
    //Current_velocity_y=0;// actually this should come 0, only start if 0... Alhamdulilah 
    }
    else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Right)//removed action on y speed to make independant for now, but essential vy=0 is required for walking Alhamdulilah (in conditions inshallah)//Bismillah hirahman nirahim testing
    {
        Current_velocity_x = getUsable_Movement_Speed();//fixed added this ALhamdulilah rab al alameen
        //Current_velocity_y = 0;
    }
    
    /* if(x_Action_To_Move_in_Direction_Variable==x_Direction::Right)

    Current_velocity_y = 0; *///ok this if was causing issue in y movement removed Alhamdulilah

    int wanted_texture_rect_x = 0;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 80;//most likely issue resolved, 0 was being passed as initial width when rising case as that not catered to in move left ri,,,, but it should have been being overwriitteen
    int wanted_texture_rect_height =80; // integers because part of int rect

   

    if (x_Previously_Moving_in != x_Action_To_Move_in_Direction_Variable) // this counter is only needed for moving animations ALhamdulilah
    {
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter.restart();
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder = 0; // reseting the holder as well

        //Perhaps adding a diff sound for dir change soon inshallah
    } // the has been moving updation is an interger which forcefully rounds of value (needed for % Alhamdulilah)
    else
    { // modify here for updation speed adjustments
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder = Animation_Speed * this->Has_Been_Moving_in_same_direction_Animation_updation_counter.getElapsedTime().asSeconds();

        if(FootStepsS.getStatus()!=sf::Sound::Status::Playing)//perhaps transfer this somewhere else if needed inshallah
        FootStepsS.play();//Alhamdulilah found a way to download directly wav from an audio editor Alhamdulilah Rab Al Alameen



    } // animation speed determines how fast changes Alhamdulilah Rab AL ALameen, initial thought, try for different entitities different speed inshallah

    //total_no_of_images_in_walking_animation = 4; tranfered to class Alhamdulilah // Aaozbillah Minashaetaun Nirajim, Bismillah Hirahman Nirahim

    //This animation now solely for idleness, it has been removed from walking Alhamdulilah
    /* if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 0) // initialt always greater than 0 considering rounds of to zero Alhamdulilah
    {
        wanted_texture_rect_x = 0; // Different for every animation and image Alhamdulilah
        wanted_texture_rect_y = 0;
        wanted_texture_rect_width = 80;
        wanted_texture_rect_height = 80;//I realized these are redundant, we are already using Part of....To remove if needed inshallah, replace with the orignal Part of spreecd sheet entity protected vars, and remove their reassignment in the called textrect changer function inshallah soon

        // show first walking image, //Bismillah hirahman nirahim for testing
    } */

    
    if (Current_y_State == y_State::Stationary)
    {
        if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 0)
        {
            // show second walking image, right to first image by first image width Alhamdulilah
            wanted_texture_rect_x = 80; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 0;
            wanted_texture_rect_width = 80;//ensure picture is png or bg transparency issue... also there is something called mask color from pciture... too look at later inshallah 
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 1)
        {
            // show third walking image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 160; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 0;
            wanted_texture_rect_width = 80;
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 2)
        {
            // show third walking image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 240; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 0;
            wanted_texture_rect_width = 80;
            wanted_texture_rect_height = 80;
        }
    }
    

    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left)
    {
        Currently_Faces = x_Direction::Left;
        reverse_image = false;

        setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,

        this->x_Previously_Moving_in = x_Direction::Left;
    }
    else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Right)
    {
        Currently_Faces = x_Direction::Right;
        reverse_image = true;

        setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,

        this->x_Previously_Moving_in = x_Direction::Right;
    }

   
}
/* //Trying with united walking function as iss using same animations ALhamdulilah rab al alameen
void Player::Move_Right() // sets to +x
{
    // to define soon inshallah
    ////cout << "Bismillah Setting Player Velocity to - Usbale speed for Moving Left and Jump speed=0" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    ////cout<< "Usable Speed"<<getUsable_Movement_Speed()<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    Current_velocity_x=getUsable_Movement_Speed();//pos for right, neg for left...
    Current_velocity_y=0;
    //New Plan -> this sets the current velocity right, to deal with up and right movement, soon inshallah, actuall sfmove shall be called in this functions caller move with current velcocity inshallah, but this function handels image update inshallah

    int wanted_texture_rect_x=0;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 0;
    int wanted_texture_rect_height = 0;//integers because part of int rect

    

    if(x_Previously_Moving_in!=x_Direction::Right)//this counter is only needed for moving animations ALhamdulilah
    {
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter.restart();
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder=0;//reseting the holder as well
    }//the has been moving updation is an interger which forcefully rounds of value (needed for % Alhamdulilah)
    else
    {   //modify here for updation speed adjustments
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder=Animation_Speed*this->Has_Been_Moving_in_same_direction_Animation_updation_counter.getElapsedTime().asSeconds();

        if(FootStepsS.getStatus()!=sf::Sound::Status::Playing)//if we start it even as it is playing, it restarts so the previiious one isnt heard, only the last one is heard at stopping, hence this, Alhamdulilah Rab Al Alameen
        FootStepsS.play();
    }//animation speed determines how fast changes Alhamdulilah Rab AL ALameen, initial thought, try for different entitities different speed inshallah

    int total_no_of_images_in_walking_animation=3;//Aaozbillah Minashaetaun Nirajim, Bismillah Hirahman Nirahim

    if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 0)//initialt always greater than 0 considering rounds of to zero Alhamdulilah
    {
        wanted_texture_rect_x=0;//Different for every animation and image Alhamdulilah
        wanted_texture_rect_y=0;
        wanted_texture_rect_width = 80;
        wanted_texture_rect_height=80;

        //show first walking image
    }
    else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 1)
    {
        // show second walking image, right to first image by first image width Alhamdulilah
        wanted_texture_rect_x = 80; // Different for every animation and image Alhamdulilah
        wanted_texture_rect_y = 0;
        wanted_texture_rect_width = 80;
        wanted_texture_rect_height = 80;
    }
    else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 2)
    {
        // show third walking image
        //right to first image by second second width Alhamdulilah
        wanted_texture_rect_x = 160; // Different for every animation and image Alhamdulilah
        wanted_texture_rect_y = 0;
        wanted_texture_rect_width = 80;
        wanted_texture_rect_height = 80;
    }

    Currently_Faces = x_Direction::Right;
    reverse_image = true;

    setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
                                                                                                                                                     // Noticed, images are left facing, have to change logic, to only flip if right....Well Alhamdulilah, only need to change in actual function flipping, also need to change left or not to right or not inshallah
    this->x_Previously_Moving_in = x_Direction::Right;
}
 */

void Player::Jumping_Animate()//this effictively will overirde the left right walking animation whatever the image may be currently to give own image while depending on its own timer inshallah, and not left right key presses but the rising state start and end inshallah
{
    int wanted_texture_rect_x = 0;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 80;//setting default width as 0 might be whats causing invisbility
    int wanted_texture_rect_height = 80;

    if (reset_roll_animation_timer) // this counter is only needed for moving animations ALhamdulilah
    {
        reset_roll_animation_timer=false;

            this->Has_Been_Rolling_Animation_updation_counter.restart();
            this->Has_Been_Rolling_Animation_updation_counter_updation_Holder = 0; // reseting the holder as well

            // Perhaps adding a diff sound for dir change soon inshallah
    } // the has been moving updation is an interger which forcefully rounds of value (needed for % Alhamdulilah)
    else
    { // modify here for updation speed adjustments
        this->Has_Been_Rolling_Animation_updation_counter_updation_Holder = Animation_Speed * this->Has_Been_Rolling_Animation_updation_counter.getElapsedTime().asSeconds();

        /* if (FootStepsS.getStatus() != sf::Sound::Status::Playing) // perhaps transfer this somewhere else if needed inshallah
            FootStepsS.play();  */     //to add rolling sound if time inshallah                              // Alhamdulilah found a way to download directly wav from an audio editor Alhamdulilah Rab Al Alameen
    }

    if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 0)
    {
        // show third rolling image
        // right to first image by second second width Alhamdulilah
        wanted_texture_rect_x = 82*0; // Different for every animation and image Alhamdulilah
        wanted_texture_rect_y = 80;
        wanted_texture_rect_width = 82;
        wanted_texture_rect_height = 80;
    }
        else if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 1)
        {
            // show second rolling image, right to first image by first image width Alhamdulilah
            wanted_texture_rect_x = 82 * 1; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 80;
            wanted_texture_rect_width = 82; // ensure picture is png or bg transparency issue... also there is something called mask color from pciture... too look at later inshallah
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 2)
        {
            // show third rolling image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 82 * 2; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 80;
            wanted_texture_rect_width = 82;
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 3)
        {
            // show third rolling image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 82 * 3; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 80;
            wanted_texture_rect_width = 82 ;
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 4)
        {
            // show third rolling image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 82 * 4; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 80;
            wanted_texture_rect_width = 82 ;
            wanted_texture_rect_height = 80;
        }
        else if (this->Has_Been_Rolling_Animation_updation_counter_updation_Holder % total_no_of_images_in_rolling_animation == 5)
        {
            // show third rolling image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 82 * 5; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 80;
            wanted_texture_rect_width = 82 ;
            wanted_texture_rect_height = 80;
        }


        if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left)
        {
            Currently_Faces = x_Direction::Left;
            reverse_image = false;
    
            setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
    
            //this->x_Previously_Moving_in = x_Direction::Left;
        }//normal up jump is with current facing alhamdulilah rab al alameen inshallah

        if (x_Action_To_Move_in_Direction_Variable == x_Direction::Idle)
        {
            if(Currently_Faces == x_Direction::Left)
            {reverse_image = false;
            setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image);} // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
            else if (Currently_Faces == x_Direction::Right)
            {
                reverse_image = true; // left right logic same Alhamdulilah rab al alameen

                setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
            }
            //this->x_Previously_Moving_in = x_Direction::Left;
        }
        else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Right)
        {
            Currently_Faces = x_Direction::Right;
            reverse_image = true;//left right logic same Alhamdulilah rab al alameen
    
            setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
    
            //this->x_Previously_Moving_in = x_Direction::Right; the previous direction thing is already being tke care of in move left and right and animate Alhamdulilah rab al alameen
        }
        
    
}

void Player::Falling_Animate()
{
    int wanted_texture_rect_x = 0;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 80; // setting default width as 0 might be whats causing invisbility
    int wanted_texture_rect_height = 80;

     // if falling this over writes the current image to falling one while allowing movement Alhamdulilah
                                           // Alhamdulilah rab al alameen, working
        wanted_texture_rect_x = 320;
        wanted_texture_rect_y = 0;
        wanted_texture_rect_width = 80;  // first image of 80x80 start at 0x0 Alhamdulilah rab al alameen
        wanted_texture_rect_height = 80; // ok planning to permiss left right movement in fall too, Bismillah hirahman nirahim
    

    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left)
    {
        Currently_Faces = x_Direction::Left;
        reverse_image = false;

        setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,

        // this->x_Previously_Moving_in = x_Direction::Left;
    } // normal up jump is with current facing alhamdulilah rab al alameen inshallah

    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Idle)
    {
        if (Currently_Faces == x_Direction::Left)
        {
            reverse_image = false;
            setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image);
        } // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
        else if (Currently_Faces == x_Direction::Right)
        {
            reverse_image = true; // left right logic same Alhamdulilah rab al alameen

            setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,
        }
        // this->x_Previously_Moving_in = x_Direction::Left;
    }
    else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Right)
    {
        Currently_Faces = x_Direction::Right;
        reverse_image = true; // left right logic same Alhamdulilah rab al alameen

        setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // as obvious, if not left then send bool false as this is needed for Flipping, ALhamdulilah Rab Al Alameen,

        // this->x_Previously_Moving_in = x_Direction::Right; the previous direction thing is already being tke care of in move left and right and animate Alhamdulilah rab al alameen
    }
}

 void Player::Fall()
{
    Current_velocity_y = falling_speed; //
    Current_y_State = y_State::Falling;
    reset_roll_animation_timer=true;
}

void Player::is_Not_Moving()
{
    //to deinfe more soon inshallah
    ////cout << "Bismillah Setting Player Velocity to 0 for Not Moving and Jump speed=0" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen//uncomment for debugging, Bismillah Awalahu wa Akhira hu

    /* bool reverse_image=false;//Now this is ensuring that at idle, shows same picture instead of either of the walking one Alhamdulilah rab al alameen

    if(x_Previously_Moving_in==x_Direction::Right)
    reverse_image=true; facing left right logic transfered to walking left and rigjht and some part to class Alhamdulilah
 */
    Current_velocity_x=0;//plan make new type-> eg jump left in direction inshallah, when defining gravity inshallah, that also handels updates in texture rect calls
    //Current_velocity_y=0;//to asign new positions and also relocate debug box in move function itself inshallah
    //Excluding idle from Stationary that is y = 0 Alhamdulilah

    int wanted_texture_rect_x = 0;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 80;//first image of 80x80 start at 0x0 Alhamdulilah rab al alameen
    int wanted_texture_rect_height = 80; // integers because part of int rect

    setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image);//Currently facing and reverse image variables dont change just the moving left and right changes Alhamdiulilah rab al alameen

    this->x_Previously_Moving_in=x_Direction::Idle;

}//Ok you can also just get texture rect from a sprite Alhamdulilah Rab AL Alameen
/* 
NOW BEING SEEN BY MOVE AND ANIMATE Alhamdulilah
void Player::Falling()//currently not tracking previous state in y unlike x Alhamdulilah
{
    int wanted_texture_rect_x = 320;
    int wanted_texture_rect_y = 0;
    int wanted_texture_rect_width = 80;  // first image of 80x80 start at 0x0 Alhamdulilah rab al alameen
    int wanted_texture_rect_height = 80; // integers because part of int rect

    setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // Currently facing and reverse image variables dont change just the moving left and right changes Alhamdiulilah rab al alameen

    
} */

Player::Player(int Which_design_choosen_out_of_given) : Entity(Spawn_Points[Player_Count%2], Standard_Default_Player_Mass) // asigning 0 for movement speed will be changed using seter in this constructor soon inshallah, mass will be fixed though for gravity
{
    //cout << "Making Player" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    if(!HealthT.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Health.png"))
    {
        cout<<"Coudlnt loa"<<endl;
    }
    else{
        Health1.setTexture(HealthT);
        Health2.setTexture(HealthT);

        ForRelativeSizeAndPostionSprite_Entity_Copy(30, 30, Health1, sf::Vector2f(getSpawnPoint().x-30, getSpawnPoint().y+70));
        ForRelativeSizeAndPostionSprite_Entity_Copy(30, 30, Health2, sf::Vector2f(getSpawnPoint().x + 30, getSpawnPoint().y + 70));//I keep forgetting + is down ALhamdulilah
        }



    health=Player_Max_Health;

    snowballs_thrown=new Snowballs*[Snowball_Capacity];//it appears if you dont equal to null ptr they may contain garbage ptrs? And cause crashes as you try to access? Allah SWT knows best lets check Bismillah hirahman Nirahim

    for(int i=0;i<Snowball_Capacity;i++)
    {
    snowballs_thrown[i]=nullptr;//if this lets exe run properly then that means ptrs had garbage values, Bismillah hirahman nirahim, inshallah loads, In the name of Allah SWT with whose name there is Barakah Mashallah, Ya Zuljalal wal ikram
    }
    




     Part_of_Sprite_sheet_x=0;//for me the simple single first image is coming 80x80 Alhamdulilah Rab Al Alameen
     Part_of_Sprite_sheet_y=0;
     Part_of_Sprite_sheet_width=80;//To set textureRect of sprite = differnt while animating inshallah, use the before discussed algorithms for movement inshallah
     Part_of_Sprite_sheet_height=80;//we can use scale (-1,1) for flipping image horizontally Alhamdulilah Rab Al Alameen, to arrange this and movement and possibly display inshallah, Self: I want to keep display simple, Movement handles this, also the x_Direction enum can be used and left value changed to -1, Alhamdulilah Rab Al Alameen

    player_id=Player_Count;
    Player_Count++;//For next player spawn pt at index 1 will be alloted Alhamdulilah Rab Al Alameen
    //spawn pt to set using player count, Alhamdulilah Rab Al Alameen

    
    // to define soon inshallah

    //cout << "Using File for texture Player" <<File_From_Where_To_Load_Resources_names[Which_design_choosen_out_of_given%No_of_Player_Sprite_and_related_present/* The % logic has been implemented as a safety measure Alhamdulilah rab al alameen */]<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //ok it says syntax is left top width height....hence the issue, we have done width first then position
    sf::FloatRect Wanted_Size_And_Position(getSpawnPoint().x, getSpawnPoint().y,Player_sprite_width_to_display, Player_sprite_height_to_display);

    //Note one thing, spawn pt already stored, hence now which calling setter for sprite and debug box we can just utilize that....I just got the idea...Alhamdulilah....
    //Note done in Entity class setter for sprite itself, but that makes it multi purpose in some possible findout able way, I will check respawn at places, but lets use spawn pt here, Alhamdulilah Rab Al Alameen
    setSprite_and_cocentric_Debug_box(File_From_Where_To_Load_Resources_names[Which_design_choosen_out_of_given%No_of_Player_Sprite_and_related_present/* The % logic has been implemented as a safety measure Alhamdulilah rab al alameen */],sf::Color::Blue,Wanted_Size_And_Position);//debug box fixatedly blue for players, red for enemies, yellow for projections and green for power ups inshallah

    
    //"..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
    if (!FootStepsSB.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\SBFootsteps.wav")) // remember spaces are crucial in loading file, ensure there is no space after extension especially as suvh doesnt exsist in windows at the least as well as be careful of spaces pasted by vs code itself while pasting for formatting, Allah SWT knows best, Alhamdulilah Rab Al Alameen
    {                                                                                                                                             //"C:\Users\HP\OneDrive\Desktop\Bismillah Hirahman Nirahim, Github OOP Project Repository Clone\OOP-Project-Snow-Brows-BAMMM-\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Sounds\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
        //cout << "Couldnt Load test sound, Oh Allah help us Ameen" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    }
    else
    {
        //cout << "Successfully Loaded File Alhamdulilah Rab Al Alameen"; // Remember manage spaces in the load from string, also the no of charcaters, especially in relative path as the orignal directorys path and the string you write are concatenated and lead to a bigger string, if string too big then basically it becomes irredadble by system and sfml gives couldnt read, Alhamdulilah Rab Al Alameen
        FootStepsS.setBuffer(FootStepsSB);
        FootStepsS.setVolume(6);
    }

    //cout << "Player Made Alhamdulilah" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
}
//Bismillah Hirahman Nirahim, tests
//Bismillah Hirahman Nirahim

Player::~Player()
{
    for(int i=0;i<Snowball_Capacity;i++)
    {
        if(snowballs_thrown[i]!=nullptr)
        {
            delete snowballs_thrown[i];
        }//delete snowballs if any left... although strange at player deatjh...but this is for now may change inshallah, Allah swt knows best, future project Allah swt knows best Alhamdulilah
    }
    delete[] snowballs_thrown;//delteing ptr array Alhamdulilah
}

void Player::setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position)
{
    if (!getTexture().loadFromFile(Load_Texture_From_File))
    {
        //cout << "Log: couldnt load sprite texture for Entity" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    }

    getSprite().setTexture(getTexture());

    setUsable_Movement_Speed( Standard_Default_Player_Speed);

    //cout<<"----------------------------------"<<"\n"<<endl;
    //cout<<"Statistics of Made Entity:\n"<<"\n"<<endl;

    //cout << "local width of sprite sheet :" << getSprite().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "local height of sprite sheet:" << getSprite().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout << "global width of sprite sheet:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "global height of sprite sheet:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    getSprite().setTextureRect(sf::IntRect(Part_of_Sprite_sheet_x, Part_of_Sprite_sheet_y, Part_of_Sprite_sheet_width, Part_of_Sprite_sheet_height)); // lets see from start we get 40 40 size sub texture from sprite sheet, Bismillah Hirahman Nirahim

    //cout << "local width of sprite sheet sub part:" << getSprite().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "local height of sprite sheet sub part:" << getSprite().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout << "global width of sprite sheet sub part before relative size and position wanted:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "global height of sprite sheet sub part before relative size and position wanted:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    sf::Vector2f Wanted_Position(Wanted_Size_And_Position.getPosition().x, Wanted_Size_And_Position.getPosition().y); // vector 2f has width first as is x value, Alhamdulilah Rab Al Alameen
    float NeededWidth = Wanted_Size_And_Position.width;
    float NeededHeight = Wanted_Size_And_Position.height;

    //cout<<"Needed Width of Sprite found at proces time"<<NeededWidth<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    //cout << "Needed Height of Sprite found at proces time:" << NeededHeight <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionSprite_Entity_Copy(NeededWidth, NeededHeight, getSprite(), Wanted_Position);//!!!!!!
    // Also sets orign to centre, Alhamdulilah Rab Al Alameen

      // to solve bloadting,...think it like this, the above is the inside file actual coordinates, meanwhile these are what we need to display coordinates, Alhamdulilah
     //we only need to track scale hence orignal waned position x and y trackers removed, Alhamdulilah Rab Al Alameen, If needed these wanteds can be explicity reset too, Alhamdulilah Rab Al Alameen
     Wanted_For_Display_Part_of_Sprite_sheet_width=NeededWidth; // I saw that we did resizing inside Set sprite after  getting sub texture but didnt do so in movement, hence the bloating, to solve we just need to manage these two in parallel, Alhamdulilah Rab Al Alameen
     Wanted_For_Display_Part_of_Sprite_sheet_height=NeededHeight;//These are for reproper sizing as setscale reset sizes....

    // Auto Makes the size wanted Alhamdulilah Rab Al ALameen

    //cout << "global width of sprite sheet sub part after relative size and position wanted:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "global height of sprite sheet sub part after relative size and position wanted:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    getDebugBox().setSize(sf::Vector2f(1, 1)); // Set size takes argument of sf::Vector2f,  note could also use Needed size in calcualtion but in case we implement changes elsewhere we use it directly here, Alhamdulilah Rab al alameen, (This vector made inside call is a temporary object Alhamdulilah Rab Al Alameen)
    // The Debug Box is 90 percent of orignal shape, to allow it to perfectly be used for collusion and not be escaping shape either, Alhamdulilah Rab Al Alameen

    ForRelativeSizeAndPostionShape_Entity_Copy(NeededWidth * how_much_of_sprite_is_debug_box, NeededHeight * how_much_of_sprite_is_debug_box, getDebugBox(), Wanted_Position); // using orignal set size to avoid division with 0, using this function as it also sets origin and All Alhamdulilah Rab Al Alameen
    // This auto sets orign to centre, position to same place as shape etc, hence it is better this way Alhamdulilah Rab Al Alameen

    getDebugBox().setFillColor(Color_of_Debug_Box);

    //float Thickness_of_outline = 10;

    //getDebugBox().setOutlineThickness(Thickness_of_outline); // TO ADJUST ACCORDING TO Size but be uniform, the outline size is respective to Height of box, may seem incosisitant as the bigger the entity the thicker the outline, perhaps choosing to change to constant later on, now set to variable currently 10 Alhamdulilah Rab Al Alameen

    
   //Old one, now at start, but perhaps some logic differnece, leaving here just in case, Allah SWT know best Alhamdulilah Rab Al Alameen ////cout<<"Setting Sprite Sheet and Debug Box"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

    

    //cout << "local width of debug box:" << getDebugBox().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "local height of debug box:" << getDebugBox().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout << "global width of debug box:" << getDebugBox().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "global height of debug box:" << getDebugBox().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen


    //Now for location to confirm best spawn points

    ////cout << "local width of debug box:" << getDebugBox().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    ////cout << "local height of debug box:" << getDebugBox().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen To change this to track location of texturect in sprite inshallah

    //cout << "global left of sprite:" << getSprite().getGlobalBounds().left <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "global top of sprite:" << getSprite().getGlobalBounds().top <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout << "x_position of orign of sprite:" << getSprite().getOrigin().x<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "y_position of orign of sprite:" << getSprite().getOrigin().y <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout<< "Now for spawn point of given sprite"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;

    //cout << "x_position of spawn point of sprite:" << getSpawnPoint().x <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    //cout << "y_position of spawn point of sprite:" << getSpawnPoint().y <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    //cout<<"----------------------------------"<<"\n"<<endl;
    // Alhamdulilah Rab Al Alameen now i can understand sfml better and easier to use to, Alhamdulilah Rab Al Alameen

    // To later inshallah add checks if size is sent 0 as that might start causing issues (from memory:as you can do operations like printing and scaling etc normally, mostly scaling) allah swt knows best Alhamdulilah Rab Al ALameen, especially since we are using the Relative.... Functions that use divisions for comarision Alhamdulilah Rab Al Alameen
}

void Player::SendtoSpawnPt()
{
    getSprite().setPosition(getSpawnPoint());
    getDebugBox().setPosition(getSpawnPoint());
}

void Player::Make_Action_To_Jump()
{
    //Now bool included this content was transfered to move() ALhamdulilah
    Action_To_Jump=true;
}

void Player::Jump()
{
    //cout<<"Jumping"<<endl;
    Current_velocity_y = -jump_speed; // if block Underneath then jump
    Current_y_State = y_State::Rising;
}

void Player::Make_Action_to_Throw_Snowball()
{
    Action_To_Throw_Snowball=true;
}

void Player::move_snowballs_of_Player()
{
    for (int i = 0; i < Snowball_Capacity; i++)
    {
        if (snowballs_thrown[i] != nullptr)
        {
                                                                                                                              // to handle snow ball flipping logic soon inshallah
        snowballs_thrown[i]->Move();                                                                                                                                                                               // i forgot this...all sbs thrown at once...astigfirullah
        }
    }
}
void Player::getLeaderboardData(Leaderboard *L, int index)
{
    leaderboard_index=index;
    LEADERBOARD=L;

}
void Player::Add_To_Score(int add_score)
{
    score+=add_score;
    /* LEADERBOARD->AddWin(leaderboard_index);
    delete LEADERBOARD;
    LEADERBOARD= new Leaderboard;//tp save real time */
}
int Player::Get_Score()
{
    return score;
}

void Player::display_Health(sf::RenderWindow &window)
{
    if(health>=1)
    window.draw(Health1);
    if(health>=2)
    window.draw(Health2);

}

//==================Testing by placing mobs here, Bismillah hirahman nirahim, in the name of Allah SWT in the name of who there is barakah
