#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLeftTabIItemsByTopNumcAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLeftTabIItemsByTopNum>c__AnonStorey8"));
	}

	template <typename T = int32_t> T& TopIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& GlobalDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& temp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLeftTabIItemsByTopNumcAnonStorey8*, uintptr_t))(Il2CppBase() + 0x3531854))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetLeftTabIItemsByTopNumcAnonStorey8*, uintptr_t))(Il2CppBase() + 0x3531920))(this, it);
	}

};

}
