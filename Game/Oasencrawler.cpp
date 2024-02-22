//
// Created by david on 18/02/2024.
//

#include "Oasencrawler.h"

#include <iostream>
#include <conio.h>

#include "Entities/Player.h"
#include "Scene/Scene.h"
#include "Scene/Tile.h"

Oasencrawler::Oasencrawler()
{
    scene = new Scene(DEFAULT_BOARD_SIZE);
    player = new Player(DEFAULT_PLAYER_HEALTH);
    scene->GetTile(player->GetPosition())->SetIsPlayerTile(true);
}

void Oasencrawler::Run()
{
    char nextInput;
    Vector2D nextDirection;

    while(true)
    {
        system("cls");
        scene->Draw();
        player->DrawHud();

        nextInput = static_cast<char>(_getch());


        switch(nextInput)
        {
            case 'w':
            {
                nextDirection = Vector2D(0, -1);
                break;
            }
            case 'a':
            {
                nextDirection = Vector2D(-1, 0);
                break;
            }
            case 's':
            {
                nextDirection = Vector2D(0, 1);
                break;
            }
            case 'd':
            {
                nextDirection = Vector2D(1, 0);
                break;
            }
            default:
                continue;
        }

        if(!MovePlayer(nextDirection))
            continue;


    }

    scene->Draw();
    MovePlayer(Vector2D(0, 1));
    scene->Draw();
    MovePlayer(Vector2D(0, 1));
    MovePlayer(Vector2D(1, 1));
    scene->Draw();
}

//TODO fix crash
bool Oasencrawler::MovePlayer(Vector2D direction)
{
    if (!scene->IsPointInBounds(player->GetPosition() + direction))
    {
        //std::cout << "Position out of bounds" << std::endl;
        return false;
    }

    scene->GetTile(player->GetPosition())->SetIsPlayerTile(false);
    player->Move(direction);
    scene->GetTile(player->GetPosition())->SetIsPlayerTile(true);
    return true;
}
