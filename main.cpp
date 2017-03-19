#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "jeu2048.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Jeu unJeu;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetCpt", &unJeu);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();

    /*Jeu premier(4,4,208,0);
    cout<<premier;*/
}
