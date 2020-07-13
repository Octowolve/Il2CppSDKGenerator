#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayoutedWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "LayoutedWindow"));
	}

	template <typename T = uintptr_t> T& m_Func() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppRect> T& m_ScreenRect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Options() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Style() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T DoWindow(int32_t windowID) {
		return ((T (*)(LayoutedWindow*, int32_t))(Il2CppBase() + 0x4791BFC))(this, windowID);
	}

};

}
