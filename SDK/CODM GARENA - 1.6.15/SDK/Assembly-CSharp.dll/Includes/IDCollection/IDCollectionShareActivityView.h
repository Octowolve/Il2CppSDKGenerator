#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IDCollection {

class IDCollectionShareActivityView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IDCollection", "IDCollectionShareActivityView"));
	}

	template <typename T = uintptr_t> T& activityRewardView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& downLoadToLocalBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& shareGarenaBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& shareLineBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& shareFacebookBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& shareScreenRegion() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgressValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardGatePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivityTotalPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetProgressValue(int32_t nBlockGateID, float fPercent) {
		return ((T (*)(IDCollectionShareActivityView*, int32_t, float))(Il2CppBase() + 0x497FC6C))(this, nBlockGateID, fPercent);
	}
	template <typename T = void> T SetRewardGatePoint(int32_t id, uintptr_t gatePointData) {
		return ((T (*)(IDCollectionShareActivityView*, int32_t, uintptr_t))(Il2CppBase() + 0x497FDAC))(this, id, gatePointData);
	}
	template <typename T = void> T SetActivityTotalPoint(Il2CppString* uNumberString) {
		return ((T (*)(IDCollectionShareActivityView*, Il2CppString*))(Il2CppBase() + 0x497FEEC))(this, uNumberString);
	}

};

}
