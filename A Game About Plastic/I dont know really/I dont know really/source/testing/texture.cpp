#include "texture.h"

Texture::Texture(const std::string& path) : m_RendererID(0), m_FilePath(path), m_LocalBuffer(nullptr), m_Width(0), m_Height(0), m_BPP(0)
{
	
}

Texture::~Texture()
{

}

void Texture::Bind(unsigned int slot /* = 0*/) const
{

}

void Texture::unBind() const
{

}