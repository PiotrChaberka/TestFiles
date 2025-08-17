with open(r'C:\Users\piotr\Pulpit\PythonPrograms\test\TestFiles\Test\data_test.txt', 'r') as file:
    data = file.read()



split_data = data.splitlines()
print(split_data)

for i in range(len(split_data)):
    if int(split_data[i]) > 100:
        print("over 100", split_data[i])
    else:
        print("less than 100", split_data[i])
