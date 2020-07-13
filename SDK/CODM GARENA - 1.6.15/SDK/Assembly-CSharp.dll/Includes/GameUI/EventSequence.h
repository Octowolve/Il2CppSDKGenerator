#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EventSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EventSequence"));
	}

	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Play() {
		return ((T (*)(EventSequence*))(Il2CppBase() + 0x4705048))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(EventSequence*))(Il2CppBase() + 0x47050F8))(this);
	}
	template <typename T = bool> T get_bFinish() {
		return ((T (*)(EventSequence*))(Il2CppBase() + 0x4705190))(this);
	}

};

}
