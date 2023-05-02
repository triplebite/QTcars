#ifndef GAME_H
#define GAME_H
#include "car.h"
#include <QSize>
#include "car.h"

class Game
{
public:
    Game();
    static const int num_checkpoints;
    static const int points[8][2];
    static const QSize RESOLUTION;
    const QString PATH_TO_BACKGROUND_PIXMAP;
    const QString PATH_TO_CAR_PIXMAP[5];
    const float ITERATION_VALUE;

    float car_R;

    static const int COUNT_OF_CARS;
    Car car[5];


   float speed, angle;
   float maxSpeed;
   float acc, dec;
   float turnSpeed;

   int offsetX,offsetY;
};

#endif // GAME_H
