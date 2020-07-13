#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class IL2CPPStructAlignmentAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "IL2CPPStructAlignmentAttribute"));
	}

	template <typename T = int32_t> T& Align() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
