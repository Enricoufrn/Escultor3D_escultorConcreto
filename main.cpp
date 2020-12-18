#include <iostream>
#include <Sculptor.h>
#include <string>
using namespace std;
char* TesteEsculptor = "Escultura.off";
int main()
{
    Sculptor escultura(50,50,50);
    escultura.setColor(193.5546,0,0,0);
    escultura.putVoxel(0,0,0);
    escultura.setColor(0,193.5546,0,0);
    escultura.putBox(0,6,0,6,0,6);
    //escultura.cutBox(1,4,1,4,1,4);
    escultura.putSphere(8,8,8,5);
    //escultura.cutSphere(3,3,3,1);
    escultura.putEllipsoid(20,20,20,5,5,10);
    //escultura.cutEllipsoid(3,3,3,1,2,3);
    escultura.writeOFF(TesteEsculptor);
}
