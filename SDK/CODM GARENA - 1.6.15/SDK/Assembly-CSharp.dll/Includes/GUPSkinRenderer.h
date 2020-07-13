#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUPSkinRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUPSkinRenderer"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& mRendere() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& misVisible() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mSkinModel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsGPUSkin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_LODIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CA3C))(this);
	}
	template <typename T = uintptr_t> T get_mat() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CA44))(this);
	}
	template <typename T = void> T set_mat(uintptr_t value) {
		return ((T (*)(GUPSkinRenderer*, uintptr_t))(Il2CppBase() + 0x464CA4C))(this, value);
	}
	template <typename T = int32_t> T get_subMeshCount() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CBA8))(this);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CBB0))(this);
	}
	template <typename T = bool> T RegMaterial(uintptr_t inCB, uintptr_t inMat) {
		return ((T (*)(GUPSkinRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x464CE6C))(this, inCB, inMat);
	}
	template <typename T = bool> T get_isSkinnedRenderer() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CE74))(this);
	}
	template <typename T = bool> T get_isGPUSkin() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CE7C))(this);
	}
	template <typename T = int32_t> T get_LODIdx() {
		return ((T (*)(GUPSkinRenderer*))(Il2CppBase() + 0x464CE84))(this);
	}

};

}
