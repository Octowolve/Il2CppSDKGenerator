#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DelegateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DelegateData"));
	}

	template <typename T = uintptr_t> T& target_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& method_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
