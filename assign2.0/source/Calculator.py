import sys
import calc
import ArithmeticLibrary
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import QApplication
from PyQt5 import QtGui, QtCore
from PyQt5 import QtWidgets



class CalcApp(QtWidgets.QMainWindow, calc.Ui_MainWindow):
    def __init__(self, parent=None):
        super(CalcApp, self).__init__(parent)
        self.setupUi(self)
        self.setupButtons()
        
    def setupButtons(self):
        self.pushButton1.clicked.connect(lambda: self.setEditText(self.pushButton1, self.lineEdit))
        self.pushButton2.clicked.connect(lambda: self.setEditText(self.pushButton2, self.lineEdit))
        self.pushButton3.clicked.connect(lambda: self.setEditText(self.pushButton3, self.lineEdit))
        self.pushButton4.clicked.connect(lambda: self.setEditText(self.pushButton4, self.lineEdit))
        self.pushButton5.clicked.connect(lambda: self.setEditText(self.pushButton5, self.lineEdit))
        self.pushButton6.clicked.connect(lambda: self.setEditText(self.pushButton6, self.lineEdit))
        self.pushButton7.clicked.connect(lambda: self.setEditText(self.pushButton7, self.lineEdit))
        self.pushButton8.clicked.connect(lambda: self.setEditText(self.pushButton8, self.lineEdit))
        self.pushButton9.clicked.connect(lambda: self.setEditText(self.pushButton9, self.lineEdit))
        self.pushButtonPlus.clicked.connect(lambda: self.setEditText(self.pushButtonPlus, self.lineEdit))
        self.pushButtonMinus.clicked.connect(lambda: self.setEditText(self.pushButtonMinus, self.lineEdit))
        self.pushButtonMult.clicked.connect(lambda: self.setEditText(self.pushButtonMult, self.lineEdit))
        self.pushButtonDiv.clicked.connect(lambda: self.setEditText(self.pushButtonDiv, self.lineEdit))
        self.pushButtonClear.clicked.connect(lambda: self.clear(self.lineEdit))
        self.pushButtonEq.clicked.connect(lambda: self.button_clicked(self.lineEdit))
        self.lineEdit.setFocus()
    
    def setEditText(self, pushButton, lineEdit):
        num = pushButton.text()
        lineEdit.setText(str(self.lineEdit.text()+num))   
        
    def button_clicked(self, ledit):
        exp = ledit.text()
        match exp[1]:
            case "+":
                res = ArithmeticLibrary.mathit("add", exp[0], exp[2])
            case "-":
                res = ArithmeticLibrary.mathit("sub", exp[0], exp[2])
            case "*":
                res = ArithmeticLibrary.mathit("mult", exp[0], exp[2])
            case "/":
                res = ArithmeticLibrary.mathit("div", exp[0], exp[2])
            case _:
                lineEdit.setText(str(self.lineEdit.text("ERROR")))
        res = str(self.evaluateExp(exp))
        ledit.setText(res)
        
    def evaluateExp(self, expression):
        try:
            result = eval(expression)
        except (ValueError, SyntaxError, ArithmeticError):
            result = "Error manual" + str(type(Exception))
        return result
    
    def clear(self, lineEdit):
        self.lineEdit.setText('') 

def main():
    app = QApplication(sys.argv)
    form = CalcApp()
    form.show()
    app.exec_()

    
    
if __name__ == "__main__":
    main()
    
