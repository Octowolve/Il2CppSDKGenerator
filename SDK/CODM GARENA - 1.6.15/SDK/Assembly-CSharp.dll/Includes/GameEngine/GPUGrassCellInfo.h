#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GPUGrassCellInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GPUGrassCellInfo"));
	}

	template <typename T = int32_t> T& kCellDensityPatchSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& kCellHeightPatchSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CellIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GrassType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GrassColor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeightMap() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DensityMap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsValid() {
		return ((T (*)(GPUGrassCellInfo*))(Il2CppBase() + 0x36E6FF4))(this);
	}
	template <typename T = void> T set_IsValid(bool value) {
		return ((T (*)(GPUGrassCellInfo*, bool))(Il2CppBase() + 0x36E7030))(this, value);
	}

};

}
