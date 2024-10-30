.PHONY: all

all:
    g++ -Wall ThreeXPlusOne.cpp -o app.exe

clean:
    rm -f *.exe
