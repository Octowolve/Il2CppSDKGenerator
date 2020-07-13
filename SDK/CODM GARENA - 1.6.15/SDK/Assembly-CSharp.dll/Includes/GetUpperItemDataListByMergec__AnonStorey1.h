#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUpperItemDataListByMergecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUpperItemDataListByMerge>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t _item) {
		return ((T (*)(GetUpperItemDataListByMergecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1B0EBF4))(this, _item);
	}

};

}
