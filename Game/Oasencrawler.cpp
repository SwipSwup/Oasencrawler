//
// Created by david on 18/02/2024.
//

#include "Oasencrawler.h"

#include <iostream>

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
    scene->Draw();
    //MovePlayer(Vector2D(0, 1));
    scene->Draw();
    /*MovePlayer(Vector2D(0, 1));
    MovePlayer(Vector2D(0, 1));
    scene->Draw();*/
}

//TODO fix crash
bool Oasencrawler::MovePlayer(Vector2D direction)
{
    if (!scene->IsPointInBounds(player->GetPosition() + direction))
    {
        std::cout << "Position out of bounds";
        return false;
    }

    scene->GetTile(player->GetPosition())->SetIsPlayerTile(false);
    player->Move(direction);
    scene->GetTile(player->GetPosition())->SetIsPlayerTile(true);
}
