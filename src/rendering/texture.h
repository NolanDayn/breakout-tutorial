#ifndef TEXTURE_H
#define TEXTURE_H

#include <glad/glad.h>

// Texture2D is able to store and configure a texture in OpenGL.
// It also hosts utility functions for easy management.
class Texture2D
{
public:
    //holds the ID of the texture object
    unsigned int ID;
    unsigned int Width, Height;

    unsigned int Internal_Format; // format of the texture object
    unsigned int Image_Format;    // format of loaded image

    unsigned int Wrap_S;        // wrapping mode S axis
    unsigned int Wrap_T;        // wrapping mode T axis
    unsigned int Filter_Min;    // filtering mode if texture pixels < screen pixels
    unsigned int Filter_Max;    // filtering mode if texture pixels > screen pixels

    // constructor (sets default texture modes)
    Texture2D();

    // generate texture from image data
    void Generate(unsigned int width, unsigned int height, unsigned char* data);
    // binds the texture to the current active GL_TEXTURE_2D
    void Bind() const;
};

#endif