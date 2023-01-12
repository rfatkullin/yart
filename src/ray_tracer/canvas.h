#pragma once
#include <cstdint>

class Canvas
{
public:
	Canvas(uint32_t width, uint32_t height);
	~Canvas();

	void Resize(uint32_t width, uint32_t height);

	uint32_t* GetData();

	void PutPixel(int x, int y, int color);

private:
	uint32_t _width = -1;
	uint32_t _height = -1;

	uint32_t* _renderData;
};