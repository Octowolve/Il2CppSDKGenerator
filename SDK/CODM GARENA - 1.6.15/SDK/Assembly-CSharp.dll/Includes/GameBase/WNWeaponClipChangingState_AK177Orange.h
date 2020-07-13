#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponClipChangingStateAK177Orange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponClipChangingState_AK177Orange"));
	}


	template <typename T = float> T GetChangeClipTime() {
		return ((T (*)(WNWeaponClipChangingStateAK177Orange*))(Il2CppBase() + 0x4595830))(this);
	}
	template <typename T = void> T PlayChangeClip() {
		return ((T (*)(WNWeaponClipChangingStateAK177Orange*))(Il2CppBase() + 0x459588C))(this);
	}

};

}
