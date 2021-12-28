#include <string.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct GTKmainGrid {
int posX,lenX,posY,lenY,index;
};
extern struct GTKmainGrid tabGrid[];
extern int roundCounter;
extern GtkWidget* label;
extern int UISelectedTile;
extern char globalFigurePlacement[];
extern int globalTransitionalLegalMoveTab[];
extern int globalFinalLegalMoveTab[];
extern int lastMoveOrigin;
extern bool gameOver;
extern bool blackKingDidNotMove;
extern bool whiteKingDidNotMove;
extern bool leftBlackRookDidNotMove;
extern bool rightBlackRookDidNotMove;
extern bool leftWhiteRookDidNotMove;
extern bool rightWhiteRookDidNotMove;


void eventHandler(GtkWidget* clickedTile, gpointer data);
void startingLayout();
char whoseTurn();
char getFigureType(int tileIndex, char figurePlacement[]);
char getFigureSide(int tileIndex, char figurePlacement[]);
bool isEnemy(int selectedTileIndex, int possibleEnemyIndex, char figurePlacement[]);
int kingIndex(char side, char figurePlacement[]);
void resetLegalMoveTables(int transitionalLegalMoveTab[], int finalLegalMoveTab[]);
void moveFigureToTile(int selectedTileIndex, int actionTileIndex, int legalMoveTable[], char figurePlacement[]);
void setLegalMoves(int selectedTileIndex, int finalLegalMoveTab[], int transitionalLegalMoveTab[], char figurePlacement[]);
void drawBoard (GtkWidget* grid);
void resetBoardColors(GtkWidget* grid);
void drawLegalMoves(GtkWidget* boardGrid);
void myCSS(void);
void changeTurnLabel(GtkWidget* label);
void drawUI(GtkWidget* grid);
void checkMoveCheckLegality(int selectedTileIndex, int finalLegalMoveTab[], char figurePlacement[]);
int* checkedTiles(char figurePlacement[]);
void isGameOver();
void moveFigureLogic(int selectedTileIndex, int actionTileIndex, int legalMoveTable[], char figurePlacement[]);