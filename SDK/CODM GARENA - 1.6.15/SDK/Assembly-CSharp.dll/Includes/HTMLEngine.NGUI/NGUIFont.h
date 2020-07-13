#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.NGUI {

class NGUIFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.NGUI", "NGUIFont"));
	}

	template <typename T = int32_t> T& whiteSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SpacingX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SpacingY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Measure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_LineSpacing() {
		return ((T (*)(NGUIFont*))(Il2CppBase() + 0x4769020))(this);
	}
	template <typename T = int32_t> T get_WhiteSize() {
		return ((T (*)(NGUIFont*))(Il2CppBase() + 0x4769064))(this);
	}
	template <typename T = uintptr_t> T Measure(Il2CppString* text) {
		return ((T (*)(NGUIFont*, Il2CppString*))(Il2CppBase() + 0x476906C))(this, text);
	}
	template <typename T = void> T Draw(Il2CppString* id, uintptr_t rect, uintptr_t color, Il2CppString* text, bool isEffect, uintptr_t effect, uintptr_t effectColor, int32_t effectAmount, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(NGUIFont*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, bool, uintptr_t, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4769474))(this, id, rect, color, text, isEffect, effect, effectColor, effectAmount, linkText, userData);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(NGUIFont*))(Il2CppBase() + 0x4768F88))(this);
	}

};

}
