#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>

class Shader
{
public: 
    // the program ID
    unsigned int ID;

    //constructor reads and builds the shader
     // constructor
    Shader() { }
    void Compile(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use();
    // utility uniform functions
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;
    void setVec3(const std::string &name, float x, float y, float z) const;
    void setVec3(const std::string &name, glm::vec3 v3) const;
    void setVec4(const std::string &name, float x, float y, float z, float w) const;
    void setVec4(const std::string &name, glm::vec4 v4) const;
    void setMat4(const std::string &name, glm::mat4& value ) const;
};
#endif
