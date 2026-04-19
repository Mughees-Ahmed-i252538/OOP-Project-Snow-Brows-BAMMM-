#include <iostream>          //if giving linker errors, first define  static vars inshallah
#include <SFML/Graphics.hpp> //Note, i had to delete many a pieces of code, hence comments may seems out of place
#include <SFML/Audio.hpp>


class Levels{


    static int Total_Levels_For_which_Data_is_Present;//This gives how many levels we have data of, this is used to give size of LevelData Array Alhamdulilah Rab Al Alameen
    

    //Bismillah Hirahman Nirahim, This will just contain an huge array of stored data, 
    //Initially ten levels so a Levels[10] array on which

    // (1) Block: No of Blocks & Their location (position and size(size static)) is stored
    // (2) Mobs: Mobs no, type and location are stored
    // (3) Backgroung: Background image & bakground music, strings are stores for loading

    //Alhamdulilah Rab Al Alameen, A level count gives the wanted level on the basis of iteration (loading level explicitly sends and changes this store count)

    //Alhamdulilah Rab Al Alameen

    Level_Data* levels_data;//initliaed in constructor of Levels, this is

    public:

    Levels();
    ~Levels();
    

};

class Level_Data
{
    static int Level_count;
    int id;


};//It seems that you have press apply button for refactoring...else even if you push changes, the refactoring keeps asking ypu to do its work,, also have to stop wprking if trying to make another file (interupted) But Alhamdulilah Rab Al ALameen, resolved