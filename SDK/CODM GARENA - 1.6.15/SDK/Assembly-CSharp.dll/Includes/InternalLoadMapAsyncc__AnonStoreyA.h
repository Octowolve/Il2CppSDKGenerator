#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalLoadMapAsynccAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalLoadMapAsync>c__AnonStoreyA"));
	}

	template <typename T = int32_t> T& sceneCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$5() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t asyncOp, int32_t i) {
		return ((T (*)(InternalLoadMapAsynccAnonStoreyA*, uintptr_t, int32_t))(Il2CppBase() + 0x4AA4B58))(this, asyncOp, i);
	}
	template <typename T = void> T m__1(Il2CppString* sceneName) {
		return ((T (*)(InternalLoadMapAsynccAnonStoreyA*, Il2CppString*))(Il2CppBase() + 0x4AA4C14))(this, sceneName);
	}

};

}
