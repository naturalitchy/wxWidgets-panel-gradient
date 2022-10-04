#include "main-frame.h"


MainFrame::MainFrame(const wxString &title)
: wxFrame(nullptr, wxID_ANY, title) 
{
	/*
	wxPanel *panel = new wxPanel(this);
	panel->SetBackgroundColour(*wxBLACK);
	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sizer->Add(panel, 1, wxEXPAND | wxALL);
	*/
	CreateStatusBar();

	addPanel = new AddPanel(this, 200, 300);
	addPanel->Bind(wxEVT_PAINT, &AddPanel::OnPaint, addPanel);
	wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
	sizer->Add(addPanel);
	

	this->SetSizer(sizer);
}
