
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow){
	
	HWND SharpSim = FindWindow(_T("SHARP SIM"), NULL);
	if(SharpSim == NULL){
		MessageBox(NULL, _T("Failed to get Window Handler. Exiting."), _T("Error"), MB_OK);
		return EXIT_FAILURE;
	}else{
		// Kill it.
		PostMessage(SharpSim, WM_CLOSE, NULL, NULL);
	}
	return EXIT_SUCCESS;
}
