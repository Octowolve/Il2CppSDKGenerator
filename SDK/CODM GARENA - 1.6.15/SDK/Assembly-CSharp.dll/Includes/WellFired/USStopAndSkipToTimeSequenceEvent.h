#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USStopAndSkipToTimeSequenceEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USStopAndSkipToTimeSequenceEvent"));
	}

	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& timeToSkipTo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USStopAndSkipToTimeSequenceEvent*))(Il2CppBase() + 0x4A4A52C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USStopAndSkipToTimeSequenceEvent*, float))(Il2CppBase() + 0x4A4A770))(this, deltaTime);
	}

};

}
