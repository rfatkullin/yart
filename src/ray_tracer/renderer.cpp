#include "canvas.h"
#include "renderer.h"

Renderer::Renderer()
{
	_canvas = new Canvas(1, 1);
}

Renderer::~Renderer()
{
	delete _canvas;
}

void Renderer::Render(uint32_t width, uint32_t height)
{
	_canvas->Resize(width, height);

	for (uint32_t i = 0; i < width; ++i)
	{
		for (uint32_t j = 0; j < height; ++j)
		{
			_canvas->PutPixel(i, j, 0x22FF0000);
		}
	}
}

uint32_t* Renderer::GetImageAsRawData()
{
	return _canvas->GetData();
}