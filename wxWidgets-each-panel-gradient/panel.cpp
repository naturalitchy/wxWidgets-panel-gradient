#include "panel.h"

AddPanel::AddPanel(wxFrame *parent, int width, int height)
:wxScrolledWindow(parent, wxID_ANY, wxDefaultPosition, wxSize(width, height))
{
}



void AddPanel::OnPaint(const wxPaintEvent &evt) {
	wxLogStatus("execute");

	/*
	wxPaintDC dc(this);
	int hh, ww;
	wxWindow::GetClientSize(&ww, &hh);
	int h;
	h = (hh + 255) / 256;
	for (int r = 0; r <= hh; r++) {
		if ((r % h) == 0) {
			wxPen p(wxColour(r / h, 0, 128));
			dc.SetPen(p);
		}
		dc.DrawLine(0, r, ww, r);
	}
	dc.DrawText(_T("Gradient wxFrame Sample"), 25, 25);
	*/

	wxPaintDC dc(this);

	wxRect clientRect = GetClientRect();
	wxRect gradientRect = clientRect;
	//gradientRect.SetHeight(gradientRect.GetHeight() / 2);
	dc.GradientFillLinear(gradientRect, wxColour(40, 40, 45), wxColour(38, 38, 43), wxSOUTH);
	gradientRect.Offset(0, gradientRect.GetHeight());
	dc.GradientFillLinear(gradientRect, wxColour(36, 36, 41), wxColour(34, 34, 39), wxSOUTH);

	//dc.SetPen(wxPen(GetBackgroundColour()));
	dc.SetPen(wxColor(255,0,0));
	dc.SetBrush(*wxTRANSPARENT_BRUSH);
	dc.DrawRectangle(0, 0, clientRect.GetWidth(), clientRect.GetHeight());
	dc.SetFont(GetFont());
	dc.SetTextForeground(GetForegroundColour());
	//dc.DrawLabel("HEllo", clientRect, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL);

}

