///Aaozbillah minashaetaun nirajeem, Bismillah hirahman nirahim
//Starting working on mobs ALhamdulilah rab al alameen

#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"


//===========Enemy==============

Enemy::Enemy(sf::Vector2f spawn_at, float mass) : Entity(spawn_at,mass )
{

}

//==========Bottom=============== 
float Botom::Botom_sprite_height_to_display=55;

float Botom::Botom_sprite_width_to_display=44;

//Mass currently not being used but for future inshallah
int Botom::Standard_Default_Botom_Mass=10; // Alhamdulilah Rab Al Alameen, although seems redundant it is better than hardcoding a mass value into code
int Botom::Standard_Default_Botom_Speed = 6.5;

// Note this is used to get size of (fixed length array) not used to initialize a dynamic length array Alhamdulilah rab al alameen

int Botom::Botom_Count=0;

// Cant directly call constructor of non virtually inherited class.... ALhamdulilah

Botom::Botom(sf::Vector2f spawn_at, string File_From_Where_To_Load_Resources_names) : Enemy(spawn_at, Standard_Default_Botom_Mass) // asigning 0 for movement speed will be changed using seter in this constructor soon inshallah, mass will be fixed though for gravity
{
    // cout << "Making Botom" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    Part_of_Sprite_sheet_x = 2; // for me the simple single first image is coming 80x80 Alhamdulilah Rab Al Alameen
    Part_of_Sprite_sheet_y = 936;
    Part_of_Sprite_sheet_width = 109;  // To set textureRect of sprite = differnt while animating inshallah, use the before discussed algorithms for movement inshallah
    Part_of_Sprite_sheet_height = 96; // we can use scale (-1,1) for flipping image horizontally Alhamdulilah Rab Al Alameen, to arrange this and movement and possibly display inshallah, Self: I want to keep display simple, Movement handles this, also the x_Direction enum can be used and left value changed to -1, Alhamdulilah Rab Al Alameen

    Botom_id = Botom_Count;
    Botom_Count++; // For next Botom spawn pt at index 1 will be alloted Alhamdulilah Rab Al Alameen
    // spawn pt to set using Botom count, Alhamdulilah Rab Al Alameen

    // to define soon inshallah

    // cout << "Using File for texture Botom" <<File_From_Where_To_Load_Resources_names[Which_design_choosen_out_of_given%No_of_Botom_Sprite_and_related_present/* The % logic has been implemented as a safety measure Alhamdulilah rab al alameen */]<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // ok it says syntax is left top width height....hence the issue, we have done width first then position
    sf::FloatRect Wanted_Size_And_Position(getSpawnPoint().x, getSpawnPoint().y, Botom_sprite_width_to_display, Botom_sprite_height_to_display);

    // Note one thing, spawn pt already stored, hence now which calling setter for sprite and debug box we can just utilize that....I just got the idea...Alhamdulilah....
    // Note done in Entity class setter for sprite itself, but that makes it multi purpose in some possible findout able way, I will check respawn at places, but lets use spawn pt here, Alhamdulilah Rab Al Alameen
    setSprite_and_cocentric_Debug_box(File_From_Where_To_Load_Resources_names, sf::Color::Red, Wanted_Size_And_Position); // debug box fixatedly blue for Botoms, red for enemies, yellow for projections and green for power ups inshallah, Alhamdulilah rab al alameen

    //"..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
    //to see if need to change in the future inshallah
    if (!FootStepsSB.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\SBFootsteps.wav")) // remember spaces are crucial in loading file, ensure there is no space after extension especially as suvh doesnt exsist in windows at the least as well as be careful of spaces pasted by vs code itself while pasting for formatting, Allah SWT knows best, Alhamdulilah Rab Al Alameen
    {                                                                                                                                             //"C:\Users\HP\OneDrive\Desktop\Bismillah Hirahman Nirahim, Github OOP Project Repository Clone\OOP-Project-Snow-Brows-BAMMM-\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Sounds\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
                                                                                                                                                  // cout << "Couldnt Load test sound, Oh Allah help us Ameen" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    }
    else
    {
        // cout << "Successfully Loaded File Alhamdulilah Rab Al Alameen"; // Remember manage spaces in the load from string, also the no of charcaters, especially in relative path as the orignal directorys path and the string you write are concatenated and lead to a bigger string, if string too big then basically it becomes irredadble by system and sfml gives couldnt read, Alhamdulilah Rab Al Alameen
        FootStepsS.setBuffer(FootStepsSB);
        FootStepsS.setVolume(4);//volume different Alhamdulilah
    }

    // cout << "Botom Made Alhamdulilah" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
}
// Bismillah Hirahman Nirahim, tests

void Botom::x_Action_To_Move(x_Direction d)
{
    this->x_Action_To_Move_in_Direction_Variable = d; // Bismillah hirahman Nirahim, this var means, in this iteration of main loop, Botom is intending to move in presented d direction Alhamdulilah, 0 if idle...(according to enum class direction Alhamdulilah Rab Al Alameen)
    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}

void Botom::Move() // to be made into pure virtual instead soon, inshallah
{

    bool Jump_Test = false;
    if (Action_To_Jump)
    {
        cout << "Pressed jump" << endl;
        if (Block_underneath && Current_y_State == y_State::Stationary) // still deciding if we need a bool Action to ump..Lets see bismillah hirahman Nirahim
        {
            cout << "Block Was also underneath" << endl; // ok lets transfer this to move, Bismillah hirahman nirahim
            Jump();
            Jump_Test = true;
            cout << "vy:" << Current_velocity_y << endl;
        }
        Action_To_Jump = false;
    }

    // Doing a fall test for animation Alhamdulilah Bismillah hirhman nirahim
    static float Going_up_since = 0;

    if (Current_y_State == y_State::Rising)
    {

        Going_up_since++;
    }

    if (Going_up_since >= jump_span) // fbs current lowered ti 30 per second or 20 i think this should work inshallah, I hope the calculation per second doesnt harm the computer inshallah
    {                                // this should be about 2 second as 20 fps ALhamdulilah
        Fall();                      // no headed down wards Alhamdulilah
        Going_up_since = 0;          // Forgot to reset counter..... Coudnt jump again, resolved Alhamdulilah
    }

    if (Current_y_State == y_State::Stationary && !Block_underneath)
    {
        Current_velocity_y = falling_speed;    // no headed down wards Alhamdulilah
        Going_up_since = 0;                    // Forgot to reset counter..... Coudnt jump again, resolved Alhamdulilah
        Current_y_State = y_State::Falling;
    }
    // This allows falling if the Botom walks of the block ALhamdulilah

    if (Jump_Test)
    {
        cout << "vy at check pt 0.5:" << Current_velocity_y << endl;
    }

    if (Current_y_State == y_State::Falling && Block_underneath)
    {
        Current_y_State = y_State::Stationary;
        Current_velocity_y = 0; // Alhamdulilah rab al alameen
    }

    if (Jump_Test)
    {
        cout << "vy at check pt 1:" << Current_velocity_y << endl;
    }

    // Now for back to , ok lets do rolling movement first before back to stationary inshallah

    ////cout << "Current vy"<<Current_velocity_y<<":"<<endl;//count<<//cout?
    ////cout << "Current vx" << Current_velocity_x << ":" << endl;

    // if no ourter if then vy becomes 0 in each of inner function Alhamdulilah
    // this should work same as vy-0 check leme see//if stationary wrt y then can walk, if jumping then different animation, and movement if falling then differentt movement

    ////cout<<"Not Falling or Jumping, Permissible to Walk Alhamdulilah"<<endl;

    // Falling logic has been moved into the now Animate and move left and right as fall only has different image, ALhamdulilah rab ak akameen
    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left || x_Action_To_Move_in_Direction_Variable == x_Direction::Right) // to prevent walking while going up or down, we will be adding a rolling movement set inside this inshallah, Alhmost nearly identical to walking function
    {
        Move_Left_Right_and_Animate(); // For both left and right walking as has same images, also handles flipping for left and right by checking action to move in direction Alhamdulilah rab al alameen
    }

    if (Jump_Test)
    {
        cout << "vy at check pt 2:" << Current_velocity_y << endl;
    }
    /* else if(x_Action_To_Move_in_Direction_Variable==x_Direction::Idle&&Current_y_State==y_State::Falling)
    {
        //ok planning to permiss left right movement in fall too, Bismillah hirahman nirahim
    } */
    else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Idle && Current_y_State == y_State::Stationary) // only do the stand pose if not rising or falling Alhamdulililah
    {
        is_Not_Moving(); // this should initialize state of sub frame to first image inshallah no complex calculations inshallah
    }

    if (Jump_Test)
    {
        cout << "new vy:" << Current_velocity_y << endl;
        Jump_Test = false;
    }

    if (Current_y_State == y_State::Falling)
    {
        Falling_Animate(); // Jumping animation only happened when left or right key were pressed hence made independent and now entirely depending on jumping ALhamdulilah rab al alameen
    }

    if (Current_y_State == y_State::Rising)
    {
        Jumping_Animate(); // Jumping animation only happened when left or right key were pressed hence made independent and now entirely depending on jumping ALhamdulilah rab al alameen
    }

    // cout<<"vx"<<Current_velocity_x<<endl;

    // cout << "vy" << Current_velocity_y << endl;

    getSprite().move(Current_velocity_x, Current_velocity_y);
    getDebugBox().move(Current_velocity_x, Current_velocity_y);

    // to define soon inshallah, needed now for linker error resolution Alhamdulilah rab al alameen
}
// This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
// This sees which direction Action to move in variable has and calls left or right respectively //Future updates for jump inshallah
void Botom::Move_Left_Right_and_Animate() // Sets Current Velocity x to -Movement Speed,, starts acumulating timer accumulator, uses sf::Move also accounts for animation moving left using image switch if certain time has passed Alhamdulilah rab al alameen, (to adjust the time for next image, please change multiplier for clock reset time given to stored into accumulator, if want quicker switch please make this multiplier bigger Alhamdulilah Rab Al Alameen)
{                                          // to add fourth imaage to animation and also making first image the idle picture, Alhamdulilah Rab Al Alameen, perhaps making the resizing common and making a which side bool in the Move() to take care of set scale instead of separately in each blockk, perhaps changing move left and right j=to simply walk....,, Alhamdulilah Rab Al Alameen
    // to define soon inshallah
    ////cout<<"Bismillah Setting Botom Velocity to Usbale speed for Moving Right and Jump speed=0"<<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen;
    ////cout << "Usable Speed" << getUsable_Movement_Speed() <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left)
    {
        Current_velocity_x = -getUsable_Movement_Speed(); // pos for right, neg for left...
        // Current_velocity_y=0;// actually this should come 0, only start if 0... Alhamdulilah
    }
    else if (x_Action_To_Move_in_Direction_Variable == x_Direction::Right) // removed action on y speed to make independant for now, but essential vy=0 is required for walking Alhamdulilah (in conditions inshallah)//Bismillah hirahman nirahim testing
    {
        Current_velocity_x = getUsable_Movement_Speed(); // fixed added this ALhamdulilah rab al alameen
        // Current_velocity_y = 0;
    }

    /* if(x_Action_To_Move_in_Direction_Variable==x_Direction::Right)

    Current_velocity_y = 0; */
    // ok this if was causing issue in y movement removed Alhamdulilah

    int wanted_texture_rect_x = 0; // Different for every animation and image Alhamdulilah
    int wanted_texture_rect_y = 365;
    int wanted_texture_rect_width = 93;  // ensure picture is png or bg transparency issue... also there is something called mask color from pciture... too look at later inshallah
    int wanted_texture_rect_height = 96; // integers because part of int rect

    if (x_Previously_Moving_in != x_Action_To_Move_in_Direction_Variable) // this counter is only needed for moving animations ALhamdulilah
    {
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter.restart();
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder = 0; // reseting the holder as well

        // Perhaps adding a diff sound for dir change soon inshallah
    } // the has been moving updation is an interger which forcefully rounds of value (needed for % Alhamdulilah)
    else
    { // modify here for updation speed adjustments
        this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder = Animation_Speed * this->Has_Been_Moving_in_same_direction_Animation_updation_counter.getElapsedTime().asSeconds();

        if (FootStepsS.getStatus() != sf::Sound::Status::Playing) // perhaps transfer this somewhere else if needed inshallah
            FootStepsS.play();                                    // Alhamdulilah found a way to download directly wav from an audio editor Alhamdulilah Rab Al Alameen

    } // animation speed determines how fast changes Alhamdulilah Rab AL ALameen, initial thought, try for different entitities different speed inshallah

    // total_no_of_images_in_walking_animation = 4; tranfered to class Alhamdulilah // Aaozbillah Minashaetaun Nirajim, Bismillah Hirahman Nirahim

    // This animation now solely for idleness, it has been removed from walking Alhamdulilah
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
            wanted_texture_rect_x = 0; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 365;
            wanted_texture_rect_width = 93; // ensure picture is png or bg transparency issue... also there is something called mask color from pciture... too look at later inshallah
            wanted_texture_rect_height = 96;
        }
        else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 1)
        {
            // show third walking image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 97; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y =361;
            wanted_texture_rect_width = 93;
            wanted_texture_rect_height = 96;
        }
        else if (this->Has_Been_Moving_in_same_direction_Animation_updation_counter_updation_Holder % total_no_of_images_in_walking_animation == 2)
        {
            // show third walking image
            // right to first image by second second width Alhamdulilah
            wanted_texture_rect_x = 189; // Different for every animation and image Alhamdulilah
            wanted_texture_rect_y = 363;
            wanted_texture_rect_width = 96;
            wanted_texture_rect_height = 96;
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

void Botom::Jumping_Animate() // this effictively will overirde the left right walking animation whatever the image may be currently to give own image while depending on its own timer inshallah, and not left right key presses but the rising state start and end inshallah
{
    int wanted_texture_rect_x = 4;
    int wanted_texture_rect_y = 478;
    int wanted_texture_rect_width = 93; // setting default width as 0 might be whats causing invisbility
    int wanted_texture_rect_height = 96;

    
    if (x_Action_To_Move_in_Direction_Variable == x_Direction::Left)//again these blocks are needed to reflip as set Texture calls ForRexlative which uses setsclae which if 1 1 resets flipping Alhamdulilah rab al alameen
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

void Botom::Falling_Animate()
{
   

    // if falling this over writes the current image to falling one while allowing movement Alhamdulilah
    // Alhamdulilah rab al alameen, working
    int wanted_texture_rect_x = 4;
    int wanted_texture_rect_y = 595;
    int wanted_texture_rect_width = 92;  // first image of 80x80 start at 0x0 Alhamdulilah rab al alameen
    int wanted_texture_rect_height = 96; // ok planning to permiss left right movement in fall too, Bismillah hirahman nirahim

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

void Botom::Fall()
{
    Current_velocity_y = falling_speed; //
    Current_y_State = y_State::Falling;
}

void Botom::is_Not_Moving()
{
    // to deinfe more soon inshallah
    ////cout << "Bismillah Setting Botom Velocity to 0 for Not Moving and Jump speed=0" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen//uncomment for debugging, Bismillah Awalahu wa Akhira hu

    /* bool reverse_image=false;//Now this is ensuring that at idle, shows same picture instead of either of the walking one Alhamdulilah rab al alameen

    if(x_Previously_Moving_in==x_Direction::Right)
    reverse_image=true; facing left right logic transfered to walking left and rigjht and some part to class Alhamdulilah
 */
    Current_velocity_x = 0; // plan make new type-> eg jump left in direction inshallah, when defining gravity inshallah, that also handels updates in texture rect calls
    // Current_velocity_y=0;//to asign new positions and also relocate debug box in move function itself inshallah
    // Excluding idle from Stationary that is y = 0 Alhamdulilah

    int wanted_texture_rect_x = 5;
    int wanted_texture_rect_y = 133;
    int wanted_texture_rect_width = 93;  // first image of 80x80 start at 0x0 Alhamdulilah rab al alameen
    int wanted_texture_rect_height = 96; // integers because part of int rect

    setTextureRect(sf::IntRect(wanted_texture_rect_x, wanted_texture_rect_y, wanted_texture_rect_width, wanted_texture_rect_height), reverse_image); // Currently facing and reverse image variables dont change just the moving left and right changes Alhamdiulilah rab al alameen

    this->x_Previously_Moving_in = x_Direction::Idle;

} // Ok you can also just get texture rect from a sprite Alhamdulilah Rab AL Alameen
/*
 Alhamdulilah
*/
// Bismillah Hirahman Nirahim

void Botom::setSprite_and_cocentric_Debug_box(string Load_Texture_From_File, sf::Color Color_of_Debug_Box, sf::FloatRect Wanted_Size_And_Position)
{
    if (!getTexture().loadFromFile(Load_Texture_From_File))
    {
        // cout << "Log: couldnt load sprite texture for Entity" <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    }

    getSprite().setTexture(getTexture());

    setUsable_Movement_Speed(Standard_Default_Botom_Speed);

    // cout<<"----------------------------------"<<"\n"<<endl;
    // cout<<"Statistics of Made Entity:\n"<<"\n"<<endl;

    // cout << "local width of sprite sheet :" << getSprite().getLocalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "local height of sprite sheet:" << getSprite().getLocalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    // cout << "global width of sprite sheet:" << getSprite().getGlobalBounds().width <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen
    // cout << "global height of sprite sheet:" << getSprite().getGlobalBounds().height <<"\n"<<endl;//for presentation and easier debugging, Alhamdulilah Rab Al Alameen

    getSprite().setTextureRect(sf::IntRect(Part_of_Sprite_sheet_x, Part_of_Sprite_sheet_y, Part_of_Sprite_sheet_width, Part_of_Sprite_sheet_height)); // lets see from start we get 40 40 size sub texture from sprite sheet, Bismillah Hirahman Nirahim

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
    Wanted_For_Display_Part_of_Sprite_sheet_width = NeededWidth;   // I saw that we did resizing inside Set sprite after  getting sub texture but didnt do so in movement, hence the bloating, to solve we just need to manage these two in parallel, Alhamdulilah Rab Al Alameen
    Wanted_For_Display_Part_of_Sprite_sheet_height = NeededHeight; // These are for reproper sizing as setscale reset sizes....

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



void Botom::Make_Action_To_Jump()
{
    // Now bool included this content was transfered to move() ALhamdulilah
    Action_To_Jump = true;
}

void Botom::Jump()
{
    cout << "Jumping" << endl;
    Current_velocity_y = -jump_speed; // if block Underneath then jump
    Current_y_State = y_State::Rising;
}

//===========Specific Bottoms================================

//Does global work if defined betweek functions?? i beleive no because control is in functions and shuffling, Alhamdulilah rab al alameen, sepcially not works if defnied after main Alhamdulilah
//ok it appears they do work but they have to be defined before the first fucntion that uses them Alhamdulilah rab al alameen, to test this later on inshallah

string Botom_Lvl_1_5::File_From_Where_To_Load_Resources_names = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Botom_Blue.png";

string Botom_Lvl_6_7::File_From_Where_To_Load_Resources_names = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Botom_Orange.png";

string Botom_Lvl_7_8::File_From_Where_To_Load_Resources_names = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Botom_Pink.png";

string Botom_Lvl_8_9::File_From_Where_To_Load_Resources_names = "..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Botom_Pink.png";//to change in future if time inshallah

Botom_Lvl_1_5::Botom_Lvl_1_5(sf::Vector2f spawn_at):Botom(spawn_at,File_From_Where_To_Load_Resources_names)
{
//Can you call constructor and do absolutely noting it it? i think that will give error Allah swt knows best Alhamdulilah rab al alameen..google says you can...Allah SWT knows best lets try that later inshallah
}

Botom_Lvl_6_7::Botom_Lvl_6_7(sf::Vector2f spawn_at):Botom(spawn_at,File_From_Where_To_Load_Resources_names)
{
}
Botom_Lvl_7_8::Botom_Lvl_7_8(sf::Vector2f spawn_at):Botom(spawn_at,File_From_Where_To_Load_Resources_names)
{
}

Botom_Lvl_8_9::Botom_Lvl_8_9(sf::Vector2f spawn_at):Botom(spawn_at,File_From_Where_To_Load_Resources_names)
{

}



