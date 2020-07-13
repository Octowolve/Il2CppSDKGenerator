#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TacticalBRMapMarkShowSkyplatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TacticalBRMapMarkShowSkyplatform"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(TacticalBRMapMarkShowSkyplatform*))(Il2CppBase() + 0x29A99A4))(this);
	}
	template <typename T = bool> T CheckSkyPlatformExist() {
		return ((T (*)(TacticalBRMapMarkShowSkyplatform*))(Il2CppBase() + 0x29A9A40))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalBRMapMarkShowSkyplatform*))(Il2CppBase() + 0x29A9A88))(this);
	}

};

}
