#include "MainFrame.h"
#include <wx/spinctrl.h>
#include<wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title)  {
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	wxCheckBox* checkBox = new wxCheckBox(panel, wxID_ANY, "Check Box", wxPoint(150, 100), wxSize(100, 35));
	wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Static Text", wxPoint(150, 150));
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(150, 200));
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 20, 0, 100, wxPoint(150, 250));
	wxGauge* guage = new wxGauge(panel, wxID_ANY, 100, wxPoint(150, 300)); guage->SetValue(56);

	wxArrayString choices = { "First", "Second", "Third" };

	wxChoice* choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 350), wxDefaultSize, choices); choice->Select(0);

	wxSpinCtrl* spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "", wxPoint(150, 400));

	wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 450), wxDefaultSize, choices);

	wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Radio Box", wxPoint(150, 500), wxDefaultSize, choices);
}
