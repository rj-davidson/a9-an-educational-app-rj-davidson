#ifndef CUBECONTROLLER_H
#define CUBECONTROLLER_H

#include <QWidget>
#include <QImage>
#include <vector>

#include "Cube.h"
#include "ViewCube.h"

class CubeController: public QWidget
{
    Q_OBJECT
public:
    explicit CubeController(QWidget *parent = nullptr);
signals:
    void updateCube(std::vector<QImage>);
private:
    Cube userCube;
    void setupAndRandomizeCube();
    void setUpFirstCross();
    void setUpFirstCorners();
    void setUpNeighbors();
    void setUpBottomCross();
    void setUpFinalCorners();

public:
    void setEduMode(int);

public slots:
    void switchFace(int);
    void MoveCube(int);
};

#endif // CUBECONTROLLER_H
