#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyListItemWrapperView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyListItemWrapperView"));
	}

	template <typename T = uintptr_t> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ButtonColider() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableClickSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConsiderChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(EasyListItemWrapperView*))(Il2CppBase() + 0x46FCA10))(this);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(EasyListItemWrapperView*, uintptr_t))(Il2CppBase() + 0x46FD740))(this, value);
	}
	template <typename T = void> T SetViewSize(int32_t width, int32_t height) {
		return ((T (*)(EasyListItemWrapperView*, int32_t, int32_t))(Il2CppBase() + 0x46FDF84))(this, width, height);
	}
	template <typename T = void> T EnableClick(bool enableClick, bool enableColider) {
		return ((T (*)(EasyListItemWrapperView*, bool, bool))(Il2CppBase() + 0x46FE164))(this, enableClick, enableColider);
	}
	template <typename T = void> T DisableClickSound(bool disableClickSound) {
		return ((T (*)(EasyListItemWrapperView*, bool))(Il2CppBase() + 0x46FE2E8))(this, disableClickSound);
	}
	template <typename T = void> T SetConsiderChildren(bool considerChildren) {
		return ((T (*)(EasyListItemWrapperView*, bool))(Il2CppBase() + 0x46FE3B4))(this, considerChildren);
	}

};

}
