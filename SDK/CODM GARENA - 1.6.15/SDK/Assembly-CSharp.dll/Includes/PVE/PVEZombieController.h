#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEZombieController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEZombieController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlaySpecialAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteWhatToDoNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(PVEZombieController*))(Il2CppBase() + 0x4051768))(this);
	}
	template <typename T = bool> T CanPlaySpecialAnim(Il2CppString* animTriggerName) {
		return ((T (*)(PVEZombieController*, Il2CppString*))(Il2CppBase() + 0x4051BD8))(this, animTriggerName);
	}
	template <typename T = Il2CppString*> T ExecuteWhatToDoNext() {
		return ((T (*)(PVEZombieController*))(Il2CppBase() + 0x4051C80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(PVEZombieController*))(Il2CppBase() + 0x4051DA4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanPlaySpecialAnim(Il2CppString* P0) {
		return ((T (*)(PVEZombieController*, Il2CppString*))(Il2CppBase() + 0x4051DAC))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ExecuteWhatToDoNext() {
		return ((T (*)(PVEZombieController*))(Il2CppBase() + 0x4051DB4))(this);
	}

};

}
