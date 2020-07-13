#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomDragDropView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomDragDropView"));
	}

	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& CallbackEx() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CloneCustomObject() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& CloneCallback() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropStartCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDraging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415DA10))(this);
	}
	template <typename T = void> T OnDragStart() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415DAE4))(this);
	}
	template <typename T = void> T OnDragDropStart() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415DF98))(this);
	}
	template <typename T = void> T OnDragDropStartCallback(uintptr_t dropView) {
		return ((T (*)(CustomDragDropView*, uintptr_t))(Il2CppBase() + 0x415DDDC))(this, dropView);
	}
	template <typename T = void> T OnDragDropMove(Il2CppVector3 delta) {
		return ((T (*)(CustomDragDropView*, Il2CppVector3))(Il2CppBase() + 0x415E04C))(this, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t surface) {
		return ((T (*)(CustomDragDropView*, uintptr_t))(Il2CppBase() + 0x415E25C))(this, surface);
	}
	template <typename T = bool> T IsDraging() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415E42C))(this);
	}
	template <typename T = void> T ResetClone() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415D2AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragStart() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415E4D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragDropStart() {
		return ((T (*)(CustomDragDropView*))(Il2CppBase() + 0x415E4DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragDropMove(Il2CppVector3 P0) {
		return ((T (*)(CustomDragDropView*, Il2CppVector3))(Il2CppBase() + 0x415E4E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragDropRelease(uintptr_t P0) {
		return ((T (*)(CustomDragDropView*, uintptr_t))(Il2CppBase() + 0x415E504))(this, P0);
	}

};

}
