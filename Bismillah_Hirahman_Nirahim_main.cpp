//Aaozbillahi minashaetaun nirajeem
//Bismillah hirahman nirahim

#include <SFML/Graphics.hpp>//Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
#include "Bismillah_Hirahman_Nirahim_Common_Header.h"
#include "Bismillah_Hirahman_Nirahim_Entity_Structure.h"
#include "Bismillah_Hirahman_Nirahim_Level_Structure.h"

//Now trying a branch Bismillah hirahman nirahim


//Bismillah hirahman Nirahim, remember getLocalBounds() do not count the scalaing applied on it and are orignal picture size, meanwhile getGlobalBounds() account for scaling and change in position applied on the picture Alhamdulilah rab al alameen
//Note global bounds return Float REct which counts for postion in x (left most of obj by default) position in y(top of obj by default) its width and its height, Alhamdulilah rab al alameen 
//get Local bounds also returns float rect, 
//Self unlike before we might have to count for small parts cut out of sprite sheet as for animation, hence local bound position might not be just 0,0 
//Inshallah we will see this when we come to it, MAy Allah SWT help us Ameen

//Bismillah Hirahman Nirahim, Alhamdulilah Rab Al Alameen, found from assignment 2, these are mashallah amazing for resizing as wanted without having to worry about managing orignal size or multiplier using comparision, Alhamdulilah rab al alameen
void ForRelativeSizeAndPostionShape(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
void ForRelativeSizeAndPostionText(float NeededWidth, float NeededHeight, sf::Text &text, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void ForRelativeSizeAndPostionShape(float NeededWidth, float NeededHeight, sf::RectangleShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

void ForRelativeSizeAndPostionSprite(float NeededWidth, float NeededHeight, sf::Sprite &sprite, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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

int main()// // Remember we still need to do -> sunc changes to push out merged/changed main to github Alhamdulilah rab al alameen, note if using a code space you dont need to sync changes to github, they are directly accessing github and any action is directly on github alhthough still requireing pushing and pulling Alhamdulilah
{//We have to do fetch from all remotes after doing sync changes from local to reflect on actual main

    std::cout << "Bismillah hirahman Nirahim, Log Starts, Testing...." << endl;

    //Note, eg sf::Style is namespace Alhamdulilah! Alhamdulilahi rab al alameen
    sf::VideoMode VidMod=sf::VideoMode::getDesktopMode();//This basically gets thee resolution your screen (ensures the window fits to screen despite resolution change)
    sf::RenderWindow window(VidMod/* sf::VideoMode(800.f,600.f) */ /*This is for testing*/, "Bimsillah Hirahman Nirahim, Snow Bros BAMMM!!!!! Alhamdulilah!!!",sf::Style::Default);
    window.setFramerateLimit(60);//I guess this sets max fps, Alhamdulilah!

    //May Allah (SWT) keep this code and this device in his amanah, May he protect us all , our work, lives, relegion and ownership items 
    //Allah knows best, Alhamdulilah, Oh Allah please correct and accept this dua for the sake of the prophet (SAW) and all your pious people, Ameen sum ameen ya rab al akameen
    float ChoosenResolutionX= 500;//actually .......this might cause understadning issuessss....
    float ChoosenResolutionY= 500;//Ctrl + B opens and closes the left menu in VS code? ALhamdulilah, leaned it in time , Alhamdulilah

    //Vector2 is blank contained, tells i can hold two values, Vector2i tells it can hold two integers, similarly 2f and 2u for float and unsigned i think respecteively
    //Alhamdulilah!

    

    /* while(VidMod>sf::VideoMode(ChoosenResolutionX,ChoosenResolutionY))
    {
        cout<<"Your Screen is too low resolution, please adjust these values to fit your resolution"<<endl;
        cout<<"Choosen Resolution in x(by default 800):";
        cin>>ChoosenResolutionX;
        cout << "Choosen Resolution in y(by default 600):";
        cin>>ChoosenResolutionY;

        cout<<"Note, this might lower the game quality";//This caused a crash as well....
    } *///Note this wasnt needed, false alarm, Viewport just adjusts the shape not the size, if size is lower sfml just scales down as we are using view

    sf::View view(sf::FloatRect(0.f, 0.f, ChoosenResolutionX, ChoosenResolutionY)); // This is for making my life easier...Alhamdulilah...

    /*This one is not so hard to understand but takes some thinking
    
    Why this is for

    You see as said abouve, each device can have differnt resolution, hence if defined normaly the window resolution remains fixed....And if we do fullscreen, on a higher resolution monitor, it will have enlarge individual pixels, hence curves like ends of a circle will apear bloated....and overall decreased qualir=ty...

    Now what is a view, think of it like this, View is the eye of a camera that is showing you the world of 2d game which is infinite in itself

    On defaultt, view of window is the same as monitor...hence eg a 1920x1024 window is showing 1920x1024 of the 2d world through a camera eye....

    On making a custom view (Float(like the datatype fpr parameters) Reactangle) (left,top, width, height) we place a custom camera eye into the 2d game world

    then we do window.setView(view), to make the monitor of the window shift to the camera eye of the cusotm defined view instead of its default view

    On the surface this lets the programmer do calculations for view lets here 800x600 (as done here)

    And sfml does the rest of the math by transforming it into the claculation required for resolution of the monitor of the user

    This is so convenient because otherwise we need to make a scale and then edit things from poition to speed by multiplying with scale= monitor resolution/ resultion for which calcultions have beemn done..

    Alhamdulilah i rab a alameen
    
    

    // Now setview port...tells where on window should show the view, you see resolutions have aspect arations, for 800x 600 it is 4:3 while modern rs have 1920x1024 16:9 which causes screen to be stretched out horizontaly when doing just setview...causing circles to become ovals....
    // Note unlike view which used pixels viewport uses percentages
    // deafult viwport (0.f,0.f,1.f,1.f) means start at 0% x and 0%y of i beleive window, and do 1(100%) of size x and size y (of view) I believ (alhamdulilah)
    // Re NOte: viewport tells system where view sits on window
    // Now as for the claculation
    //You see if width:height of user's monitor is greater than 800:600 than the users monitor is wider as compared to how tall it is than the ratio of choosen resolution
    //We need to leave out empty space to adjust it to have same aspect ratio as choosen resolution

    */

    float UserRatio= static_cast<float>(VidMod.width)/static_cast<float>(VidMod.height);//Note this gives the ratio of users monitor eg 1920:1024
    //Note we can just take VidMod directly as that is a separate object....and we need calculation on individual parts
    float ChoosenRatio = ChoosenResolutionX / ChoosenResolutionY;

    if(UserRatio>ChoosenRatio)//ie users monintor is wider as compared to taller than your choosen aspect
         //i,e we need to leave space on the sides to centre the view as well as not have it streched irrecognizably...
    {
        view.setViewport(sf::FloatRect((1-(ChoosenRatio/UserRatio))/2,0.f,ChoosenRatio/UserRatio,1.f));//Floating point rectangle
    }//Note we change x if x:y of user> x:y of wanted meaning their x is extending extra needs to make extra into bars, extra is gotten by Choosen ration/User RAtio which in this case is less than 1 always  Alhamdulilah Rab Al Alameen
    

    // Note: as users resolution is wider, we need a smaller width component to fit the magnified view without stretching it, for example 16:9 to 4:3,  (4/3)/(16/9) = 3/4 around 75 percent-> to conclude, as user ratio is around 25% wider as compared to height in ratio to choosen ratio, we need it to become 25% shorter, i.e we need the view to be 75% its size in x to fit without stretching on the user screen
    //Now as it is no longer fitting the entire screen, we need it to give spaces on both left and right, to not look pulled towards left, hence we need to get 25%/2 on each side, by starting from 25%2 in x position

    else if (UserRatio < ChoosenRatio) // User ratio has more height as compared to width ratio to choosen ratio
    {
        view.setViewport(sf::FloatRect(0.f,( 1 - (ChoosenRatio / UserRatio))/2, 1.f, ChoosenRatio / UserRatio)); // This is in case users screen is taller
    }


    window.setView(view);



    //Note, to add bindings here for Now, to shift into player class or make their own class as needed


    

    


    



    bool is_Multiplayer= true;
    int No_of_Players;

    bool Debug_Mode_On=false;//to flip it on press of F11 inshallah soon


    //if(is_Multiplayer), ok lets do it this ways if P2 exsists than No of Players =2 else if individual vars conditional assignment, then issue Alhamdulilah Rab Al Alameen

    if(is_Multiplayer)
    {
        No_of_Players=2;
    }
    else
    {
        No_of_Players = 1;
    }

    int First_Persons_Choice=1;//I guess as there are differences in positions of nick, hence same coordinates for nick.png wont work, hence changed to p1 for now, to ajust into code soon inshallah
    int Second_Persons_Choice = 2;

    Player *P1 = new Player(First_Persons_Choice); // have to shift to one by one as new array cant use parameterized constructor, however for rescalability and ease of use(as you see how beneficial array usgae is with loops Alhamdulilah rab al alameen), I use a method that keeps arrays usable although individual working (also deleting array would auto delete orignal space no need for redelete Alhamdulilah rab al alameen)
    Player *P2 = new Player(Second_Persons_Choice); // 0 loads nick design and i believe 1 loads blue player (the one next to nick.pbg), this will be changed later

    Player** Players = new Player*[No_of_Players];//As array of & wasnt allowed so we make array of ptrs Alhamdulilah rab al alameen

    

    Players[0]=P1;

   

    Players[1] = P2;// Note as P1 and P2 are just pointing to DMA, now we can just assign those ptrs to array and null ptr p1 and p2



    P1=nullptr;//This way Alhamdulilah Rab Al Alameen, we manage to use array to point at same place but now access must be changed from directly players[] to players[]-> Alhamduliah rab al alameen
    P2=nullptr;

    sf::Keyboard::Key* Players_Left = new sf::Keyboard::Key[No_of_Players];
    sf::Keyboard::Key *Players_Right = new sf::Keyboard::Key[No_of_Players];
    sf::Keyboard::Key *Players_Jump = new sf::Keyboard::Key[No_of_Players];
    sf::Keyboard::Key *Players_Hit = new sf::Keyboard::Key[No_of_Players];


    Players_Left[0]=sf::Keyboard::A;
    Players_Right[0]=sf::Keyboard::D;
    Players_Jump[0]=sf::Keyboard::W;
    Players_Hit[0]=sf::Keyboard::Q;

    if( No_of_Players==2)
    Players_Left[  1] = sf::Keyboard::J;
    Players_Right[1] = sf::Keyboard::L;
    Players_Jump[1] = sf::Keyboard::I;
    Players_Hit[1] = sf::Keyboard::U;

    sf::Texture Test_LoadingBluePlayerSpriteSheetT;
    sf::Sprite Test_LoadingBluePlayerSpriteSheetS;
    if (!Test_LoadingBluePlayerSpriteSheetT.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Images\\Player_Blue.png"))
    {
        std::cout<<"Testing File Presence using Plue Player Spirte sheet, failed"<<endl;
    }
    else
    {
        Test_LoadingBluePlayerSpriteSheetS.setTexture(Test_LoadingBluePlayerSpriteSheetT);
        Test_LoadingBluePlayerSpriteSheetS.setTextureRect(sf::IntRect(0,0,80,80));
    }//This block only needs to be activated to test if loading the test sprite sheet Alhamdulilah Rab AL Alameen
 
    //I believe we need // instead of \ for linux compatability Allah SWT know best Alhamdulilah Rab Al Alameen

     /* sf::SoundBuffer TestSoundSB;
    sf::Sound TestSoundS;
    //"..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
    if (!TestSoundSB.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Sounds\\SBFootsteps.wav")) // remember spaces are crucial in loading file, ensure there is no space after extension especially as suvh doesnt exsist in windows at the least as well as be careful of spaces pasted by vs code itself while pasting for formatting, Allah SWT knows best, Alhamdulilah Rab Al Alameen
    { //"C:\Users\HP\OneDrive\Desktop\Bismillah Hirahman Nirahim, Github OOP Project Repository Clone\OOP-Project-Snow-Brows-BAMMM-\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\Bismillah_Hirahman_Nirahim_Assets\Sounds\Bismillah_Hirahman_Nirahim_Foot_step_Sounds.wav"
        cout << "Couldnt Load test sound, Oh Allah help us Ameen" << endl;
    }
    else
    {
        cout<<"Successfully Loaded File Alhamdulilah Rab Al Alameen";//Remember manage spaces in the load from string, also the no of charcaters, especially in relative path as the orignal directorys path and the string you write are concatenated and lead to a bigger string, if string too big then basically it becomes irredadble by system and sfml gives couldnt read, Alhamdulilah Rab Al Alameen
        TestSoundS.setBuffer(TestSoundSB);
    }

    TestSoundS.play(); */

    //Bismillah hirahman Nirahim

    //Adding a parameterized constructor for stored level loading inshallah, 
    //Level logic in main by the grace of Allah Almighty
    //Level_Config* = new LevelConfig;
    //delte when level end, redo for new level
    //If Current level == StoredConfigs::TotalStored Levels game end, Alhamdulilah Rab Al Alameen

    //Bismillah Hirahman Nirahim, Oh Allah SWT please provide barakah and save from errors Ameen

    cout<<"\n\n\nBismillah Hirahman Nirahim Trying to make level\n\n\n"<<endl;
    Level_Config *levelConfig = new Level_Config(window.getSize().x,window.getSize().y);//ok passing by value give issue, hence passing by refrence, Alhamdulilah Rab Al Alameen
    //Bismillah Hirahman Nirahim, oh Allah SWT please help me avoid issues and help me debug if need to
    //Ameen, Alhamdulilah Rab Al Alameen

    while (window.isOpen())
    {

        sf::Event event;//For Press Type events eg snowball throw Alhamdulilah
        while (window.pollEvent(event)) // checks queue of eveents, Alhamdulilah
        // pollEvent checks queue and if event queue empty returns 0,
        // Also pollevent uses pass by refrence (int &var) paramter, ehence laisa and change relfects in orignal variable
        // if not emptyy returns bool false, when returned true it almso removes (pops out) the upmost event in queue and places it in event
        {
            if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) // Bismillah hirahman nirahim ,we need to adapt mechanism for full screen... Now i found something,,,,,just doing if (event.key.code == sf::Keyboard::Escape) can close the window if some random event math equals to escape key....Including random mouse movement....Hence we also need to check, event keypressed sf::Event::KeyPressed
                                                                                                                                    // added event.type with event keypressed, it turns out it was still working beacuse sfml assigns event keypressed 5, and it would work just fine,,,,, however so that some mouse movement cant somehow match escape key.....Hence safety guard added. Lahamdulilah (in the first place the first half was so that it ensures that it isnt mouse meausremtn that is matching esc key value...)Allah knows best, alhamdulilah
                window.close(); // I want to put in the are you sure you want to close......Style::note type window ....Inshallah later

            if(event.type ==sf::Event::KeyPressed&& event.key.code == sf::Keyboard::F11)//Bismillah Hirahman Nirahim, if we dont check event type keyboard, it is possible that some random mouse movement can have same key code as this key...hence changes to springing up code thinking that f11 pressed on some mouse movement, Allah SWT knows best, Alhamdulilah Rab Al Alameen
            {
                cout<<"Debug Key Pressed"<<endl;//Alhamdulilah Rab Al Alameen
                if(Debug_Mode_On)
                    Debug_Mode_On=false;
                else
                    Debug_Mode_On=true;
            }
        }


        //Now for hold type events Alhamdulilah
        //Is Key Pressed Is function that returns bool Alhamdulilah Rab Al Alameen

        for(int i=0;i<No_of_Players;i++)
        {
            Players[i]->Action_To_Move(Direction::Idle);//this ensures that if key no longer held than character gets idle automatically instead of keep moving in that dir., ALhamdulilah Rab Al Alameen

            /* if (is_Multiplayer)
            Players[1].Action_To_Move(Direction::Idle); *///lets instead use loops in case adds third player inshallah, loop also works as condition as no of Players acts as counter Alhamdulilah


            if(sf::Keyboard::isKeyPressed(Players_Left[i]))
                {
                    Players[i]->Action_To_Move(Direction::Left);//this only sets a var called action to move, the movement is handeled by move that is called later inshallah

                    //cout<<"Bismillah Hirahman Nirahim, Signal to move left detected for Player(0...):"<<(i+1)<<endl;//For Debugging

                }
            if (sf::Keyboard::isKeyPressed(Players_Right[i]))
                {
                    Players[i]->Action_To_Move(Direction::Right);
                    // cout << "Bismillah Hirahman Nirahim, Signal to move right detected for Player(0...):" << (i + 1) << endl;//For Debugging
                }

            Players[i]->Move();
        }








        // TREATING IT AS BOILER PLATE CODE FOR NOW

        // Three clickable buttons, pictures hsoing each game
        // Another menu bar for the leaderboard display ask

        // If clicked, runs a member function (only one public function in each game class)

        // The leaderboard most likely will have more that one

        // Button for Pong (sprite pong image)
        // Button for tic tac toe
        // Button for four in a line

        // Button for show leaderbord(text instead of image)

        // Figures it bad to do color white while also doing viewport, because blank area also goes white, instead lets go with a huge white rectange, inshallah, may Allah make the GUI look amazing, Ameen sum ameen ya rab al alameen
        // window.clear(sf::Color::White);

        window.clear();//windows clear was before player, printing, Alhamdulilah Rab Al Alameen Found it
        for(int i=0;i<No_of_Players;i++)
        {
            Players[i]->display(window,Debug_Mode_On);
        }

        //For sime reason Debug box not moving although i remmeber adding setposition measures, hence added .move meansures where.move of sprite, Alhamdulilah RAb Al Alameen now it works

        /*  Test_LoadingBluePlayerSpriteSheetS.setPosition(100,200);
        window.draw(Test_LoadingBluePlayerSpriteSheetS);
        Test_LoadingBluePlayerSpriteSheetS.setScale(-1,1);
        Test_LoadingBluePlayerSpriteSheetS.setPosition(200,200);
        window.draw(Test_LoadingBluePlayerSpriteSheetS);
        Test_LoadingBluePlayerSpriteSheetS.setScale(1, 1);
        Test_LoadingBluePlayerSpriteSheetS.setPosition(300, 200);//Debugging measures for scale(-1,1) reflip Alhamdulilah Rab Al Alameen
        window.draw(Test_LoadingBluePlayerSpriteSheetS);  */

        
        //window.draw(Test_LoadingBluePlayerSpriteSheetS);
        //window.draw(/*  Circle, image etc*/);//

        // window.draw(Circle);
        // window.draw();//It seems that this line is a must for drawing the given shape, Mashallah
        
        window.display();//switches front bufffer and back buffer Alhamdulilah rab al alameen
    }
    delete Players;
    Players=nullptr;
    std::cout << "Log Ends, Alhamdulilah!" << endl; // Inshallah success, May Allah help us, Ameen sum ameen ya rab al alameen
    return 0;
}

//Bismillah Hirahman Nirahim for Testing Alhamdulilah Rab Al Alameen