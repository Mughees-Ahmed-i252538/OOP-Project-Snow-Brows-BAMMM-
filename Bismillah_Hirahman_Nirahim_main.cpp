//Aaozbillahi minashaetaun nirajeem
//Bismillah hirahman nirahim

#include <SFML/Graphics.hpp>//Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>
#include "Common_Header.h"




int main()// Remember we still need to do -> sunc changes to push out merged/changed main to github Alhamdulilah rab al alameen 
{//We have to do fetch from all remotes after doing sync changes from local to reflect on actual main
    cout<<"Bismillah hirahman Nirahim, Log Starts, Testing...."<<endl;

    //Note, eg sf::Style is namespace Alhamdulilah! Alhamdulilahi rab al alameen
    sf::VideoMode VidMod=sf::VideoMode::getDesktopMode();//This basically gets thee resolution your screen (ensures the window fits to screen despite resolution change)
    sf::RenderWindow window(VidMod/* sf::VideoMode(800.f,600.f) */ /*This is for testing*/, "Game Hub Alhamdulilah!!!",sf::Style::Fullscreen);
    window.setFramerateLimit(60);//I guess this sets max fps, Alhamdulilah!

    //May Allah (SWT) keep this code and this device in his amanah, May he protect us all , our work, lives, relegion and ownership items 
    //Allah knows best, Alhamdulilah, Oh Allah please correct and accept this dua for the sake of the prophet (SAW) and all your pious people, Ameen sum ameen ya rab al akameen
    float ChoosenResolutionX= 800;//actually .......this might cause understadning issuessss....
    float ChoosenResolutionY= 600;//Ctrl + B opens and closes the left menu in VS code? ALhamdulilah, leaned it in time , Alhamdulilah

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
    }
    

    // Note: as users resolution is wider, we need a smaller width component to fit the magnified view without stretching it, for example 16:9 to 4:3,  (4/3)/(16/9) = 3/4 around 75 percent-> to conclude, as user ratio is around 25% wider as compared to height in ratio to choosen ratio, we need it to become 25% shorter, i.e we need the view to be 75% its size in x to fit without stretching on the user screen
    //Now as it is no longer fitting the entire screen, we need it to give spaces on both left and right, to not look pulled towards left, hence we need to get 25%/2 on each side, by starting from 25%2 in x position

    else if (UserRatio < ChoosenRatio) // User ratio has more height as compared to width ratio to choosen ratio
    {
        view.setViewport(sf::FloatRect(0.f,( 1 - (ChoosenRatio / UserRatio))/2, 1.f, ChoosenRatio / UserRatio)); // This is in case users screen is taller
    }


    window.setView(view);





    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event)) // checks queue of eveents, Alhamdulilah
        // pollEvent checks queue and if event queue empty returns 0,
        // Also pollevent uses pass by refrence (int &var) paramter, ehence laisa and change relfects in orignal variable
        // if not emptyy returns bool false, when returned true it almso removes (pops out) the upmost event in queue and places it in event
        {
            if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) // Bismillah hirahman nirahim ,we need to adapt mechanism for full screen... Now i found something,,,,,just doing if (event.key.code == sf::Keyboard::Escape) can close the window if some random event math equals to escape key....Including random mouse movement....Hence we also need to check, event keypressed sf::Event::KeyPressed
                                                                                                                                    // added event.type with event keypressed, it turns out it was still working beacuse sfml assigns event keypressed 5, and it would work just fine,,,,, however so that some mouse movement cant somehow match escape key.....Hence safety guard added. Lahamdulilah (in the first place the first half was so that it ensures that it isnt mouse meausremtn that is matching esc key value...)Allah knows best, alhamdulilah
                window.close(); // I want to put in the are you sure you want to close......Style::note type window ....Inshallah later
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
        window.clear();
        //window.draw(/*  Circle, image etc*/);//

        // window.draw(Circle);
        // window.draw();//It seems that this line is a must for drawing the given shape, Mashallah
        window.display();//switches front bufffer and back buffer Alhamdulilah rab al alameen
    }
    cout << "Log Ends, Alhamdulilah!" << endl; // Inshallah success, May Allah help us, Ameen sum ameen ya rab al alameen
    return 0;
}
