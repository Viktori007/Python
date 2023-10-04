import openpyxl
from openpyxl.chart import BarChart, Reference

#создаем ексель-файл
wb = openpyxl.Workbook()
sheet = wb.active

#записываем тыда данные
data = [
    ("x", "y"),
    (1, 10),
    (2, 15),
    (3, 7),
    (4, 12),
]

for row in data:
    sheet.append(row)

#создаем объект для построения диаграммы
chart = BarChart()
chart.title = "diagramma x u y"
chart.x_axis.title = "x"
chart.y_axis.title = "y"

#указываем диапозон данных для диаграммы
data = Reference(sheet, min_col=2, min_row=1, max_col=2, max_row=len(data))
categories = Reference(sheet, min_col=1, min_row=2, max_row=len(data))

chart.add_data(data, titles_from_data=True)
chart.set_categories(categories)

#вставляем диаграмму в файл
sheet.add_chart(chart, "E5")

#сохраняем файл
wb.save("exel_example.xlsx")
