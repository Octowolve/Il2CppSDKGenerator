#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnPropertyConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnPropertyConfig"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAIPawnProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnPropertyByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnPropertyByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIDropConfigByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AIPawnPropertyConfig*))(Il2CppBase() + 0x49AB678))(this);
	}
	template <typename T = void> T InitAIPawnProperties() {
		return ((T (*)(AIPawnPropertyConfig*))(Il2CppBase() + 0x49AB728))(this);
	}
	template <typename T = uintptr_t> T GetAIPawnPropertyByType(int32_t type) {
		return ((T (*)(AIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x49AB7C0))(this, type);
	}
	template <typename T = uintptr_t> T GetAIPawnPropertyByIndex(int32_t index) {
		return ((T (*)(AIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x49AB868))(this, index);
	}
	template <typename T = uintptr_t> T GetAIDropConfigByType(int32_t type) {
		return ((T (*)(AIPawnPropertyConfig*, int32_t))(Il2CppBase() + 0x49AB910))(this, type);
	}

};

}
