#include "DisasmDlg.h"
#include "ui_DisasmDlg.h"

CDisasmDlg::CDisasmDlg(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::CDisasmDlg)
{
    ui->setupUi(this);
}

CDisasmDlg::~CDisasmDlg()
{
    delete ui;
}
