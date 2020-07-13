#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdSpecialMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_SpecialMove"));
	}

	template <typename T = uintptr_t> T& m_SpecialMove() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsRandomAnim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_RandomValue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ShouldFinishRotation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_CanRotateWhilePlayAnim() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteSpecialMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAbort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdSpecialMove*, uintptr_t))(Il2CppBase() + 0x4CE3E3C))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CE403C))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2378))(this);
	}
	template <typename T = uintptr_t> T ExecuteSpecialMove() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2460))(this);
	}
	template <typename T = void> T OnPlayAnim() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CE43D0))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CE41D0))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdSpecialMove*, uintptr_t))(Il2CppBase() + 0x4CF2548))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdSpecialMove*, Il2CppString*))(Il2CppBase() + 0x4CF25FC))(this, oldCmdName);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF26C8))(this);
	}
	template <typename T = bool> T CanAbort() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2770))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2810))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2818))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdSpecialMove*, uintptr_t))(Il2CppBase() + 0x4CF2828))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdSpecialMove*, Il2CppString*))(Il2CppBase() + 0x4CF2830))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2838))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanAbort() {
		return ((T (*)(AICmdSpecialMove*))(Il2CppBase() + 0x4CF2840))(this);
	}

};

}
