#ifndef app_h
#define app_h

#include "main-frame.h"

class App : public wxApp {
	private:

	public:
		bool OnInit();
};
IMPLEMENT_APP(App)

#endif