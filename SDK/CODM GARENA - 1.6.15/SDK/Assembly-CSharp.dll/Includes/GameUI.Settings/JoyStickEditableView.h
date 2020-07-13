#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class JoyStickEditableView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "JoyStickEditableView"));
	}

	template <typename T = float> static T& UNSELECT_ALPHA_SCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_Alpha() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsEditing() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_IsSelected() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = float> T& m_CacheAlpha() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEditing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEditing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Selected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealViewTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T get_Alpha() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448BD2C))(this);
	}
	template <typename T = void> T set_Alpha(float value) {
		return ((T (*)(JoyStickEditableView*, float))(Il2CppBase() + 0x448AA24))(this, value);
	}
	template <typename T = float> T get_Scale() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448AF6C))(this);
	}
	template <typename T = void> T set_Scale(float value) {
		return ((T (*)(JoyStickEditableView*, float))(Il2CppBase() + 0x448B558))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Pos() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448BCB4))(this);
	}
	template <typename T = bool> T get_IsEditing() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448AC70))(this);
	}
	template <typename T = void> T set_IsEditing(bool value) {
		return ((T (*)(JoyStickEditableView*, bool))(Il2CppBase() + 0x448C374))(this, value);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448AC78))(this);
	}
	template <typename T = void> T set_CacheAlpha(float value) {
		return ((T (*)(JoyStickEditableView*, float))(Il2CppBase() + 0x448C37C))(this, value);
	}
	template <typename T = void> T StartEditing() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C384))(this);
	}
	template <typename T = void> T EndEditing() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C460))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C538))(this);
	}
	template <typename T = void> T Selected() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C084))(this);
	}
	template <typename T = void> T UnSelected() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C270))(this);
	}
	template <typename T = uintptr_t> T GetRealViewTransform() {
		return ((T (*)(JoyStickEditableView*))(Il2CppBase() + 0x448C6B4))(this);
	}

};

}
