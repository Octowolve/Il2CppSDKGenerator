#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveOwncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveOwn>c__AnonStorey0"));
	}

	template <typename T = Il2CppList<int32_t>*> T& needRemoveIdList() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RemoveOwncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3DD2E24))(this, it);
	}

};

}
