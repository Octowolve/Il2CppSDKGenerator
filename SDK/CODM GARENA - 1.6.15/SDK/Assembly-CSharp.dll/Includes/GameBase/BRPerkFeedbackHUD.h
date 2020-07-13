#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRPerkFeedbackHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRPerkFeedbackHUD"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& itemLifeTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& itemFadeInTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& itemFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& cdTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& ITEM_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& targetWorldPositions() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& inActiveQueue() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& activeQueue() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& lastBuffId() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& lastPlayTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFeedbackItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x3745E18))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x37460D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x37461E4))(this);
	}
	template <typename T = void> T PlayFeedback(uintptr_t msg) {
		return ((T (*)(BRPerkFeedbackHUD*, uintptr_t))(Il2CppBase() + 0x37462A0))(this, msg);
	}
	template <typename T = void> T OnItemPlayFinished(uintptr_t item) {
		return ((T (*)(BRPerkFeedbackHUD*, uintptr_t))(Il2CppBase() + 0x3746D94))(this, item);
	}
	template <typename T = uintptr_t> T GetFeedbackItem() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x3746920))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x3747030))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x3747038))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRPerkFeedbackHUD*))(Il2CppBase() + 0x3747040))(this);
	}

};

}
