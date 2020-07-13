#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TssDataGatherer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TssDataGatherer"));
	}

	template <typename T = int32_t> T& m_MilliSecOfGatherInterval() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_ShouldContinue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestStopping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldContinue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllTssData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnThreadExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Run() {
		return ((T (*)(TssDataGatherer*))(Il2CppBase() + 0x2E6E0A4))(this);
	}
	template <typename T = void> T RequestStopping() {
		return ((T (*)(TssDataGatherer*))(Il2CppBase() + 0x2E6E5E8))(this);
	}
	template <typename T = bool> T ShouldContinue() {
		return ((T (*)(TssDataGatherer*))(Il2CppBase() + 0x2E6E494))(this);
	}
	template <typename T = uintptr_t> static T BuildData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E6E230))(0, data);
	}
	template <typename T = void> static T ClearAllTssData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E6E690))(0);
	}
	template <typename T = void> T OnThreadExit() {
		return ((T (*)(TssDataGatherer*))(Il2CppBase() + 0x2E6E548))(this);
	}

};

}
