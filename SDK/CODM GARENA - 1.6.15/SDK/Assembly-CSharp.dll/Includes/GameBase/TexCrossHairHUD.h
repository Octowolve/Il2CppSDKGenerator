#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TexCrossHairHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TexCrossHairHUD"));
	}

	template <typename T = uintptr_t> T& CrosshairSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnChanged(uintptr_t Msg) {
		return ((T (*)(TexCrossHairHUD*, uintptr_t))(Il2CppBase() + 0x27C4AC8))(this, Msg);
	}
	template <typename T = void> T SetOffset(Il2CppString* texName) {
		return ((T (*)(TexCrossHairHUD*, Il2CppString*))(Il2CppBase() + 0x27C4EAC))(this, texName);
	}
	template <typename T = float> T GetBorder() {
		return ((T (*)(TexCrossHairHUD*))(Il2CppBase() + 0x27C5004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnChanged(uintptr_t P0) {
		return ((T (*)(TexCrossHairHUD*, uintptr_t))(Il2CppBase() + 0x27C50EC))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetBorder() {
		return ((T (*)(TexCrossHairHUD*))(Il2CppBase() + 0x27C50F4))(this);
	}

};

}
