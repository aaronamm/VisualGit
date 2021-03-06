#ifndef MAINFRAME_H
#define MAINFRAME_H

class MainFrame : public wxFrame
{
public:
    MainFrame();
    MainFrame(const wxString& title,
              const wxPoint& pos = wxDefaultPosition,
              const wxSize& size = wxDefaultSize);
    virtual ~MainFrame();

    void OnCloneGitRepository(wxCommandEvent& event);

private:
    void InitMenuBar();
    void InitRepositoriesWindow();
    void InitRepositoryWindows();
    void InitSplitter();
    void InitStatusBar();
    void InitToolBar();

    wxSplitterWindow *m_splitter;
    wxTreeCtrl *m_repositories;

    wxPanel *m_emptyView;

    DECLARE_EVENT_TABLE()
    DECLARE_DYNAMIC_CLASS_NO_COPY(MainFrame)
};

#endif // MAINFRAME_H
