#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel.Design {

class IDesigner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel.Design", "IDesigner"));
	}



};

}
