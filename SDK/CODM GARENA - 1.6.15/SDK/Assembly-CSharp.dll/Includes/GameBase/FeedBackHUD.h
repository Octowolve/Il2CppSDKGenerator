#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FeedBackHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FeedBackHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& feedbackItemList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& levelupItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& weapLevelupItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& weapUnlockItem() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& scaleForTween() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& itemLifeTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& ITEM_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MIN_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& inActiveFeedbackQueue() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = void*> T& activeFeedbackQueue() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pendingFeedBackList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPedingFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceAllItemFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFeedbackItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DA1BC))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DA4BC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DA5A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DA694))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DA744))(this);
	}
	template <typename T = void> T CheckPedingFeedBack() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DAA94))(this);
	}
	template <typename T = bool> T PlayFeedBack(Il2CppString* iconName, Il2CppString* feedbackName, Il2CppString* feedbackSound, int32_t levelUpFeedback, bool isCheckPending) {
		return ((T (*)(FeedBackHUD*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x31DAD10))(this, iconName, feedbackName, feedbackSound, levelUpFeedback, isCheckPending);
	}
	template <typename T = void> T ForceAllItemFinished() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DBD8C))(this);
	}
	template <typename T = void> T OnItemPlayFinished(uintptr_t item) {
		return ((T (*)(FeedBackHUD*, uintptr_t))(Il2CppBase() + 0x31DBE30))(this, item);
	}
	template <typename T = uintptr_t> T GetFeedbackItem(int32_t levelUpFeedBack) {
		return ((T (*)(FeedBackHUD*, int32_t))(Il2CppBase() + 0x31DB3D0))(this, levelUpFeedBack);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DC054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DC05C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DC064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(FeedBackHUD*))(Il2CppBase() + 0x31DC06C))(this);
	}

};

}
