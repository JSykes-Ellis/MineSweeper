#pragma once
#include "wx/wx.h"
#include "MineSweeperMain.h"

class cApp : public wxApp
{
public:
	cApp();
	~cApp();

private:
	MineSweeperMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

