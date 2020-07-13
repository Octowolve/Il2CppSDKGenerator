#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTipsHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTipsHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CollectionShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickUpShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwapShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetErrorMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetErrorMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T CollectionShowTips(int32_t itemId, int32_t count, int32_t addCount) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2635944))(0, itemId, count, addCount);
	}
	template <typename T = void> static T PickUpShowTips(int32_t itemId, int32_t posId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2635B90))(0, itemId, posId);
	}
	template <typename T = void> static T SwapShowTips(int32_t itemId_0, int32_t posId_0, int32_t itemId_1, int32_t posId_1) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2636304))(0, itemId_0, posId_0, itemId_1, posId_1);
	}
	template <typename T = void> static T ShowTips(uintptr_t errCode, int32_t itemId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2636788))(0, errCode, itemId);
	}
	template <typename T = void> static T ShowTips_1(uintptr_t errCode, int32_t curItemId, int32_t ownerItemId) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2636E50))(0, errCode, curItemId, ownerItemId);
	}
	template <typename T = void> static T ShowTips_2(Il2CppString* info) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2637744))(0, info);
	}
	template <typename T = Il2CppString*> static T GetErrorMsg(uintptr_t errCode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2636AAC))(0, errCode);
	}
	template <typename T = Il2CppString*> static T GetErrorMsg_1(uintptr_t errCode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2637308))(0, errCode);
	}

};

}
