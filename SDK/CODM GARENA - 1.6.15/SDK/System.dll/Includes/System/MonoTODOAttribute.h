#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoTODOAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System", "MonoTODOAttribute"));
	}

	template <typename T = Il2CppString*> T& comment() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
