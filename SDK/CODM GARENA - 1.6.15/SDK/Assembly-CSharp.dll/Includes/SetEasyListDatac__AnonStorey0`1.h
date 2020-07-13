#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetEasyListDatacAnonStorey01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetEasyListData>c__AnonStorey0`1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& dataList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& userContext() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& resetScroll() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetEasyListDatacAnonStorey01*))(Il2CppBase() + 0x48E6C5C))(this);
	}

};

}
