#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.NGUI {

class NGUIImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.NGUI", "NGUIImage"));
	}

	template <typename T = Il2CppString*> T& spriteName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(NGUIImage*))(Il2CppBase() + 0x4769F54))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(NGUIImage*))(Il2CppBase() + 0x476A008))(this);
	}
	template <typename T = void> T Draw(Il2CppString* id, uintptr_t rect, uintptr_t color, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(NGUIImage*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x476A0BC))(this, id, rect, color, linkText, userData);
	}

};

}
