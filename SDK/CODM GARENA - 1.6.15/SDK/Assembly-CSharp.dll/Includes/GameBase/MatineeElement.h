#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatineeElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatineeElement"));
	}

	template <typename T = bool> T& m_IsMatineePendingStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_PendingStartMatineeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatineeSequenceEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCurrentMatinee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayTriggerAnimationEndEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T StartMatinee(Il2CppString* matineeName) {
		return ((T (*)(MatineeElement*, Il2CppString*))(Il2CppBase() + 0x19C401C))(this, matineeName);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MatineeElement*))(Il2CppBase() + 0x19C4190))(this);
	}
	template <typename T = void> T MatineeSequenceEvent(Il2CppString* eventName) {
		return ((T (*)(MatineeElement*, Il2CppString*))(Il2CppBase() + 0x19C42BC))(this, eventName);
	}
	template <typename T = void> T EndCurrentMatinee(float endTime, float speed) {
		return ((T (*)(MatineeElement*, float, float))(Il2CppBase() + 0x19C4388))(this, endTime, speed);
	}
	template <typename T = void> T DelayTriggerAnimationEndEvent() {
		return ((T (*)(MatineeElement*))(Il2CppBase() + 0x19C4548))(this);
	}

};

}
