#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PoissonDiskResultHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PoissonDiskResultHelper"));
	}

	template <typename T = float> T& minDistance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& k() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& sampleRange() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& sampleCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& result() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& resultTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Generate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTetxure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(PoissonDiskResultHelper*))(Il2CppBase() + 0x47FF59C))(this);
	}
	template <typename T = void> T Generate() {
		return ((T (*)(PoissonDiskResultHelper*))(Il2CppBase() + 0x47FF690))(this);
	}
	template <typename T = void> T ClearTetxure(uintptr_t clearColor) {
		return ((T (*)(PoissonDiskResultHelper*, uintptr_t))(Il2CppBase() + 0x47FFAB0))(this, clearColor);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(PoissonDiskResultHelper*))(Il2CppBase() + 0x47FFC98))(this);
	}

};

}
