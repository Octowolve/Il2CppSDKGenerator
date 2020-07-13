#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TipsDataManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TipsDataManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_TipsDelegates() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_TipsDataStore() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TIPS_NUMBER_LOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TIPS_NUMBER_EXCLAMATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TIPS_LOCK_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TIPS_EXCLAMATION_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterTipsDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterTipsDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnRegisterTipsDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTipsDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTipsDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleTipsDelegateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleAllTipsDelegateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendTipsNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTipsNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowIconTipsNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowIconTipsSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTipsExclamation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TipsDataManager*))(Il2CppBase() + 0x29B8524))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(TipsDataManager*))(Il2CppBase() + 0x29B8648))(this);
	}
	template <typename T = bool> T RegisterTipsDelegate(uintptr_t tipsType, uintptr_t callback) {
		return ((T (*)(TipsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B8764))(this, tipsType, callback);
	}
	template <typename T = bool> T UnRegisterTipsDelegate(uintptr_t tipsType, uintptr_t callback) {
		return ((T (*)(TipsDataManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B8C30))(this, tipsType, callback);
	}
	template <typename T = bool> T UnRegisterTipsDelegate_1(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29B8D7C))(this, tipsType);
	}
	template <typename T = bool> T ClearTipsDelegate() {
		return ((T (*)(TipsDataManager*))(Il2CppBase() + 0x29B8FF8))(this);
	}
	template <typename T = uintptr_t> T GetTipsDelegate(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29B89E8))(this, tipsType);
	}
	template <typename T = void> T RecycleTipsDelegateInfo(uintptr_t delegateInfo) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29B8EC0))(this, delegateInfo);
	}
	template <typename T = void> T RecycleAllTipsDelegateInfo() {
		return ((T (*)(TipsDataManager*))(Il2CppBase() + 0x29B90E8))(this);
	}
	template <typename T = void> T SendTipsNotify(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29B9370))(this, tipsType);
	}
	template <typename T = int32_t> T GetTipsNumber(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29B9658))(this, tipsType);
	}
	template <typename T = bool> T SetTipsNumber(uintptr_t tipsType, int32_t number) {
		return ((T (*)(TipsDataManager*, uintptr_t, int32_t))(Il2CppBase() + 0x29B9D8C))(this, tipsType, number);
	}
	template <typename T = bool> static T IsShowIconTipsNumber(int32_t tipsNumber) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29BA014))(0, tipsNumber);
	}
	template <typename T = Il2CppString*> static T GetShowIconTipsSprite(int32_t tipsNumber) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x29BA0F8))(0, tipsNumber);
	}
	template <typename T = bool> T SetTipsLock(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29BA21C))(this, tipsType);
	}
	template <typename T = bool> T SetTipsExclamation(uintptr_t tipsType) {
		return ((T (*)(TipsDataManager*, uintptr_t))(Il2CppBase() + 0x29BA304))(this, tipsType);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(TipsDataManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x29BA3EC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}

};

}
