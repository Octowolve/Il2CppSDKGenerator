#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameView"));
	}

	template <typename T = uintptr_t> T& CacheWidget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mHudSettingType() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCahcheWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GameView*))(Il2CppBase() + 0x1EB0378))(this);
	}
	template <typename T = uintptr_t> T GetCahcheWidget() {
		return ((T (*)(GameView*))(Il2CppBase() + 0x1EB04BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GameView*))(Il2CppBase() + 0x1EB055C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetCahcheWidget() {
		return ((T (*)(GameView*))(Il2CppBase() + 0x1EB0564))(this);
	}

};

}
