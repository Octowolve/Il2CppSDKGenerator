#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NetworkAIBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NetworkAIBehavior"));
	}

	template <typename T = uintptr_t> T& fireType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int16_t> T& index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& skillRepInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateRepInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestartBehavior() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T FillRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehavior*, uintptr_t))(Il2CppBase() + 0x462B078))(this, skillRepInfo);
	}
	template <typename T = void> T OnUpdateRepInfo(uintptr_t skillRepInfo) {
		return ((T (*)(NetworkAIBehavior*, uintptr_t))(Il2CppBase() + 0x462B120))(this, skillRepInfo);
	}
	template <typename T = void> T RestartBehavior() {
		return ((T (*)(NetworkAIBehavior*))(Il2CppBase() + 0x462B1C0))(this);
	}

};

}
