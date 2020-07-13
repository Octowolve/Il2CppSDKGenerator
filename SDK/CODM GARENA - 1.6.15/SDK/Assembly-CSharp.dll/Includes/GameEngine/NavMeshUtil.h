#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class NavMeshUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "NavMeshUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CalcLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNavMeshBuildSettingsByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> static T CalcLength(uintptr_t navMeshPath) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2717514))(0, navMeshPath);
	}
	template <typename T = Il2CppString*> static T GetString(uintptr_t settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2717710))(0, settings);
	}
	template <typename T = uintptr_t> static T GetNavMeshBuildSettingsByName(Il2CppString* targetName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2717B2C))(0, targetName);
	}

};

}
