#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BufferRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BufferRenderer"));
	}


	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_mat() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_mat(uintptr_t value) {
		return ((T (*)(BufferRenderer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_subMeshCount() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_isSkinnedRenderer() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_isGPUSkin() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_LODIdx() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T RegMaterial(uintptr_t inCB, uintptr_t inMat) {
		return ((T (*)(BufferRenderer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, inCB, inMat);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(BufferRenderer*))(Il2CppBase() + 0x0))(this);
	}

};

}
