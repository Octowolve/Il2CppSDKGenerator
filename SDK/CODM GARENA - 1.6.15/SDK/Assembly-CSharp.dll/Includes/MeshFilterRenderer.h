#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshFilterRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshFilterRenderer"));
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
	template <typename T = bool> T& mIsGPUSkin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& misVisible() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& m_LODIdx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464CF0C))(this);
	}
	template <typename T = uintptr_t> T get_mat() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464CF14))(this);
	}
	template <typename T = void> T set_mat(uintptr_t value) {
		return ((T (*)(MeshFilterRenderer*, uintptr_t))(Il2CppBase() + 0x464CF1C))(this, value);
	}
	template <typename T = bool> T RegMaterial(uintptr_t inCB, uintptr_t inMat) {
		return ((T (*)(MeshFilterRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x464D060))(this, inCB, inMat);
	}
	template <typename T = int32_t> T get_subMeshCount() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464D1BC))(this);
	}
	template <typename T = bool> T get_isSkinnedRenderer() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464D1C4))(this);
	}
	template <typename T = bool> T get_isGPUSkin() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464D1CC))(this);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464D1D4))(this);
	}
	template <typename T = int32_t> T get_LODIdx() {
		return ((T (*)(MeshFilterRenderer*))(Il2CppBase() + 0x464D1DC))(this);
	}

};

}
