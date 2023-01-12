#include "canvas.h"

Canvas::Canvas(uint32_t width, uint32_t height)
{
	Resize(width, height);
}

Canvas::~Canvas()
{
	delete[] _renderData;
}

void Canvas::Resize(uint32_t width, uint32_t height)
{
	if (width == _width && height == _height)
	{
		return;
	}

	_width = width;
	_height = height;

	delete[] _renderData;

	_renderData = new uint32_t[_width * _height];
}

uint32_t* Canvas::GetData()
{
	return _renderData;
}

void Canvas::PutPixel(int x, int y, int color)
{
	_renderData[y * _width + x] = color;
}