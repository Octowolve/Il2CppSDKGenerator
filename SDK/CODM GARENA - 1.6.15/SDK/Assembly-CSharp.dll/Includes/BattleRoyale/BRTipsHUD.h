#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Label() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& EnablePendingMsgs() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& m_PendingTips() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& MAX_PENDING_TIPS_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isShowing() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTipsInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x2637A28))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x2637B2C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x2637C64))(this);
	}
	template <typename T = void> T OnTipsShow(uintptr_t msg) {
		return ((T (*)(BRTipsHUD*, uintptr_t))(Il2CppBase() + 0x2637D44))(this, msg);
	}
	template <typename T = void> T PendMessage(Il2CppString* info) {
		return ((T (*)(BRTipsHUD*, Il2CppString*))(Il2CppBase() + 0x2637F90))(this, info);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRTipsHUD*, float))(Il2CppBase() + 0x2638370))(this, dt);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x2638534))(this);
	}
	template <typename T = void> T ShowTipsInternal(Il2CppString* info) {
		return ((T (*)(BRTipsHUD*, Il2CppString*))(Il2CppBase() + 0x2638218))(this, info);
	}
	template <typename T = uintptr_t> T DelayHidden() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x263853C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x26386D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x26386E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTipsHUD*))(Il2CppBase() + 0x26386E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTipsHUD*, float))(Il2CppBase() + 0x26386F0))(this, P0);
	}

};

}
