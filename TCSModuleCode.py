NoOfTestCases = input('Number of test cases?')
while NoOfTestCases > 0:
	NoOfModules = input('Number of modules?')
	ArrayOfModules = []
	for a in range(NoOfModules):
		ObjInfo = {}
		arr = []
		ObjInfo['Id'] = input('Module Id?')
		ObjInfo['Hours'] = input('Hours')
		#Dependent = input('space separated ids')
		#ObjInfo = list(map(int, Dependent.split()))
		#ObjInfo['Dep'] = input.split(' ')
		ObjInfo['Dep'] = [int(x) for x in raw_input("Enter integers:").split()]
		ArrayOfModules.append(ObjInfo)
	NoOfTestCases-=1
print(ArrayOfModules)

for a in ArrayOfModules:
			

