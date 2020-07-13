#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ZiZi.Graphics.Sampling.PoissonDisk {

class PoissonDiskGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ZiZi.Graphics.Sampling.PoissonDisk", "PoissonDiskGenerator"));
	}

	template <typename T = float> static T& minDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& k() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& sampleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> static T& resultSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& grid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& m_CeiledSampleRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& gridCellSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& gridLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInputsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Generate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PositionToGridIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__WrapRepeatFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__WrapIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = int32_t> static T get_sampleCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DD8024))(0);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> static T get_ResultSet() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DD8108))(0);
	}
	template <typename T = bool> static T IsInputsValid() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DD81B8))(0);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> static T Generate() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DD835C))(0);
	}
	template <typename T = int32_t> static T _PositionToGridIndex(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4DD8FB4))(0, f);
	}
	template <typename T = float> static T _WrapRepeatFloat(float f) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4DD9280))(0, f);
	}
	template <typename T = int32_t> static T _WrapIndex(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DD9118))(0, index);
	}

};

}
