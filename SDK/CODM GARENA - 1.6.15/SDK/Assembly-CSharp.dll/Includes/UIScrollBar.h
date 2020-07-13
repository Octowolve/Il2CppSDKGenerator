#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIScrollBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIScrollBar"));
	}

	template <typename T = float> T& mSize() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mDir() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalToValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = float> T get_scrollValue() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9C218))(this);
	}
	template <typename T = void> T set_scrollValue(float value) {
		return ((T (*)(UIScrollBar*, float))(Il2CppBase() + 0x2F9C21C))(this, value);
	}
	template <typename T = float> T get_barSize() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9C224))(this);
	}
	template <typename T = void> T set_barSize(float value) {
		return ((T (*)(UIScrollBar*, float))(Il2CppBase() + 0x2F9C22C))(this, value);
	}
	template <typename T = void> T Upgrade() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9C454))(this);
	}
	template <typename T = void> T OnStart() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9C530))(this);
	}
	template <typename T = float> T LocalToValue(Il2CppVector2 localPos) {
		return ((T (*)(UIScrollBar*, Il2CppVector2))(Il2CppBase() + 0x2F9D248))(this, localPos);
	}
	template <typename T = void> T ForceUpdate() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9D610))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Upgrade() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9DA08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStart() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9DB80))(this);
	}
	template <typename T = float> T xLuaBaseProxy_LocalToValue(Il2CppVector2 P0) {
		return ((T (*)(UIScrollBar*, Il2CppVector2))(Il2CppBase() + 0x2F9DB84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceUpdate() {
		return ((T (*)(UIScrollBar*))(Il2CppBase() + 0x2F9DB88))(this);
	}

};

}
