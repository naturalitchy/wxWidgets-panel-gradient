#ifndef main_frame_h
#define main_frame_h

#include <wx/wx.h>
#include "panel.h"

class MainFrame : public wxFrame {
	private:

	public:
		MainFrame(const wxString &title);
		AddPanel *addPanel;

};

#endif