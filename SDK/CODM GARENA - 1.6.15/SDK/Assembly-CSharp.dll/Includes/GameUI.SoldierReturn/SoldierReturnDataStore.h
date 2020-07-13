#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnDataStore"));
	}

	template <typename T = uintptr_t> T& _confData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataConfFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFacePictureRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewContentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDailyLoginRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrianingSelectRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrainingProgressRewardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectPreloadTextureURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivityBackMiscConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T SetDataConfFromServer(uintptr_t res) {
		return ((T (*)(SoldierReturnDataStore*, uintptr_t))(Il2CppBase() + 0x3CA5694))(this, res);
	}
	template <typename T = uint64_t> T GetActivityID() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA5AF8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetFacePictureRewardData() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA5BB4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNewContentData() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA5E44))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetDailyLoginRewardData(uintptr_t* specials) {
		return ((T (*)(SoldierReturnDataStore*, uintptr_t*))(Il2CppBase() + 0x3CA4184))(this, specials);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTrianingSelectRewardData() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA5F38))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTrainingProgressRewardData() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA6064))(this);
	}
	template <typename T = uintptr_t> T GetBPReward() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA62EC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T CollectPreloadTextureURL() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA65F4))(this);
	}
	template <typename T = uintptr_t> T GetActivityBackMiscConf() {
		return ((T (*)(SoldierReturnDataStore*))(Il2CppBase() + 0x3CA6AB0))(this);
	}

};

}
