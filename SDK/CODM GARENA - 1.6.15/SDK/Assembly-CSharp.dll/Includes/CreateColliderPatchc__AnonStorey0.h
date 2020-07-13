#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateColliderPatchcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateColliderPatch>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& col() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& cameraPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(CreateColliderPatchcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2488468))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t e) {
		return ((T (*)(CreateColliderPatchcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x24884B4))(this, e);
	}

};

}
