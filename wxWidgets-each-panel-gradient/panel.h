#ifndef panel_h
#define panel_h

#include <wx/wx.h>
//#include "main-frame.h"

class AddPanel : public wxScrolledWindow {
	private:
		wxScrolledWindow *scroll;
	public:
		AddPanel(wxFrame *parent, int width, int height);
		void OnPaint(const wxPaintEvent &evt);
};

#endif