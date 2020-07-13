#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTriggerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTriggerInfo"));
	}

	template <typename T = uintptr_t> T& gameObjectHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& physicsMaterialName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTriggerInfo*))(Il2CppBase() + 0x4F0082C))(this);
	}
	template <typename T = void> T StoreTriggerInfo() {
		return ((T (*)(GetTriggerInfo*))(Il2CppBase() + 0x4F00838))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTriggerInfo*))(Il2CppBase() + 0x4F009B8))(this);
	}

};

}
