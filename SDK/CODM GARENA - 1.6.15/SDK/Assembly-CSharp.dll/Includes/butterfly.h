#pragma once
#include <Il2Cpp/Il2Cpp.h>

class butterfly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "butterfly"));
	}

	template <typename T = Il2CppList<Il2CppList<Il2CppVector2>*>*> T& T() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_butterflyMat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_butterflyTex_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_butterflyTex_T() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_N() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_log_2_N() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getButterflyTex_index() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getButterflyTex_T() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_t() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genTMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genButterflyMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genButterflyTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T getButterflyTex_index() {
		return ((T (*)(butterfly*))(Il2CppBase() + 0x530F038))(this);
	}
	template <typename T = uintptr_t> T getButterflyTex_T() {
		return ((T (*)(butterfly*))(Il2CppBase() + 0x530F0D8))(this);
	}
	template <typename T = Il2CppVector2> T t(int32_t x, int32_t N) {
		return ((T (*)(butterfly*, int32_t, int32_t))(Il2CppBase() + 0x530F178))(this, x, N);
	}
	template <typename T = void> T genTMat() {
		return ((T (*)(butterfly*))(Il2CppBase() + 0x530E4D8))(this);
	}
	template <typename T = void> T genButterflyMat() {
		return ((T (*)(butterfly*))(Il2CppBase() + 0x530E790))(this);
	}
	template <typename T = void> T genButterflyTex() {
		return ((T (*)(butterfly*))(Il2CppBase() + 0x530EBCC))(this);
	}

};

}
