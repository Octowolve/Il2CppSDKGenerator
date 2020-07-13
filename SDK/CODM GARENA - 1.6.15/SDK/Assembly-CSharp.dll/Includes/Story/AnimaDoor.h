#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class AnimaDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "AnimaDoor"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpening() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoorOpened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OpenDoor() {
		return ((T (*)(AnimaDoor*))(Il2CppBase() + 0x39551A4))(this);
	}
	template <typename T = void> T CloseDoor() {
		return ((T (*)(AnimaDoor*))(Il2CppBase() + 0x39552D4))(this);
	}
	template <typename T = void> T OnOpening() {
		return ((T (*)(AnimaDoor*))(Il2CppBase() + 0x3955404))(this);
	}
	template <typename T = void> T OnDoorOpened() {
		return ((T (*)(AnimaDoor*))(Il2CppBase() + 0x395573C))(this);
	}

};

}
