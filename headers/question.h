#ifndef QUESTION_H
#define QUESTION_H

#include <string>

#include "libsqlite.h"
#include "tile.h"

class Question : public Tile
{
public:
  Question();
  Question(SDL_Texture* tileset, Graphics &graphics, Vector2 position, unsigned short id);

  void askQuestion();
  std::string getRandomQuestion();

private:
};

#endif
