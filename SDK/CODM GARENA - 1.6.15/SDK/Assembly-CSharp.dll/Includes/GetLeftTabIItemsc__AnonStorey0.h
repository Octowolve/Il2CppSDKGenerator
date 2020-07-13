#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLeftTabIItemscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLeftTabIItems>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& GlobalDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Announcements() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLeftTabIItemscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4943038))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetLeftTabIItemscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x49430A4))(this, it);
	}

};

}
