#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadManyAssetsAsyncInternalcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadManyAssetsAsync_Internal>c__AnonStorey5"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& flags() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& assetIDs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CallbackFun() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CallBackData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T m__0(int32_t id, uintptr_t sobj) {
		return ((T (*)(LoadManyAssetsAsyncInternalcAnonStorey5*, int32_t, uintptr_t))(Il2CppBase() + 0x2B96DB4))(this, id, sobj);
	}

};

}
