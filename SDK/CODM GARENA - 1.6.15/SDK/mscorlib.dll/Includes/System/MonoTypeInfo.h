#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoTypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoTypeInfo"));
	}

	template <typename T = Il2CppString*> T& full_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& default_ctor() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
