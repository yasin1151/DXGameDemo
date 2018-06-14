#ifndef __WinCreator__H__
#define __WinCreator__H__

/*
 *	@auther : yasin
 *	@time   : 2018/6/14
 */

#include <Windows.h>

/*
 *	@name : CWinCreator
 *	@brief: ���ڴ���windows����
 */
class CWinCreator
{
public:

	/*
	 * @brief : 
	 */
	CWinCreator();

	bool Create();

	HWND GetHWND();

private:

	// win32������
	WNDCLASSEX m_wndClass;

};

#endif