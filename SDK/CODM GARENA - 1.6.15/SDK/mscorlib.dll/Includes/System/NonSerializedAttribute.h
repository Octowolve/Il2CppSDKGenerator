#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class NonSerializedAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "NonSerializedAttribute"));
	}



};

}