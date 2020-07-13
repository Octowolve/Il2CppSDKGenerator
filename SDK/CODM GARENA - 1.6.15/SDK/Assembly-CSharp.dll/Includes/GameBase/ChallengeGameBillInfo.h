#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ChallengeGameBillInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ChallengeGameBillInfo"));
	}

	template <typename T = int32_t> T& m_SectionId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_GetGoldCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_GetExp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_GetScore() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_SectionId() {
		return ((T (*)(ChallengeGameBillInfo*))(Il2CppBase() + 0x3C65F88))(this);
	}
	template <typename T = int32_t> T get_GetGoldCount() {
		return ((T (*)(ChallengeGameBillInfo*))(Il2CppBase() + 0x3C65F90))(this);
	}
	template <typename T = int32_t> T get_GetExp() {
		return ((T (*)(ChallengeGameBillInfo*))(Il2CppBase() + 0x3C65F98))(this);
	}
	template <typename T = int32_t> T get_GetScore() {
		return ((T (*)(ChallengeGameBillInfo*))(Il2CppBase() + 0x3C65FA0))(this);
	}

};

}
