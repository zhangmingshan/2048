import QtQuick 2.5

Rectangle {
    id: page

    width: 360
    height: 360
    property alias rectangle17: rectangle17
    property alias text14: text14
    property alias rectangle14: rectangle14
    property alias text13: text13
    property alias rectangle13: rectangle13
    property alias text12: text12
    property alias rectangle12: rectangle12
    property alias text11: text11
    property alias rectangle11: rectangle11
    property alias text10: text10
    property alias rectangle10: rectangle10
    property alias text9: text9
    property alias rectangle9: rectangle9
    property alias text8: text8
    property alias rectangle8: rectangle8
    property alias text7: text7
    property alias rectangle7: rectangle7
    property alias text6: text6
    property alias rectangle6: rectangle6
    property alias text5: text5
    property alias rectangle5: rectangle5
    property alias text4: text4
    property alias rectangle4: rectangle4
    property alias text3: text3
    property alias rectangle3: rectangle3
    property alias text2: text2
    property alias rectangle2: rectangle2
    property alias text1: text1
    property alias rectangle1: rectangle1
    property alias rectangle15: rectangle15
    property alias text15: text15
    property alias rectangle16: rectangle16
    property alias text16: text16
    property alias image1: image1
    property alias mouseArea2: mouseArea2
    property alias image2: image2
    property alias mouseArea1: mouseArea1
    border.width: 0

    Rectangle {
        id: rectangle17
        x: 73
        y: 92
        width: 200
        height: 201
        color: "#7fdcff"
        visible: true
        clip: false
        anchors.verticalCenterOffset: 25
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
    }

    Rectangle {
        id: rectangle1
        x: 54
        y: 86
        width: 50
        height: 52
        color: "#baffa8"
        radius: 10
        border.color: "#0b049d"
        border.width: 3
        anchors.verticalCenterOffset: -50
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.horizontalCenter: parent.horizontalCenter

        Text {
            id: text1
            x: 13
            y: 19
            //text: qsTr("Text")
            text: vueObjetCpt.cptQML[0]
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            focus: true
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle2
        x: 52
        y: 85
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: -50

        Text {
            id: text2
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[1]
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            focus: true
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle3
        x: 55
        y: 93
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
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
            text: vueObjetCpt.cptQML[2]
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle4
        x: 46
        y: 76
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: -50

        Text {
            id: text4
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[3]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle5
        x: 44
        y: 79
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 0

        Text {
            id: text5
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[4]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle6
        x: 44
        y: 81
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 0

        Text {
            id: text6
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[5]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle7
        x: 53
        y: 90
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 0

        Text {
            id: text7
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[6]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle8
        x: 63
        y: 93
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 0

        Text {
            id: text8
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[7]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle9
        x: 45
        y: 78
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 50

        Text {
            id: text9
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[8]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle10
        x: 51
        y: 83
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 50

        Text {
            id: text10
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[9]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle11
        x: 54
        y: 87
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 50

        Text {
            id: text11
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[10]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle12
        x: 49
        y: 76
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 50

        Text {
            id: text12
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[11]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle13
        x: 50
        y: 75
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -75
        anchors.verticalCenterOffset: 100

        Text {
            id: text13
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[12]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle14
        x: 51
        y: 79
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -25
        anchors.verticalCenterOffset: 100

        Text {
            id: text14
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[13]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle15
        x: 37
        y: 76
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 25
        anchors.verticalCenterOffset: 100

        Text {
            id: text15
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[14]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Rectangle {
        id: rectangle16
        x: 47
        y: 79
        width: 50
        height: 50
        color: "#baffa8"
        border.color: "#0b049d"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 75
        anchors.verticalCenterOffset: 100

        Text {
            id: text16
            x: 13
            y: 19
            text: vueObjetCpt.cptQML[15]
            focus: true
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.family: "Tahoma"
            style: Text.Raised
            font.bold: true
            textFormat: Text.AutoText
            font.pixelSize: 16
        }
    }

    Image {
        id: image1
        x: 180
        y: 327
        width: 50
        height: 50
        anchors.verticalCenterOffset: 170
        anchors.horizontalCenterOffset: 25
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        source: "playbuttonb.png"

        MouseArea {
            id: mouseArea1
            x: 0
            y: 0
            width: 50
            height: 50
            anchors.horizontalCenterOffset: 2
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
    }

    Image {
        id: image2
        x: 230
        y: 327
        width: 50
        height: 50
        anchors.verticalCenterOffset: 170
        anchors.horizontalCenterOffset: 75
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        source: "pausebutton.png"

        MouseArea {
            id: mouseArea2
            width: 50
            height: 50
        }
    }

}
