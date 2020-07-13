#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignDataDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignDataDesc"));
	}

	template <typename T = bool> T& IsValid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& hasSignTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& canRemedyTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bTodayHasSign() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& hasRemedyTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bNewPlayerSign() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& CostList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RewardList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSignData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T InitSignData(uintptr_t data) {
		return ((T (*)(SignDataDesc*, uintptr_t))(Il2CppBase() + 0x385C480))(this, data);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRewardList() {
		return ((T (*)(SignDataDesc*))(Il2CppBase() + 0x385C928))(this);
	}

};

}
