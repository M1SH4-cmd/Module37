import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Video Player"

    Rectangle {
        id: videoArea
        width: parent.width
        height: parent.height - 150
        color: "black"

        Text {
            text: "Video Area"
            color: "white"
            font.pixelSize: 24
            anchors.centerIn: parent
        }
    }

    Rectangle {
        width: parent.width
        height: 150
        anchors.bottom: parent.bottom
        color: "lightgray"

        Row {
            id: controlButtons
            anchors {
                horizontalCenter: parent.horizontalCenter
                top: parent.top
                topMargin: 20
            }
            spacing: 20

            Button {
                text: "⏪️"
                font.pixelSize: 24
                onClicked: {
                    console.log("Rewind clicked")
                }
            }

            Button {
                text: "▶️"
                font.pixelSize: 24
                onClicked: {
                    console.log("Play clicked")
                }
            }

            Button {
                text: "⏸️"
                font.pixelSize: 24
                onClicked: {
                    console.log("Pause clicked")
                }
            }

            Button {
                text: "⏹"
                font.pixelSize: 24
                onClicked: {
                    console.log("Stop clicked")
                }
            }

            Button {
                text: "⏩️"
                font.pixelSize: 24
                onClicked: {
                    console.log("Forward clicked")
                }
            }
        }

        ProgressBar {
            id: progressBar
            width: parent.width - 40
            anchors {
                horizontalCenter: parent.horizontalCenter
                top: controlButtons.bottom
                topMargin: 20
            }
            value: 0.5 // Примерное значение (50%)
        }
    }
}
