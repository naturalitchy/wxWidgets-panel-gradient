#include "app.h"

bool App::OnInit() {
	MainFrame *mainFrame = new MainFrame(" Station V ");
	mainFrame->SetSize(900,600);
	mainFrame->Center();

	mainFrame->Show();

	return true;
}