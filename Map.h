#ifndef MAP
#define MAP
#include <iostream>
#include <Eigen/Dense>

class Map{

    Eigen::MatrixXd *currentMap;
    Eigen::Vector2d goal;
    Eigen::Vector2d start;
    int row;
    int col;
    double tolerance;

public:

    Map(int row, int col, int tolerance, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos);

    Map(int row, int col, int * rawMap, Eigen::Vector2d startPos, Eigen::Vector2d goalPos);

    Eigen::Vector2d randPoint();

    Eigen::Vector2d nearestPoint(Eigen::Vector2d refpt);

    Eigen::Vector2d goalPosition();

    Eigen::Vector2d startingPositions();

    bool inObstacle(Eigen::Vector2d & point);

    void mapDisplay();



};

#endif /*MAP.H*/
