#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageLayerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageLayerData"));
	}

	template <typename T = uintptr_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& posHashCellData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxDrawDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& maxDrawDistanceSqr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& traverseNeighborCount() {
		return *(T*)((uintptr_t)this + 0x18);
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

	template <typename T = uintptr_t> T get_layer() {
		return ((T (*)(FoliageLayerData*))(Il2CppBase() + 0x3CD4A5C))(this);
	}
	template <typename T = void> T set_layer(uintptr_t value) {
		return ((T (*)(FoliageLayerData*, uintptr_t))(Il2CppBase() + 0x3CD4A54))(this, value);
	}
	template <typename T = float> T get_maxDrawDistanceSqr() {
		return ((T (*)(FoliageLayerData*))(Il2CppBase() + 0x3CD4A64))(this);
	}
	template <typename T = void> T set_maxDrawDistanceSqr(float value) {
		return ((T (*)(FoliageLayerData*, float))(Il2CppBase() + 0x3CD4A6C))(this, value);
	}
	template <typename T = int32_t> T get_traverseNeighborCount() {
		return ((T (*)(FoliageLayerData*))(Il2CppBase() + 0x3CD4A74))(this);
	}
	template <typename T = void> T set_traverseNeighborCount(int32_t value) {
		return ((T (*)(FoliageLayerData*, int32_t))(Il2CppBase() + 0x3CD4A7C))(this, value);
	}
	template <typename T = void> T AddFoliageInstance(int32_t typeHash, uintptr_t instance) {
		return ((T (*)(FoliageLayerData*, int32_t, uintptr_t))(Il2CppBase() + 0x3CD4A84))(this, typeHash, instance);
	}
	template <typename T = void> T UpdateMaxDrawDistance(Il2CppDictionary<int32_t, uintptr_t>* foliageTypes) {
		return ((T (*)(FoliageLayerData*, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x3CD4E88))(this, foliageTypes);
	}

};

}
