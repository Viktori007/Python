import sys
from PyQt6.QtWidgets import QApplication, QMainWindow, QWidget, QVBoxLayout, QTextEdit, QPushButton, QLineEdit

#создаем функцию для вывода текста:
def text_result():
    try:
        user_text = input_text.text() #берем текст из поля
        result = eval(user_text) #преобразуем в питоновский код
        result_text = "результат:" + user_text + "=" + str(result)
    except:
        result_text= "ошибка!"
    result_text_edit.setText(result_text)

def text_result2():
    user_text = input_text.text()
    r=
    result = user_text*user_text
    result_text = "результат:"+ str(result)

def text_result3():
    result_text = "результат:"

app = QApplication(sys.argv)
#создаём экземпляр QApplication и передаём sys.arg
# (список Python с аргументами командной строки, передаваемыми приложению):

windows = QMainWindow()
#windows = QPushButton("Push Me")
#будет просто кнопка

central_widget = QWidget()
windows.setCentralWidget(central_widget)

layout = QVBoxLayout()

result_text_edit = QTextEdit()
result_text_edit.setReadOnly(True) #запрещает ввод
layout.addWidget(result_text_edit) #создает поле ввода

input_text = QLineEdit()
input_text.setPlaceholderText("Введите")
layout.addWidget(input_text)

button1 = QPushButton("Вычислить") #надпись на кнопке
button2 = QPushButton("квадрат")
button3 = QPushButton("корень")
layout.addWidget(button1) #показывает кнопку
layout.addWidget(button2)
layout.addWidget(button3)
button1.clicked.connect(text_result)#создает событие клика по кнопке, вызывает функцию
button2.clicked.connect(text_result2)
button3.clicked.connect(text_result3)
central_widget.setLayout(layout)

windows.show() #показывает окно
sys.exit(app.exec()) # Запускает цикл событий.
