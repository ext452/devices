
Добавилось поле ID 26 индексы 0..935
распределение индексов дано в табличке -файл книга1.xlc
#define defSREZMON  13
// Структура данных среза для месяца
typedef struct{
		ulong		DATETIME;
		long double     Energy[6];   // энергия по 6-ти квадрантам
		long double     Power[6];    // маскимальная средняя мощность за время интеграции   
                uint        CRC;
} _srez;