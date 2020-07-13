#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ObsoleteAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ObsoleteAttribute"));
	}

	template <typename T = Il2CppString*> T& _message() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _error() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
