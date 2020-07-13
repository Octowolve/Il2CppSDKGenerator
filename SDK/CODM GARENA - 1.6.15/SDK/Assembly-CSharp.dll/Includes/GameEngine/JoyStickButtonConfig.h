#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class JoyStickButtonConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "JoyStickButtonConfig"));
	}

	template <typename T = float> T& xPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& yPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& zPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Scale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MinScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& DefaultScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& EulerX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& EulerY() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& EulerZ() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Anchor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Layer() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& MaxAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MinAlpha() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DefAlpha() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& DisplayBtn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& CanHideBtn() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> T& ButtonType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& IsCreate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& TouchScaleRate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampedScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GUIAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Position() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GUILayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T ClampedScale() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x24778C4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x24779E4))(this);
	}
	template <typename T = uintptr_t> T GUIAnchor() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x2477ADC))(this);
	}
	template <typename T = Il2CppVector3> T Position() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x2477BDC))(this);
	}
	template <typename T = Il2CppQuaternion> T Rotation() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x2477CB0))(this);
	}
	template <typename T = uintptr_t> T GUILayer() {
		return ((T (*)(JoyStickButtonConfig*))(Il2CppBase() + 0x2477D84))(this);
	}

};

}
