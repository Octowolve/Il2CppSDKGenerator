#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnSpawnInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnSpawnInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& ChaserSpawnPointList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RebornCooldown() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPawnType() {
		return ((T (*)(AIPawnSpawnInfo*))(Il2CppBase() + 0x49B0880))(this);
	}
	template <typename T = int32_t> T GetRatio() {
		return ((T (*)(AIPawnSpawnInfo*))(Il2CppBase() + 0x49B0920))(this);
	}

};

}
