#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ILTokenInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ILTokenInfo"));
	}

	template <typename T = uintptr_t> T& member() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& code_pos() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
