#ifndef WORLD_HPP_INCLUDED
#define WORLD_HPP_INCLUDED

#define W 119
#define S 115
#define A 100
#define D 97

class worldMap{
    public:
        int mapSize;
        int playerX,playerY;
        int region[20][20];

        char mapSizeString[3];
        int input;
        char inputString[3];

        std::string name;

        void initialize(int sizeDimensions,int startX, int startY,std::string worldName){
            if(mapSize < 100000000) mapSize = sizeDimensions;
            else mapSize = 100000000;
            playerX = startX;
            playerY = startY;
            name = worldName;
        }

        void printStats(){
            char playerXString[8],playerYString[8];
            sprintf(playerXString,"%d",playerX);
            sprintf(playerYString,"%d",playerY);
            printw(name.c_str());
            printw("\n");
            printw("X:");
            printw(playerXString);
            printw("   ");
            printw("Y:");
            printw(playerYString);
            printw("\nWASD to move around the map!");
        }

        void movePlayer(){
            input = getch();
            sprintf(inputString,"%d",input);
            printw(inputString);

            if(input == W && playerY != 0) playerY--;
            else if(input == S && playerY != mapSize) playerY++;

            if(input == A && playerX != mapSize) playerX++;
            else if(input == D && playerX != 0) playerX--;

        }
};

#endif // WORLD_HPP_INCLUDED
