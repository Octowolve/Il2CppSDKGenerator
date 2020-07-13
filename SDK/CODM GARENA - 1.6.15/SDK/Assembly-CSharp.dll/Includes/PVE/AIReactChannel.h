#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReactChannel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Reactions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPerceptionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NudgeChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t mgr) {
		return ((T (*)(AIReactChannel*, uintptr_t))(Il2CppBase() + 0x49B31F8))(this, mgr);
	}
	template <typename T = uintptr_t> T GetChannelType() {
		return ((T (*)(AIReactChannel*))(Il2CppBase() + 0x49B2ECC))(this);
	}
	template <typename T = uintptr_t> T GetPerceptionType() {
		return ((T (*)(AIReactChannel*))(Il2CppBase() + 0x49B2F70))(this);
	}
	template <typename T = void> T NudgeChannel(uint32_t instigatorID) {
		return ((T (*)(AIReactChannel*, uint32_t))(Il2CppBase() + 0x49B33C0))(this, instigatorID);
	}

};

}
