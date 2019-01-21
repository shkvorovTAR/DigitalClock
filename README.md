# DigitalClock
https://github.com/Anaga/TARvg17/tree/master/HomeWorksData/DigitalClock
TARgv17 Homework: Digital Clock

You need to write a GUI application, that show current time in one big LCD widget.
This is realy simple application, only one lcdNumber in centralWidget, and status bar in MainWindow
see GUI

In MainWindow class header you have timer, dateTime, qsTemp and one function - tick()
see header

In MainWindow class implementation in constructor you have to create new timer, connect it with function tick()
see cpp
and then - write (add some logic in ) function tick()

Output shall be like:
see App1
see App2

The debug output is:

Timer start, call the tick
"2018.12.05 23:34:01"
"2018.12.05 23 34 02"
"2018.12.05 23:34:03"
"2018.12.05 23 34 04"
"2018.12.05 23:34:05"
"2018.12.05 23 34 06"
"2018.12.05 23:34:07"
