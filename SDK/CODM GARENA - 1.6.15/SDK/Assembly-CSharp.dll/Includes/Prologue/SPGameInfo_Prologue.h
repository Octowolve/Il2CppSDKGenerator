#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Prologue {

class SPGameInfoPrologue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Prologue", "SPGameInfo_Prologue"));
	}

	template <typename T = uintptr_t> T& PrologueRecorder() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrologueRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_CanPauseGame() {
		return ((T (*)(SPGameInfoPrologue*))(Il2CppBase() + 0x4CD96E8))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(SPGameInfoPrologue*))(Il2CppBase() + 0x4CD96F0))(this);
	}
	template <typename T = bool> T get_OnlyShowMainWeapon() {
		return ((T (*)(SPGameInfoPrologue*))(Il2CppBase() + 0x4CD9788))(this);
	}
	template <typename T = void> T PrologueRecord() {
		return ((T (*)(SPGameInfoPrologue*))(Il2CppBase() + 0x4CD9790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(SPGameInfoPrologue*))(Il2CppBase() + 0x4CD9848))(this);
	}

};

}
