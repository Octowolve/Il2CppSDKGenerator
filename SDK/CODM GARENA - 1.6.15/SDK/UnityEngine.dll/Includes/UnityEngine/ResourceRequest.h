#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ResourceRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ResourceRequest"));
	}

	template <typename T = Il2CppString*> T& m_Path() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_asset() {
		return ((T (*)(ResourceRequest*))(Il2CppBase() + 0x4E789C4))(this);
	}

};

}
