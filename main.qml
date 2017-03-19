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
              vueObjetCpt.increment();
              break;
            case Qt.Key_Down:
              vueObjetCpt.decrement();
              break;
          }
        }

    }
}
