#include "KGenerator.h"

KGenerator::KGenerator(int width_, int height_)
{
	this->width = width_;
	this->height = height_;

	Run();
}

void KGenerator::Run()
{
	KBoardData boardData(width, height);
	PutBlock(boardData);
}

/*
<�̵�����>
1. (0,0)�� �������� X��ǥ�̵�
2. Y��ǥ �̵�.
3. roate 4ȸ
4. flip
5. ���� ��
*/
void KGenerator::PutBlock(KBoardData& boardData_)
{

}