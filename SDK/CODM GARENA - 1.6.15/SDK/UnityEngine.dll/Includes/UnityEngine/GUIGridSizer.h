#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIGridSizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIGridSizer"));
	}

	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_XCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_MinButtonWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_MaxButtonWidth() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_MinButtonHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_MaxButtonHeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppRect> static T GetRect(Il2CppArray<uintptr_t>* contents, int32_t xCount, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478C490))(0, contents, xCount, style, options);
	}
	template <typename T = int32_t> T get_rows() {
		return ((T (*)(GUIGridSizer*))(Il2CppBase() + 0x478C380))(this);
	}

};

}
