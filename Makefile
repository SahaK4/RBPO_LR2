all: Task1\Task1.exe Task2\Task2.exe Task3\Task3.exe Task4\Task4.exe Task5\Task5.exe Task6\Task6.exe Task7\Task7.exe Task8\Task8.exe Task9\Task9.exe Task10\Task10.exe
Task1\Task1.exe: Task1\Task1.cpp
	cl /FeTask1\Task1.exe Task1\Task1.cpp
Task2\Task2.exe: Task2\Task2.cpp
	cl /FeTask2\Task2.exe Task2\Task2.cpp
Task3\Task3.exe: Task3\Task3.cpp
	cl /FeTask3\Task3.exe Task3\Task3.cpp
Task3\Task3.exe: Task3\Task3.cpp
	cl /FeTask3\Task3.exe Task3\Task3.cpp
Task4\Task4.exe: Task4\Task4.cpp
	cl /FeTask4\Task4.exe Task4\Task4.cpp
Task5\Task5.exe: Task5\Task5.cpp
	cl /FeTask5\Task5.exe Task5\Task5.cpp
Task6\Task6.exe: Task6\Task6_main.cpp Task6\Task6_func.cpp
	cl /FeTask6\Task6.exe Task6\Task6_main.cpp Task6\Task6_func.cpp
Task7\Task7.exe: Task7\Task7_main.cpp Task7\Task7_func.cpp
	cl /FeTask7\Task7.exe Task7\Task7_main.cpp Task7\Task7_func.cpp
Task8\Task8.exe: Task8\Task8_main.cpp Task8\Task8_func.cpp
	cl /FeTask8\Task8.exe Task8\Task8_main.cpp Task8\Task8_func.cpp
Task9\Task9.exe: Task9\Task9_main.cpp Task9\Task9_func.cpp
	cl /FeTask9\Task9.exe Task9\Task9_main.cpp Task9\Task9_func.cpp
Task10\Task10.exe: Task9_func.obj Task9_main.obj
	lib  /out:Task10_lib.lib Task9_func.obj
	link /out:Task10\Task10.exe Task9_main.obj Task10_lib.lib
clean:
	del /s /q *.exe
	del /s /q *.obj
	del /s /q *.lib