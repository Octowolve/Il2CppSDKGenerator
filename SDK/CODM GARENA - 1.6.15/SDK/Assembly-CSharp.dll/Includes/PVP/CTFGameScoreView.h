#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class CTFGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "CTFGameScoreView"));
	}

	template <typename T = uintptr_t> T& RoundLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& FlagHoldingTag() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshHoldingFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3440A5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3440B80))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(CTFGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x3440E10))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateCurRound() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3440FC0))(this);
	}
	template <typename T = void> T RefreshHoldingFlag() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3440C30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3441150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3441158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateGameTime(int32_t P0, int32_t P1) {
		return ((T (*)(CTFGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x3441160))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCurRound() {
		return ((T (*)(CTFGameScoreView*))(Il2CppBase() + 0x3441168))(this);
	}

};

}
