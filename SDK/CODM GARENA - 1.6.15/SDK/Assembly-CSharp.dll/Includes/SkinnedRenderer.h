#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkinnedRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinnedRenderer"));
	}

	template <typename T = uintptr_t> T& mRendere() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& misVisible() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D250))(this);
	}
	template <typename T = uintptr_t> T get_mat() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D258))(this);
	}
	template <typename T = void> T set_mat(uintptr_t value) {
		return ((T (*)(SkinnedRenderer*, uintptr_t))(Il2CppBase() + 0x464D260))(this, value);
	}
	template <typename T = bool> T RegMaterial(uintptr_t inCB, uintptr_t inMat) {
		return ((T (*)(SkinnedRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x464D3A0))(this, inCB, inMat);
	}
	template <typename T = int32_t> T get_subMeshCount() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D4FC))(this);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D504))(this);
	}
	template <typename T = bool> T get_isSkinnedRenderer() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D50C))(this);
	}
	template <typename T = bool> T get_isGPUSkin() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D514))(this);
	}
	template <typename T = int32_t> T get_LODIdx() {
		return ((T (*)(SkinnedRenderer*))(Il2CppBase() + 0x464D51C))(this);
	}

};

}
