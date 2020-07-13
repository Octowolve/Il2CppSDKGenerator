#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InsertSparrowStickInfoStatcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InsertSparrowStickInfoStat>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t v) {
		return ((T (*)(InsertSparrowStickInfoStatcAnonStorey1*, uint32_t))(Il2CppBase() + 0x36DD214))(this, v);
	}

};

}
