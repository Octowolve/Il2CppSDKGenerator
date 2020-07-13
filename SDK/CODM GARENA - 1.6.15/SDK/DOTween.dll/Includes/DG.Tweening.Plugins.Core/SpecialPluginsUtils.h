#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Core {

class SpecialPluginsUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Core", "SpecialPluginsUtils"));
	}


	template <typename T = bool> static T SetLookAt(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x44B42B4))(0, t);
	}
	template <typename T = bool> static T SetPunch(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x44B444C))(0, t);
	}
	template <typename T = bool> static T SetShake(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x44B46B8))(0, t);
	}
	template <typename T = bool> static T SetCameraShakePosition(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x44B46F8))(0, t);
	}

};

}
