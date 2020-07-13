#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageRuntimeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageRuntimeData"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& layerDataDict() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFoliageInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaxDrawDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T AddFoliageInstance(uintptr_t layer, int32_t typeHash, uintptr_t instance) {
		return ((T (*)(FoliageRuntimeData*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3CD6094))(this, layer, typeHash, instance);
	}
	template <typename T = void> T UpdateMaxDrawDistance(Il2CppDictionary<int32_t, uintptr_t>* foliageTypes) {
		return ((T (*)(FoliageRuntimeData*, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x3CD6244))(this, foliageTypes);
	}

};

}
