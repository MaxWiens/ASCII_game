#include "Graphics.h"
#include<stdlib.h>
Graphics::Graphics(){
	_current_buffer = _buffer1;
}

void Graphics::Draw(char c, int x, int y){
	_is_dirty = true;
}

void Graphics::Clear(){
#if defined _WIN32
	system("cls");
#elif defined __LINUX__
	system("clear");
#elif defined __APPLE__
	system("clear");
#endif
}

char* Graphics::EndDraw(){
	char* finalBuffer = _current_buffer;
	_current_buffer  = (_current_buffer == _buffer1) ? _buffer2 : _buffer1;
	return _current_buffer;
}
