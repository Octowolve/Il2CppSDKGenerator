#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimmingEffectHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimmingEffectHandler"));
	}

	template <typename T = Il2CppString*> T& TP_RIG_RIGHTHAND_PATH() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& TP_RIG_LEFTHAND_PATH() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& FP_RIG_RIGHTHAND_PATH() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& FP_RIG_LEFTHAND_PATH() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_SprayHandler() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RightHand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LeftHand() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsFirstView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSprayHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterSprayHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T RegisterSprayHandler(uintptr_t handler, bool isFirstView) {
		return ((T (*)(SwimmingEffectHandler*, uintptr_t, bool))(Il2CppBase() + 0x35A7FC0))(this, handler, isFirstView);
	}
	template <typename T = void> T UnRegisterSprayHandler(uintptr_t handler) {
		return ((T (*)(SwimmingEffectHandler*, uintptr_t))(Il2CppBase() + 0x35A82C0))(this, handler);
	}
	template <typename T = void> T InitTrans() {
		return ((T (*)(SwimmingEffectHandler*))(Il2CppBase() + 0x35A81A8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SwimmingEffectHandler*))(Il2CppBase() + 0x35A8490))(this);
	}
	template <typename T = void> T Spray(int32_t side) {
		return ((T (*)(SwimmingEffectHandler*, int32_t))(Il2CppBase() + 0x35A8534))(this, side);
	}

};

}
