// Aaozbillahi minashaetaun nirajeem
// Bismillah hirahman nirahim#pragma once
#pragma once//I checked and no need to include fstream here, cuz not used in dec laration, ALhamdulilah
#include <iostream>//This one doesnt have pragma once on purpose, Leaderboa... ok nevermind i changed that now it needs to be included in basically...a lot of things manually..
using namespace std;
#include <SFML/Graphics.hpp>
 // Ctrl + B opens and closes the left menu in VS code? ALhamdulilah, leaned it in time , Alhamdulilah

// Global var
// HowManyEntriesAtDMA
//int DMAcount=0;//keeps track of Dma count for constructor and destructor //on further check we wont need this...//was causing issues
//Note while DMaing, leaving space for adding records, considering both users are new, LEaves spaces for two records
//But before destructed, no of entries might change (when records are added), hence this keeps the orignal cout while DMaing to delete DMA
//Alhamdulilah!

#define MaxNoOfChars 21
//For conveniece

class Leaderboard{

    int TotalEntries;

    class record{
        public: //If we dont set it public, have to use get and set even though it is something small....Will change if have time inshallah
        int NoofWins;
        char Username[MaxNoOfChars];

        //I was encapsulating...till i realized that without string, going get and set for char* will be .....
        //We will have to use intermediate vars everywhere...better leave it for now,....Allah knows best

        // public:
        // void setWins(int wins)
        // {
        //     NoofWins=wins;
        // }
        // int getWins()const
        // {
        //     return NoofWins;
        // }
        // void setWins(char* Username)
        // {
        // }
    };//Note Notify Inputer that currently max no of chars =20 for convenience, can be set in the code by macro

    record* leaderboard;//For actual manipulation inside code

    //Now that i think about it, there might be some functions for records themselves....But lets use leaderboard as object for now, Alhamdulilah
    public:

    Leaderboard();


private:
    int SearchRecord(char[MaxNoOfChars]);//Searches if username already present, might need some user defined functions to replace built in string funtions
    //Done by DMAing whole leaderboard but in readermode then putting wins in int, by formula like
    //By the way converting character into integer by -42
    //previouswholenumber* 10 + newfound digit recursively/or by iteration until find separation character, planned to be ':'
    
    
    

    int AddRecord(char[MaxNoOfChars]);//If record not present addds record (done while inputing Username)
    //Can only be called by Seacrhrecord elsewise if used in main, perhaps used arbitarily, and if used more than twice, crash...Dma only taaken for Noofentries+2
    public:

    void AddWin(int Index)
    {
        leaderboard[Index].NoofWins+=1;//This is basically to add win to the user, called at the end of game, index is basically the user number in leaderboard, which can be obtained by searchrecord function, Alhamdulilah
    }

    int EnterUsername(sf::RenderWindow &window,float ChoosenX, float ChoosenY,int UserNo);//This is basically a function that takes username input from user, and then calls add record to add it in leaderboard, this is called at the start of game, and then the returned username is used for storing wins at the end of game, inshallah soon
   
    

    // void UpdateRecord(int UpdatedWins,char RequiredUsername[MaxNoOfChars]);//While closing the game, the no of wins of each user (two records kept by making class record in each game) is sent to this function (function called two times, one for each record) 
    // //Stores by scanning, when record username =  required username, entire row is deleted and new record is put in
    // void SortRecords();//Called in Update record after done storing
    // //Plan:Resort records basically reads file, and DMAs a huge array of records->sorts records and then places them back in after truncating
    // //Plan: Instead of Update and sort separatly, make updateandsort function-> because updation required reading, instead of simple reading, just read entire file, transform into DMA arrays of records, search for username and update its wins, then sort USING NO OF WINS, open file in truncating mode (Note, record should exsist because made while putting username but in case if not (antics of cchecks or error, do error hanling))
    void UpdateAndSortRecords();
    //Plan put, enter username funcrtion here as well to avoid redoing...., but even from other files, we can create object leaderboard and basically do changes in the leaderboard...If it comes to it we can also make a file name input system to make as many leaderboards as user wants...know that we will also have to manage if they want to trucate or apend...
    int ShowLeaderBoard(sf::RenderWindow &window, sf::Sprite Background, sf::RectangleShape Headerbar, sf::Sprite GamesHubLogo, sf::Sprite Leadernoard_Holder, sf::Text Leaderboard_Text, float ChoosenX, float ChoosenY); // Need to implement and check if sorting correctly, soon inshallah
                                                                                                                                                                                                                         // This will be a dunction for the main, in which we basically take all records and show them on screen by one by prinnting using sf::text inshallah, i will try to move this into the main, may Allah help us all, ameen

    // Most logic changed by doing DMA only once, Alhamdulilah

    ~Leaderboard();
    };