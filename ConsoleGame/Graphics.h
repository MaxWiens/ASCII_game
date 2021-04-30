#pragma once
class Graphics{
public:
	Graphics();
	~Graphics(){}
	void Draw(char c, int x, int y);
	void Clear();
	char* EndDraw();
	char* 

private:
	bool _is_first_buffer;
	char _buffer1[256];
	char _buffer2[256];
	char* _current_buffer;
	bool _is_dirty;
};