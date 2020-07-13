#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetEasyListDatacAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetEasyListData>c__AnonStorey1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& dataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& userContext() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& resetScroll() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(SetEasyListDatacAnonStorey1*))(Il2CppBase() + 0x46FD3FC))(this);
	}

};

}
