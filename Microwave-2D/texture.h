﻿#ifndef TEXTURE_H
#define TEXTURE_H

#include<GL/glew.h>
#include"shader.h"

#include <ft2build.h>
#include FT_FREETYPE_H
class Texture
{
public:
	GLuint ID;
	GLenum type;
	void texUnit(Shader& shader, const char* uniform, GLuint unit);
	Texture(const char* image, GLenum texType, GLenum slot, GLenum format, GLenum pixelType);
	//Texture(FT_Bitmap& bitmap, GLenum texType, GLenum slot);

	void assignUnit(Shader& shader, const char* uniform, GLuint unit);

	void Bind();
	void Unbind();
	void Delete();
};
#endif