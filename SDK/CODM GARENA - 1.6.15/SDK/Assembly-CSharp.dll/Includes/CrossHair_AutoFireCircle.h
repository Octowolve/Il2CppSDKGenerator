#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CrossHairAutoFireCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CrossHair_AutoFireCircle"));
	}

	template <typename T = uintptr_t> T& UpSign() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& DownSign() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LeftSign() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RightSign() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SignContainer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& MinSize() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& MaxSize() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& mChangeTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& CountTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBeginCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSignPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CrossHairAutoFireCircle*))(Il2CppBase() + 0x4155BC0))(this);
	}
	template <typename T = void> T SetSprite(Il2CppString* spriteName) {
		return ((T (*)(CrossHairAutoFireCircle*, Il2CppString*))(Il2CppBase() + 0x4155D18))(this, spriteName);
	}
	template <typename T = void> T OnNotifyBeginCircle(uintptr_t msg) {
		return ((T (*)(CrossHairAutoFireCircle*, uintptr_t))(Il2CppBase() + 0x4155E48))(this, msg);
	}
	template <typename T = bool> T IsHideUI() {
		return ((T (*)(CrossHairAutoFireCircle*))(Il2CppBase() + 0x4156034))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CrossHairAutoFireCircle*))(Il2CppBase() + 0x4156368))(this);
	}
	template <typename T = void> T SetSignPosition(float dis) {
		return ((T (*)(CrossHairAutoFireCircle*, float))(Il2CppBase() + 0x41565E8))(this, dis);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CrossHairAutoFireCircle*))(Il2CppBase() + 0x41567E8))(this);
	}

};

}
