#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnResTemplateItemClickcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnResTemplateItemClick>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& m_SeqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnResTemplateItemClickcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x32F1C94))(this, it);
	}

};

}
