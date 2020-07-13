#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BehaviorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BehaviorConfig"));
	}

	template <typename T = uintptr_t> T& fireType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Interruptible() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& voiceCfg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneSpotPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_FireType() {
		return ((T (*)(BehaviorConfig*))(Il2CppBase() + 0x49C4BE8))(this);
	}
	template <typename T = float> static T GetAnimLen(uintptr_t anim) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49C4BF0))(0, anim);
	}
	template <typename T = Il2CppVector3> T GetSceneSpotPosition(Il2CppString* spotName) {
		return ((T (*)(BehaviorConfig*, Il2CppString*))(Il2CppBase() + 0x49C4C9C))(this, spotName);
	}

};

}
