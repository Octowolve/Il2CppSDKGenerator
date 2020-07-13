#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyPopupItemWrapperView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyPopupItemWrapperView"));
	}

	template <typename T = uintptr_t> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetSize(int32_t width, int32_t height) {
		return ((T (*)(EasyPopupItemWrapperView*, int32_t, int32_t))(Il2CppBase() + 0x47002F4))(this, width, height);
	}

};

}
