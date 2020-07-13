#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DeviceVibrate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DeviceVibrate"));
	}


	template <typename T = void> T Reset() {
		return ((T (*)(DeviceVibrate*))(Il2CppBase() + 0x4FC68F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DeviceVibrate*))(Il2CppBase() + 0x4FC68F4))(this);
	}

};

}
