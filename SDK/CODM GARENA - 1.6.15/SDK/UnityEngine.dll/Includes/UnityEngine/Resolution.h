#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Resolution
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Resolution"));
	}

	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_RefreshRate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_refreshRate() {
		return ((T (*)(Resolution*))(Il2CppBase() + 0x4E78738))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Resolution*))(Il2CppBase() + 0x4E78950))(this);
	}

};

}
