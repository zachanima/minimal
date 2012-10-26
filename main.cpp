#include "main.hpp"

GLvoid create(GLuint width, GLuint height) {
  const GLuint BPP = 16;
  const GLuint FLAGS = SDL_OPENGL | SDL_GL_DOUBLEBUFFER | SDL_HWPALETTE | SDL_HWACCEL;
  SDL_Init(SDL_INIT_VIDEO);
  atexit(SDL_Quit);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
  SDL_WM_SetCaption("Window", 0);
  SDL_SetVideoMode(width, height, BPP, FLAGS);
}



int main() {
  create(1280, 720);

  while (true) {
    // Draw stuff here.
    SDL_GL_SwapBuffers();
  }

  return 0;
}
