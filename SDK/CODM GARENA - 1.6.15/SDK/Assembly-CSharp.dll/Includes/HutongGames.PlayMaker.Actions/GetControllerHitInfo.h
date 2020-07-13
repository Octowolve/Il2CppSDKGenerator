#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetControllerHitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetControllerHitInfo"));
	}

	template <typename T = uintptr_t> T& gameObjectHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& contactPoint() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& contactNormal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& moveDirection() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& moveLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& physicsMaterialName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetControllerHitInfo*))(Il2CppBase() + 0x5087E58))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(GetControllerHitInfo*))(Il2CppBase() + 0x5087E74))(this);
	}
	template <typename T = void> T StoreTriggerInfo() {
		return ((T (*)(GetControllerHitInfo*))(Il2CppBase() + 0x5087EA8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetControllerHitInfo*))(Il2CppBase() + 0x50880E8))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(GetControllerHitInfo*))(Il2CppBase() + 0x5088108))(this);
	}

};

}
