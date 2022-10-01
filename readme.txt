// CodingCoffee Linux Turbo C graphic Gitpod Example  , more courses: www.codingcoffee.org

wget https://download-mirror.savannah.gnu.org/releases/libgraph/libgraph-1.0.2.tar.gz

// have get tar file , and put into folder

sudo apt-get update 

sudo apt-get install build-essential

sudo apt-get install libsdl-image1.2 libsdl-image1.2-dev guile-2.0 guile-2.0-dev libsdl1.2debian libart-2.0-dev libaudiofile-dev  libdirectfb-dev libdirectfb-extra libfreetype6-dev libxext-dev x11proto-xext-dev libfreetype6 libaa1 libaa1-dev libslang2-dev libasound2 libasound2-dev libsdl1.2-dev libsdl-image1.2-dev

tar -xf libgraph-1.0.2.tar.gz

cd libgraph-1.0.2

./configure --disable-guile

make -j $(nproc)

sudo make install

sudo cp /usr/local/lib/libgraph.* /usr/lib

gcc libgraphic_ex1.c -lgraph

// C code to illustrate using
// graphics in linux environment
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
 
    circle(50, 50, 30);
 
    delay(500000);
    closegraph();
    return 0;
}
