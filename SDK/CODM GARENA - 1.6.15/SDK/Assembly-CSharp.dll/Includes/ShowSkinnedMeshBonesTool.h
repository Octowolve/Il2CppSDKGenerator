#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowSkinnedMeshBonesTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowSkinnedMeshBonesTool"));
	}

	template <typename T = uintptr_t> T& TargetRootObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkinnedMeshBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToTargetBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ShowSkinnedMeshBones() {
		return ((T (*)(ShowSkinnedMeshBonesTool*))(Il2CppBase() + 0x38DC418))(this);
	}
	template <typename T = void> T ResetToTargetBones() {
		return ((T (*)(ShowSkinnedMeshBonesTool*))(Il2CppBase() + 0x38DC7E4))(this);
	}

};

}
