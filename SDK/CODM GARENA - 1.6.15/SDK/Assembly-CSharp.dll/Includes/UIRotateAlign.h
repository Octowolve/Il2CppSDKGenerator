#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIRotateAlign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIRotateAlign"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bottom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& top() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& ClockTurn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& InClockTurn() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& pvt() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& anchorBox() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& bUpdate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIRotateAlign*))(Il2CppBase() + 0x2F9A2DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRotateAlign*))(Il2CppBase() + 0x2F9A838))(this);
	}
	template <typename T = void> T ForceUpdate(bool recursive) {
		return ((T (*)(UIRotateAlign*, bool))(Il2CppBase() + 0x2F9B090))(this, recursive);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate(bool P0) {
		return ((T (*)(UIRotateAlign*, bool))(Il2CppBase() + 0x2F9B144))(this, P0);
	}

};

}
