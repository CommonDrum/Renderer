#pragma once

#include <vector>
#include <GL/glew.h>


struct VertexBufferElement
{
    unsigned int type;
    unsigned int count;
    unsigned char normalized;
};

//Layout exists to tell OpenGL how to interpret the data in the buffer
//TODO : Add support for other types
class VertexBufferLayout
{
    private:
        std::vector<VertexBufferElement> m_elements;
        unsigned int m_stride;

    public:
    
    template<typename T>
    void push(unsigned int count);

    VertexBufferLayout()
        : m_stride(0) {}

    inline const std::vector<VertexBufferElement>& getElements() const { return m_elements; }
    inline unsigned int getStride() const { return m_stride; }
};

