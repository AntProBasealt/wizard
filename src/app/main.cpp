#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QLibrary>
#include <QWizard>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>

#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"

QWizardPage *createIntroPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Начало работы");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new FirstWidget());
    page->setLayout(layout);

    return page;
}

QWizardPage *createRegistrationPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Проверка");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new SecondWidget());
    page->setLayout(layout);

    return page;
}

QWizardPage *createTestPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Устранение неполадок");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new ThirdWidget());
    page->setLayout(layout);

    return page;
}

QWizardPage *createConclusionPage()
{
    QWizardPage *page = new QWizardPage;
    page->setTitle("Завершение");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new FourthWidget());
    page->setLayout(layout);

    return page;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

#ifndef QT_NO_TRANSLATION
    QString translatorFileName = QLatin1String("qtbase_");
    translatorFileName += QLocale::system().name();
    QTranslator *translator = new QTranslator(&app);
    if (translator->load(translatorFileName))
        app.installTranslator(translator);
#endif

    QWizard wizard;
    wizard.addPage(createIntroPage());
    wizard.addPage(createRegistrationPage());
    wizard.addPage(createTestPage());
    wizard.addPage(createConclusionPage());

    wizard.setWindowTitle("Trivial Wizard");
    wizard.show();

    return app.exec();
}
