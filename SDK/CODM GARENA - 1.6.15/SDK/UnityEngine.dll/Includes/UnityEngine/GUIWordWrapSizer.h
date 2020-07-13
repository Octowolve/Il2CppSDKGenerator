#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIWordWrapSizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIWordWrapSizer"));
	}

	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_ForcedMinHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_ForcedMaxHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T CalcWidth() {
		return ((T (*)(GUIWordWrapSizer*))(Il2CppBase() + 0x47A10CC))(this);
	}
	template <typename T = void> T CalcHeight() {
		return ((T (*)(GUIWordWrapSizer*))(Il2CppBase() + 0x47A1160))(this);
	}

};

}
