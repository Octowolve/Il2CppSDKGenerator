#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSendMessageFloatEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USSendMessageFloatEvent"));
	}

	template <typename T = uintptr_t> T& receiver() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& action() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& valueToSend() {
		return *(T*)((uintptr_t)this + 0x24);
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
		return ((T (*)(USSendMessageFloatEvent*))(Il2CppBase() + 0x4A45638))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USSendMessageFloatEvent*, float))(Il2CppBase() + 0x4A458B0))(this, deltaTime);
	}

};

}
