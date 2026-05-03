// Aaozbillahi minashaetaun nirajeem
// Bismillah hirahman nirahim

#include "Bismillah_Hirahman_Nirahim_Leaderboard.h"
#include <fstream>
#include <SFML/Graphics.hpp>
//#include "main.cpp"
//#include "CommonFuncsMacsAndGlobalVars.h"

#define NoofCharLeftForWins 10
#define Buffer 2

// Overloading for enclosing bracket shapes
void ForRelativeSizeAndPostionShape_LEADERBOARD(float NeededWidth, float NeededHeight, sf::ConvexShape &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
void ForRelativeSizeAndPostionText_LEADERBOARD(/* float NeededWidth, float NeededHeight, */ sf::Text &text, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
{
    // you see we need to manage orignal size of picture and have to do individual calculations for each sprite, to adjust width, and all relative to something...which is a bit too much sometimes

    // Instead we can compare wanted to real size, using getLocalbounds() a function slightly differnt from global bounds( ) in the fact that it gives orignal (without calcualtion,position etc stats...)

    sf::FloatRect RealBounds = text.getLocalBounds(); // Hold orignal bounds , at the end size of sprite image without roaation ppostion change etc

    float Realwidth = RealBounds.width;   // self:: width is most likely a member of container rectangle
    float Realheight = RealBounds.height; // I should change it to realheight isntead of current

    text.setOrigin(Realwidth / 2, Realheight / 2); // This helps locate orign of objects as orign is basically at (total width/2,total width/2) eact cente ofrectangle

    //text.setScale(NeededWidth / Realwidth, NeededHeight / Realheight); // FOr example take wanted size = real size, it remains 1, so scale doesnt change, however if wanted size<real size, then scale is less than 1 greater than 0 (inshallah if input correct in code ) May Allah help me ameen

    text.setPosition(Wantedposition); // now that we have orign at centre and size resolved it got easier to set the position, ALhamdulilahi Rab al alameen
}

/* float ChoosenResolutionX=800;
float ChoosenResolutionY=600; */

// int ChoosenResolutionX=800;
// int ChoosenResolutionY = 600;

/* // Overloading for sprite
void ForRelativeSizeAndPostionForLeaderboard(float NeededWidth, float NeededHeight, sf::Sprite &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
void ForRelativeSizeAndPostionForLeaderboard(float NeededWidth, float NeededHeight, sf::Text &shape, sf::Vector2f Wantedposition) // perhaps noticable in comments....the absolute calcultaion got too bad....
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
*/
/* int LoadingScreenForLeaderBoard(sf::RenderWindow &window)
{

    window.clear(sf::Color::White);
    window.display();
    window.clear(sf::Color::White);
    window.display();

    sf::Clock Timer;
    float ElapsedTime = 0;

    sf::Texture Loadingtexture;
    if (!Loadingtexture.loadFromFile("LoadingBlueDots.PNG")) // I saw PNG capital somewhere else so did png capital, will there be a differe if small? Allah (SWT) knows best, ALhamdulilah, Inshallah to be researched later
    {
        cout << "Failed to Load The Loading Blue Dots Patrens";
    }

    sf::Sprite Loadingsprite;
    Loadingsprite.setTexture(Loadingtexture);
    ForRelativeSizeAndPostion(ChoosenResolutionX * (2.f / 20), ChoosenResolutionX * (2.f / 20), Loadingsprite, sf::Vector2f(ChoosenResolutionX / 2.f, ChoosenResolutionY / 2.f));

    sf::Font font_Loading;
    font_Loading.loadFromFile("Roboto-Bold.ttf");

    sf::Text text_Loading;

    text_Loading.setFont(font_Loading);
    text_Loading.setString("Loading....");
    text_Loading.setCharacterSize(ChoosenResolutionX * (2.f / 30));
    text_Loading.setFillColor(sf::Color::Black); // Some non crassh something issue here, may allah swt help us all, may he save us, ameen sum ameen ya rab al alameen
    // Oh it turns out that setColor that changed both outline and fill color was split in two to get set fill and set outline color, ALhamdulilah!
    // turns out that setColor is depreciated and we should use set fill color

    ForRelativeSizeAndPostion(Loadingsprite.getGlobalBounds().width, Loadingsprite.getGlobalBounds().height / 2.f, text_Loading, sf::Vector2f(Loadingsprite.getPosition().x, Loadingsprite.getPosition().y + (ChoosenResolutionY * (4.f / 30))));

    // Someone told me to not change height and width of text, but this one looks almost perfect here so...., Allah knows best

    // In the above height, X component of resolution is used instead of y because an oval rotaating looks quite...good in a 'fun' sence....Alhamdulilah, but i dont know if ....
    // LEts change it finally..ALhamdulilah

    while (ElapsedTime < 3.5) // It is aproxiamation after all and no == so no issue i believe, Allah (SWT) knows best, ALhamdulilah rab al alameen
    {

        // Loadingsprite.setRotation(20);
        Loadingsprite.rotate(7.5);
        // Almost issue, but solved alhamdulilah, changed Elasped time = to += endless loop fixed alhamdulilah
        // Changed setRotation( which would be setting a fixed rotation to rotate() which adds to the rotation, )

        ElapsedTime += Timer.restart().asSeconds(); // Checks how much time elased each second and adds in time elased, ALhamdulilah
        // This is easy to explain because i was trying to implement delta time, soon inshallah in pong

        window.clear(sf::Color::White);
        window.draw(Loadingsprite);
        window.draw(text_Loading);
        window.display();
    }

    return 1;
}
 //This loading screen might be altered later inshallah
 */

Leaderboard::Leaderboard()
{
    //Today i found out that we can use 'this' to make out lives easier and differentiate b/w vars parameter with same name as members....

    this->leaderboard = nullptr;//I prefer not using nullptr, but if there is a chance of erro otherwise, lets do it, ALLha knoww sbest, Alhamdulilah
//Bismillah hirahman nirahim
    ifstream File("Leaderboard.txt");

    if(!File.is_open())//If exsists then will open (inshallah)
    {
        //cout<<"File openinf failure"; file didnt exsist, (if did, but couldnt find, we made a new one)
        ofstream CreatesNewFile("Leaderboard.txt");//Now it does.....
        if(CreatesNewFile.is_open())
        {
            CreatesNewFile<< "<0>\n";//New file has no entries, 
            CreatesNewFile.close(); 
            TotalEntries=0;//I dont think we need this due to it being a class but just in case

            this->leaderboard = new record[TotalEntries + 200];//I want to remove this, but just in case
        }//I remembered this issue, ALhamdulilah rab al alameen
        
    }
    else
    { // Now we check max no of enteries

        char ch;
        File.get(ch); // To skip <

        cout<<"File Exists\nCode Starts Reading File:"<<endl;
        cout<<"Reading No of Entries:"<<endl;
        cout<<"Reader Variable ch\nch:"<<ch<<endl;
        cout << "Note: 'total' is intermediary variable of string integer conversion:" << endl;

        int total = 0;
        int previoustotal = 0; // We can skip a step by directly using char so no need for current digit variable

        while (ch != '>')
        {
            File.get(ch);  
            cout<<"ch:"<<ch<<endl;
            
            if(ch=='>'||ch=='\n')
            {
                break;//minor fix, so > isnt used in calculation

            }

            if(ch>='0'&&ch<='9')//We were getting issue like last characters newline or something, i didnt want to go into detail so for simplicity added check//Allah knows  best//Alhamdulilah
            {
            cout << "total at first step of calculation:" << total << endl;
            // I rechecked and ascii of 0 is 48...
            total = (previoustotal * 10) + ch - 48; // Logic has been discussed previously in comments9perhaps in .h)
            previoustotal=total;
            cout << "total at second step of calculation:" << total << endl;
            // This basically turns string into integer

            }
        }
        
        //Have to make check for if file has been messed with and total entries no was changed but entries remained same afterwards inshallah
        TotalEntries = total;
        this->leaderboard = new record[TotalEntries + 2]; // was causing issue so i added this-> (previously encountered, in comments)
        // Then i realized that i had put L capital....

        // Btw the +2 is for the case that two new records are added in...if both users are new
        cout<<endl;
        cout << "Found No of Entries:" << TotalEntries << endl; // ForTesting

        cout<<endl;
        cout<<endl;
        cout<<"Reading Records"<<endl;
        cout<<"ch:(empty line) signifies presence of \n"<<endl;

        for (int i = 0; i < TotalEntries; i++) // for each entry
        {
            cout<<endl;
            cout << "Reading Record "<<i<<" : " << endl;
            //Lets leave the test in, Alhamdulilah, MAy Allah (SWT) help us, ameen
            total = 0; // Note we are reusing total, hence be careful
            // Alhamdulilah
            previoustotal=0;//Apparently could mae do with total but lets let it be, It works amazing Alhamdulilah
            while (ch != ':')
            {

                if (File.eof() &&i != TotalEntries)
                {
                    cout<<"Discrepancy detected, Total Entries mentioned not equal to Total Entries Present, Likely Cause manual intervention, Please Fix Manually (to ensure code running extra enteries ignored(overwritten if <n> is lower than actual enteries),and enteries left blank if <n> higher than real entries)"<<endl;
                    break;
                }

                File.get(ch);
                cout << "ch:" << ch << endl;

                if(ch==':')
                break;

                if(ch>='0'&&ch<='9')
                {
                cout << "total at first step of calculation:" << total << endl;
                total = (previoustotal * 10) + ch - 48;
                previoustotal=total;
                cout << "total at second step of calculation:" << total << endl;
                // Re:This basically turns string into integer
                }
            }
            cout<<endl;
            leaderboard[i].NoofWins = total;
            cout<<"Found No of wins"<<total<<endl;
            cout<<"Registered No of Wins"<<leaderboard[i].NoofWins<<endl;
            // Now as for username
            int j = 0;
            for (; ch != '\n' && ch != '\0' && j < (MaxNoOfChars-1); j++)//One space for \0
            {
                if (File.eof()&& i!=TotalEntries)
                {
                    cout << "Discrepancy detected, Total Entries mentioned not equal to Total Entries Present, Likely Cause manual intervention, Please Fix (Same ensurance as above, but this one leaves only the username blank, if it keeps piling up perhaps a noname will be on the top of the leaderboard....)" << endl;
                    break;
                }

                // while()//I remembered that while can not be empty...( i think for can be... using (; ;))
                // sadly logic changed//....Actually, Alhamdulilah
                File.get(ch);

                if(ch=='\n'||ch=='\0')
                break;

                leaderboard[i].Username[j] = ch;
            }
            leaderboard[i].Username[j]='\0';//Termination of string stored
        }
        File.close();
    }

    // char ch;
    // File.get(ch);//Get character, logic changed (basically opening modes changed to separate if and of)
    //Alhamdulilah
    // if(ch=='<')
    // {
    //     //Red no of entries from file
    // }
    // else
    // {
    //     //write <0> in file 
    // }
    // Check LeaderBoard for Total entries, if no file, then create file
    // Done by->first char in file-> if '<' then file exsists already
    // If no < , then do this place <0>\n in first line, after that records are added
}   // Does Dmaing, leave two extra spaces for records (if to be added during this iteration), Note Dmaing NoofEntries +2 records

//I have changed my mind for search and add record, now Search will try to find the record, if none found calls add, they moth return intger, index of wanted record
//add also does +1 to No of entries
//Alhamdulilah

int Leaderboard::SearchRecord(char username[MaxNoOfChars])
{
    int index = 0;
    bool found=false;

    for (; index < TotalEntries ; index++)
    {
        int i = 0;//i for character of Username

         for (; i < (MaxNoOfChars - 1) /* && (leaderboard[index].Username[i] != '\0'&& username[i]!='\0') */; i++)//Shift + alt +A to multiline comment,...telling you cause it was really helpful ..ALhamdulilah
         {
            if(username[i]!=leaderboard[index].Username[i])
            {
                found=false;
                break;
            }
            
            found=true;//some character matching, if unmatching charcomes then again faLSE

            if (username[i] == '\0' && leaderboard[index].Username[i] == '\0')
            {
                found = true;
                break;
            }
         }

        

         if(found==true)//THIS INDEX WAS THE MATCHING ONRE
         break;

    }


    if(found)
    return index;
    else
    return AddRecord(username);//Although the index is obviously going to be current TotalEntries
}

int Leaderboard::AddRecord(char username[MaxNoOfChars])
{
    this->leaderboard[TotalEntries].NoofWins=0;

    int i=0;
    for(;i<(MaxNoOfChars-1)&&(username[i]!='\0');i++)
    this->leaderboard[TotalEntries].Username[i] = username[i] ;

    this->leaderboard[TotalEntries].Username[i]='\0';

    TotalEntries++;

    return (TotalEntries-1);//Index of new record
}

int Leaderboard::ShowLeaderBoard(sf::RenderWindow &window, sf::Sprite Background,sf::RectangleShape Headerbar, sf::Sprite GamesHubLogo,sf::Sprite Leadernoard_Holder, sf::Text Leaderboard_Text,float ChoosenX,float ChoosenY) // Need to implement and check if sorting correctly, soon inshallah
{
    //First of all in CLI for debugging

    cout<<"\n"<<"Leaderboard:"<<endl;
    cout<<"========================================"<<endl;
    cout<<endl;

    for(int i=0;i<TotalEntries;i++)
    {
        cout<<"User:"<<leaderboard[i].Username<<"\n Wins:"<<leaderboard[i].NoofWins<<endl;
        cout << "---------------------------------------" << endl;
    }



    sf::Font font;
    if (!font.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Fonts\\RusticRoadway.otf"))
    {
        cout<<"Failed to load font";
    }

    sf::Text text;//Now i feel that this should hvat been nside if block....Allah knows best
    text.setFont(font);

    
    window.clear();
    window.display();
    window.clear();//just washing to ensure no display of orgignal window accidently

    sf::Vector2i PixelWhereClicked;
    sf::Vector2f RealCoordWhereClicked;

    bool RecturnButtonPressed=false;

    sf::Event event;


    //Plan press buttons to iterate events, rather do keyboard buttons but show on screen as well, the type that gets blurred or slightly opaque if button is pressed inshallah soon
    //A text var hosted on top of a rectangular holder
    //Orign at centre of page ignoring headerbar inshallah

    sf::Font EntryFont;
    if (!EntryFont.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Fonts\\RusticRoadway.otf")) // changeable separately of leaderboard fucntion hence placed so even if redundant and consujems more space
    // Alhamdulilah!
    {
        cout<<"Failed to load font";
    }

    sf::Text Entry;
    Entry.setFont(EntryFont);
    Entry.setCharacterSize(ChoosenX*(0.035f));

    sf::ConvexShape Entry_Holder(8);//i almost did the eight before the name but this seems more natural so ALhamdulilah! Rabalalameen

    /* float HolderHeight=ChoosenY/2.f+Headerbar.getGlobalBounds().height;//Note these are for the initial shape of holder not its size
    //The calculation is to bring it to  the centre of page ignoring headerbar..., Alhamdulilah
    float HolderWidth=ChoosenX/2.f;
    float Cutsize=ChoosenX/4.f;//This looks good alhamdulilah //oops that was calculation for postion.....*/

    float HolderWidth=0.075;//This gives the shape and not the size or anything else (note) Alhamdulilah
    float HolderHeight=0.04;
    float CutSize=0.0075;

    
    Entry_Holder.setPoint(0, sf::Vector2f(ChoosenX * CutSize, ChoosenY * 0)); // be careful arguments have Vector2f
    Entry_Holder.setPoint(1, sf::Vector2f(ChoosenX * 0, ChoosenY * CutSize));
    Entry_Holder.setPoint(2, sf::Vector2f(ChoosenX * 0, ChoosenY * (HolderHeight - CutSize)));           // For third edge, leaving space for cutsize, full height not reacehed
    Entry_Holder.setPoint(3, sf::Vector2f(ChoosenX * CutSize, ChoosenY * HolderHeight));                 // x increased for cutize now full height reached, Alhadmulilah
    Entry_Holder.setPoint(4, sf::Vector2f(ChoosenX * (HolderWidth - CutSize), ChoosenY * HolderHeight)); // Now full width not reached as space for cutsize (an edge comes) however still at full height, Alhamdulilah
    Entry_Holder.setPoint(5, sf::Vector2f(ChoosenX * HolderWidth, ChoosenY * (HolderHeight - CutSize))); // full width reached but height was decreased for edge...cut similar to 0, height - cutsize, actually the point adjust to it, i belieave, Allah knows best Alhamdulilah!
    Entry_Holder.setPoint(6, sf::Vector2f(ChoosenX * HolderWidth, ChoosenY * CutSize));                  // This is basically just setting a custom shape of what cut sides i want

    Entry_Holder.setPoint(7, sf::Vector2f(ChoosenX * (HolderWidth - CutSize), ChoosenY * 0)); // Much like previous ones, height became 0, full width not present as space left for cut size, Alhamdulilah, shape design complete, now to pass it through the relative adjuster to put it in proper position inshallah

    // Alhamdulilah, this feels so much better, mashallah

    ForRelativeSizeAndPostionShape_LEADERBOARD(ChoosenX * (6.f / 10), ChoosenY / 3.f, Entry_Holder,sf::Vector2f(ChoosenX / 2.f, ChoosenY / 2.f + Headerbar.getGlobalBounds().height));
    // The why of this calculation told above

    Entry_Holder.setFillColor(sf::Color(170, 160, 180, 180));
    Entry_Holder.setOutlineThickness(ChoosenX * 0.0009);
    Entry_Holder.setOutlineColor(sf::Color(100, 150, 200, 250));


    int index=0;
    // char left=' ';//Represent arrows on each side, tell if iteratable on that side
    // char right = ' ';
    
    //char Username[10+MaxNoOfChars+4];//* spaces for the chars in username and one space and then a : sign and  another space4 spaces for arrow hars and gaps char respectively, next is for no of wins
    //char Wins[7+MaxNoOfChars];//w i n s (space) : (space) and max no of charcaters lefft for wins for comibed scalability ensuraance

    //< Noofwins : & >
    //< space : space space > hence six
    // Max no of chars also accounts for \0
    const int TextArraySize=NoofCharLeftForWins+Buffer+MaxNoOfChars+16+11;//This is basically the size of the string that we will put in text, it is basically the size of username + size of wins + size of extra chars like : and spaces, ALhamdulilah
    //8 more spaces for Username, space : space
    //Added 'Wins' in string
    //Turns out < wont work we have to do Prev Next
    char StringToPut[TextArraySize];//As We need to change this to be < Noofwins : Username > withoutout string class
    
    while(!RecturnButtonPressed)//Planning to make gameshub logo as return button, inshallah for ease, if much time then can change too inshallah, Allah knows best , Alhamdulilah rab al alameen
    {
        if(TotalEntries==0)
        {
            StringToPut[0]='N';
            StringToPut[1]='o';
            StringToPut[2]=' ';
            StringToPut[3]='E';
            StringToPut[4]='n';
            StringToPut[5]='t';
            StringToPut[6]='r';
            StringToPut[7]='i';
            StringToPut[8]='e';
            StringToPut[9]='s';
            StringToPut[10]=' ';
            StringToPut[11]='Y';
            StringToPut[12]='e';
            StringToPut[13]='t';
            StringToPut[14]='!';
            StringToPut[15]='\0';

        }
        
        if(TotalEntries != 0)
        {
         
        for (int i = 0; i < TextArraySize; i++)
        {
            StringToPut[i] = ' ';
        }

        StringToPut[TextArraySize - 1] = '\0'; // last char=0

        if(index!=0)
        {
            StringToPut[0] = '<';
            StringToPut[1] = ' ';
                StringToPut[2] = ' ';
                StringToPut[3] = ' ';
                StringToPut[4] = ' ';
        }
        else
        {
            StringToPut[0] = ' ';
            StringToPut[1] = ' ';
            StringToPut[2] = ' ';
            StringToPut[3] = ' ';
            StringToPut[4] = ' ';
        }
        

        StringToPut[5] = 'W';
        StringToPut[6] = 'i';
        StringToPut[7] = 'n';
        StringToPut[8] = 's';
        StringToPut[9] = ' ';
        StringToPut[10] = ':';
        StringToPut[11] = ' ';

        StringToPut[11+NoofCharLeftForWins] = '\n';//Wins: number then next line
        


        int no=leaderboard[index].NoofWins;

        if(no==0)
        {
            StringToPut[12]='0';
        }

        int StartPoint=12;//turned out digits reversed, found out in time Alhamdulilah
        int EndPoint=0;
        for (int i = 12; i < (11 + NoofCharLeftForWins) &&no!=0; i++)
        {
            
            StringToPut[i] = (no % 10) + 48;//Converting int to char, logic discussed in comments of .h file
            no=no/10;
            EndPoint=i;

        }

        for(int j=0;j+StartPoint<EndPoint;j++ )
        {
            StringToPut[j+StartPoint]+=StringToPut[EndPoint-j];
            StringToPut[EndPoint - j] = StringToPut[j + StartPoint]- StringToPut[EndPoint - j];
            StringToPut[j + StartPoint] -= StringToPut[EndPoint - j];

            EndPoint--;//Turns out if not then we go past middle and undo the reversals...That sounds nice though...Alhamdulilah
        }





        StringToPut[11+ NoofCharLeftForWins+1]=' ';//Space between wins and username, also ensures that if no of wins is less than max no of chars left for wins, then there is a space before username, Alhamdulilah

        StringToPut[12 + NoofCharLeftForWins + 1] = 'U';
        StringToPut[13 + NoofCharLeftForWins + 1] = 's';
        StringToPut[14 + NoofCharLeftForWins + 1] = 'e';
        StringToPut[15 + NoofCharLeftForWins + 1] = 'r';
        StringToPut[16 + NoofCharLeftForWins + 1] = 'n';
        StringToPut[17 + NoofCharLeftForWins + 1] = 'a';
        StringToPut[18 + NoofCharLeftForWins + 1] = 'm';
        StringToPut[19 + NoofCharLeftForWins + 1] = 'e';
        StringToPut[20 + NoofCharLeftForWins + 1] = ' ';
        StringToPut[21 + NoofCharLeftForWins + 1] = ':';
        StringToPut[22 + NoofCharLeftForWins + 1] = ' ';

        int PlaceOfEnd = (22 + NoofCharLeftForWins + 2);

        for (int i = (22 + NoofCharLeftForWins + 2); i < (22 + NoofCharLeftForWins + MaxNoOfChars + 1) && leaderboard[index].Username[i - (22 + NoofCharLeftForWins + 2)] != '\0'; i++) // Here (11 + NoofCharLeftForWins + MaxNoOfChars + 1) cuz it starts at +2 , and then we leave one space for \0 and username size is max no of..
        {
            
            StringToPut[i] = leaderboard[index].Username[i - (22 + NoofCharLeftForWins + 2)];//Bismillah hirahman nirahim
            
            PlaceOfEnd=i;//This is basically the last index of username in string to put, so that we can put \0 after it, and also know where to put next and previous if needed, Alhamdulilah
        }

        if (index != (TotalEntries - 1))
        {
            StringToPut[PlaceOfEnd+1] = ' ';
            StringToPut[PlaceOfEnd + 2] = ' ';
            StringToPut[PlaceOfEnd + 3] = ' ';
            StringToPut[PlaceOfEnd + 4] = ' ';
            StringToPut[PlaceOfEnd + 5] = '>';//I was planning to replace with sprites but alhamdulilah it works
        }
        else
        {
            StringToPut[PlaceOfEnd+1] = ' ';
            StringToPut[PlaceOfEnd + 2] = ' ';
            StringToPut[PlaceOfEnd + 3] = ' ';
            StringToPut[PlaceOfEnd + 4] = ' ';
            StringToPut[PlaceOfEnd + 5] = ' ';
        }

        StringToPut[PlaceOfEnd + 6] = '\0';

        // int i = 2;

        // for (int j=0; i < MaxNoOfChars + 2 && leaderboard[index].Username[i - 2] != '\0'; i++
        // {
        //     StringToPut[i]=leaderboard[index].Username[j];
        // }

        // First we have to put in the no of wins

        // Entry.setString(left + " " + "Username" + leaderboard[index].Username + " " + "Wins : " + leaderboard[index].NoofWins+" "+ right);
        // It seems have to do it manually...step by step....inshallah continue tommorow soon, May llah help me in this assignment, ameen sum ameen ya rab al alameen

        // Perhaps we might need to shift this after pollevent depending on situation,

        // 100000000000000000000000000000000000000000000000000000000000000000000000000 Oh Allah please help us all, ameen sum ameen ya rab al alameen
        }
        Entry.setString(StringToPut);

        ForRelativeSizeAndPostionText_LEADERBOARD(/* ChoosenX*(4/10.f),ChoosenY/4.f , */ Entry, sf::Vector2f(ChoosenX/2.f, ChoosenY/2.f + Headerbar.getGlobalBounds().height));

        while(window.pollEvent(event))//Have to keep checking main, Bismillah poll event is memebr of RenderWindwow, oh Allah please help me remeber ., Ameen
        {
            if(event.type==sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Left) // self this vs sf::Mouse::vs,Event::MouseLeft,something like isButtonPressed(mouse left..) to check if time soon inshallah
                {
                    PixelWhereClicked = sf::Mouse::getPosition(window);
                    RealCoordWhereClicked= window.mapPixelToCoords(PixelWhereClicked);
                    //bE CAREFUL....HAD TO END TASK IN THIS ONE BECAUSE NO EXIT BUTTON....Still Alhamdulilah!
                    if(GamesHubLogo.getGlobalBounds().contains(RealCoordWhereClicked))// gamehub logo/ return button contains given point..then return...or break is also possible alhamdulilah
                    {
                        RecturnButtonPressed = true;
                        break;//first break only exsists first loop...
                        
                    }
                }

               
            }
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                    {RecturnButtonPressed = true; // ensuring escape also leads back to hub page
                break;}
            }//Acciently placed this inside mouse block previously, ALhamdulilah fixed
            if(event.type==sf::Event::KeyPressed)
            {
                if(event.key.code==sf::Keyboard::L)
                {
                    if(index<TotalEntries-1)//As index starts from 0, so last index is total entries -1
                    {
                        index++;
                        
                    }
                }
                else if(event.key.code==sf::Keyboard::J)
                {
                    if(index>0)
                    {index--;
                        
                    }
                }
            }
        }

        Entry.setFillColor(sf::Color(0, 255, 255, 255)); // Alhamdulilah
        Entry.setOutlineColor(sf::Color::Black);
        window.clear();
        window.draw(Background);
        window.draw(Entry_Holder);
        window.draw(Entry);
        window.draw(Headerbar);
        window.draw(Leadernoard_Holder);
        window.draw( GamesHubLogo);
        window.draw(Leaderboard_Text);
        window.display();
    }

    //LoadingScreenForLeaderBoard(window); this lead to so many errors...so Alhamdulilah i have choose to omit it and made do by using loading in main itself....May Allah swt help me, may he save and protect us all, may he help us all, Ameen sum ameen ya rab al alameen
    return 1;
}

int Leaderboard::EnterUsername(sf::RenderWindow &window, float ChoosenX, float ChoosenY, int UserNo) // This is basically a function that takes username input from user, and then calls add record to add it in leaderboard, this is called at the start of game, and then the returned username is used for storing wins at the end of game, inshallah soon
{
    char User1[MaxNoOfChars] = {0}; // Two Users, note Max no of chars already accounts  \0
    // Logic change, just call function twice
    sf::Font font;
    font.loadFromFile("..\\Bismillah_Hirahman_Nirahim_Snow_Bros_Assets\\Bismillah_Hirahman_Nirahim_Assets\\Fonts\\RusticRoadway.otf");

    sf::Text Prompt;

    Prompt.setFont(font);
    Prompt.setCharacterSize(ChoosenX * (0.08f));
    Prompt.setFillColor(sf::Color::Blue);

    if (UserNo == 1)
        Prompt.setString("Enter Player 1 Username:");
    else
        Prompt.setString("Enter Player 2 Username:");

    ForRelativeSizeAndPostionText_LEADERBOARD(Prompt, sf::Vector2f(ChoosenX / 2.f, ChoosenY / 3.f)); // This is basically the position of text at the top of screen, Alhamdulilah

    int CharItisOn = 0; // To impleemnt stack like behavior
    bool is_Entering = true;

    sf::Text ToShowUserEntering;
    ToShowUserEntering.setFont(font);
    ToShowUserEntering.setCharacterSize(ChoosenX * (0.08f));
    ToShowUserEntering.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        ToShowUserEntering.setString(User1);
        ForRelativeSizeAndPostionText_LEADERBOARD(ToShowUserEntering, sf::Vector2f(ChoosenX / 2.f, ChoosenY / 2.f)); // This is basically the position of text at the top of screen, Alhamdulilah

        sf::Event event;
        while (window.pollEvent(event))
        {

            // if (event.type == sf::Keyboard::Escape) only way out is though...Alhamdulilah
            // {
            //     return 1;
            // }
            if (event.type == sf::Event::TextEntered)
            {
                

                

                if (event.text.unicode == '\b' && CharItisOn != 0)
                {
                    CharItisOn--;
                    User1[CharItisOn] = '\0';//Otherwise it draws the removed char, ALhamdulilah
                }
                else if (is_Entering)
                {


                    if(event.text.unicode=='\n'||event.text.unicode=='\r')//If user presses enter, we consider it as end of input, Alhamdulilah
                    {//Sometimes Textenetered in some computers send \r so we need to watch out for it, ALhamdulilah
                        is_Entering=false;
                        User1[CharItisOn] = '\0'; // Termination of string, Alhamdulilah
                    }

                    if (CharItisOn + 2 != MaxNoOfChars)
                    {
                        if(event.text.unicode>=32&& event.text.unicode<=126)//This is basically to ensure that only valid characters are entered, Alhamdulilah, also this is the range of printable characters in ascii, so it ensures that only printable characters are entered, Alhamdulilah
                        {User1[CharItisOn] = static_cast<char>(event.text.unicode); // Bismillah hirahman nirahim, do we need to use static cast?
                        CharItisOn++;}//Rurns out the text unicode is 32 bit integer/....Alhamdulilah saved
                    }

                    
                    

                }

                // if (CharItisOn + 2 == MaxNoOfChars)
                // {
                //     //is_Entering = false;      // This is basically to prevent entering more characters than max no of chars, Alhamdulilah
                //     User1[CharItisOn] = '\0'; // Termination of string, Alhamdulilah
                // }
            }
        }



        window.clear();
        window.draw(Prompt);
        window.draw(ToShowUserEntering);
        window.display();

        if(!is_Entering)
        {
           return SearchRecord(User1);//This will add record if not found and return index of record, if found then just return index of record, Alhamdulilah
           //This returns index of record, which is basically the user number in leaderboard, which can be used to update wins at the end of game, Alhamdulilah
        }
        
    }
    return -1;//This is basically an error code, should never reach here, Alhamdulilah
}



void Leaderboard::UpdateAndSortRecords()
{
    record TemprecordForSorting;
    for(int i=0;i<TotalEntries-1;i++)
    {
        for(int j=0;j<TotalEntries-1-i;j++)
        {
            if(leaderboard[j].NoofWins<leaderboard[j+1].NoofWins)
            {
                TemprecordForSorting=leaderboard[j];
                leaderboard[j]=leaderboard[j+1];
                leaderboard[j+1]=TemprecordForSorting;
            }
        }
    }
}

Leaderboard::~Leaderboard()
{
    //Should put the current leaderboard into Leaderboard.txt and delete leaderboard

    UpdateAndSortRecords();//This will sort the records before putting them in file, Alhamdulilah

    fstream File("Leaderboard.txt",ios::out|ios::trunc);//bismillahirahman nirahim, after searching,,..,.,.,it turns out you must use out with truc....what must be the reason for them not allowing its sole use, were they planning something more? as there is basically ..... best reason to use trunc is with out.... Allah knows best
    ///Alhamdulilah figured out in time

    if(File.is_open())
    {
        File<<"<"<<TotalEntries<<">"<<endl;

        int i=0;
        for(;i<TotalEntries;i++)
        {
            File<<leaderboard[i].NoofWins<<":"<<leaderboard[i].Username<<endl;


        }
        //File<<EOF; it seems this was something different from whay i precieved, i will ask sir if i have some time inshallah
        File.close();

    }


    if(leaderboard!=nullptr)
    delete[] leaderboard;//almost caused a memory leak
}


//Note Leaderboard is class itself, leaderboard is the array holding recirds (a member of class) and LEADERBOARD is the object being used