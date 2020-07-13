#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalGPSManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalGPSManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& MapGpsInfos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetGps(Il2CppString* scene) {
		return ((T (*)(TacticalGPSManager*, Il2CppString*))(Il2CppBase() + 0x30CF924))(this, scene);
	}
	template <typename T = uintptr_t> T GetInfo(Il2CppString* scene) {
		return ((T (*)(TacticalGPSManager*, Il2CppString*))(Il2CppBase() + 0x30CFB54))(this, scene);
	}

};

}
