import QtQuick 2.5

Rectangle {
    id: page

    width: 360
    height: 360

    Rectangle {
        id: rectangle1
        x: 54
        y: 86
        width: 50
        height: 50
        color: "#aaffff"
        anchors.verticalCenterOffset: -50
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.horizontalCenter: parent.horizontalCenter

        Text {
            id: text1
            x: 13
            y: 19
            //text: qsTr("Text")
            text: vueObjetCpt.cptQML[1][1]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle2
        x: 52
        y: 85
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: -50

        Text {
            id: text2
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[1][2]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle3
        x: 55
        y: 93
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: -50

        Text {
            id: text3
            x: 13
            y: 19
            //text: qsTr("Text")
            focus: true
            text: vueObjetCpt.cptQML[1][3]
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle4
        x: 46
        y: 76
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: -50

        Text {
            id: text4
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[1][4]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle5
        x: 44
        y: 79
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 0

        Text {
            id: text5
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[2][1]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle6
        x: 44
        y: 81
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 0

        Text {
            id: text6
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[2][2]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle7
        x: 53
        y: 90
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 0

        Text {
            id: text7
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[2][3]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle8
        x: 63
        y: 93
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 0

        Text {
            id: text8
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[2][4]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle9
        x: 45
        y: 78
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 50

        Text {
            id: text9
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[3][1]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle10
        x: 51
        y: 83
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 50

        Text {
            id: text10
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[3][2]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle11
        x: 54
        y: 87
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 50

        Text {
            id: text11
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[3][3]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle12
        x: 49
        y: 76
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 50

        Text {
            id: text12
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[3][4]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle13
        x: 50
        y: 75
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 100

        Text {
            id: text13
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[4][1]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle14
        x: 51
        y: 79
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 100

        Text {
            id: text14
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[4][2]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle15
        x: 37
        y: 76
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 100

        Text {
            id: text15
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[4][3]
            focus: true
            font.pixelSize: 12
        }
    }

    Rectangle {
        id: rectangle16
        x: 47
        y: 79
        width: 50
        height: 50
        color: "#aaffff"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 100

        Text {
            id: text16
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[4][4]
            focus: true
            font.pixelSize: 12
        }
    }
}
