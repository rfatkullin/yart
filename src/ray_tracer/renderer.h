#pragma once
#include <cstdint>
#include "canvas.h"

class Renderer
{
public:
	Renderer();
	~Renderer();

	void Render(uint32_t width, uint32_t height);

	uint32_t* GetImageAsRawData();

private:
	Canvas* _canvas;
};
