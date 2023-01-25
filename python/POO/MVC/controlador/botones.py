from  PySide2 import QtWidgets , QtCore
import sys
#Vista.ui_botones eso signidica Carpeta.archivo
from vista.ui_botones import Ui_MainWindow #Ui_MainWindow es la clase que se encuentra en la particula
#El nombre de la clase es cambiable
class Loginn(QtWidgets.QMainWindow):#Boton es cambiable
    
    def __init__(self, *args , parent=None):
        
        super(Loginn, self).__init__(parent)#Boton es cambiable
        self.venPri = Ui_MainWindow()
        self.venPri.setupUi(self)  
        self.venPri.pushButton_5.clicked.connect(lambda: self.close())
    