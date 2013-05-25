#include<ncurses.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include"world.hpp"

/*
    Gluten RPG, A text based RPG game engine
    Copyright (C) 2013  Kristopher Emerson

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

bool isPlaying;
int errorID;

void game(){
    worldMap testWorld;
    testWorld.initialize(1024,15,21,"Drakkhen");
    while(isPlaying == true){
        clear();
        testWorld.printStats();
        testWorld.movePlayer();
    }
}

int main(){
    srand(time(0));

    isPlaying = true;
    errorID = 0;


    initscr();

    game();

    endwin();
}
