import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("2048")


    MainForm {
        anchors.fill: parent
        id:page
        Keys.onPressed: {
          switch (event.key) {
            case Qt.Key_Up:
              vueObjetCpt.VersLeHaut();
              break;
            case Qt.Key_Down:
              vueObjetCpt.VersLeBas();
              break;
            case Qt.Key_Left:
              vueObjetCpt.VersLaGauche();
              break;
            case Qt.Key_Right:
              vueObjetCpt.VersLaDroit();
              break;
          }
        }
        mouseArea1 {
            onClicked:
                vueObjetCpt.Start();
        }
        mouseArea2 {
            onClicked:
                vueObjetCpt.InitJeu();
        }
    }
}
