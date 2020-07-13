#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnFactoryConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnFactoryConfig"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAIPawnSpawnInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetAIPawnSpawnInfoList() {
		return ((T (*)(AIPawnFactoryConfig*))(Il2CppBase() + 0x49AA8C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AIPawnFactoryConfig*))(Il2CppBase() + 0x49AA968))(this);
	}

};

}
