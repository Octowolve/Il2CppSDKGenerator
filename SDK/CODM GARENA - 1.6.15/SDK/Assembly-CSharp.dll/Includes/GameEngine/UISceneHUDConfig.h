#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UISceneHUDConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UISceneHUDConfig"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Asset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Z() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& EulerX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& EulerY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& EulerZ() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Anchor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& MinScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& MaxScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& DefaultScale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MinAlpha() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MaxAlpha() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& DefAlpha() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Layer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& DisplayBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& CanHideBtn() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& IsTriggerBtn() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HUDType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GUIAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Position() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T HUDType() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76790))(this);
	}
	template <typename T = uintptr_t> T GUIAnchor() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76878))(this);
	}
	template <typename T = Il2CppVector3> T Position() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76978))(this);
	}
	template <typename T = Il2CppVector3> T ScaleValue() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76A4C))(this);
	}
	template <typename T = Il2CppQuaternion> T Rotation() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76B24))(this);
	}
	template <typename T = uintptr_t> T GUILayer() {
		return ((T (*)(UISceneHUDConfig*))(Il2CppBase() + 0x2E76BF8))(this);
	}

};

}
