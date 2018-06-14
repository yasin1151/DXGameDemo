#ifndef __WinCreator__H__
#define __WinCreator__H__

/*
 *	@auther : yasin
 *	@time   : 2018/6/14
 */

#include <Windows.h>

/*
 *	@name : CWinCreator
 *	@brief: 用于创建windows窗口
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

	// win32窗口类
	WNDCLASSEX m_wndClass;

};

#endif