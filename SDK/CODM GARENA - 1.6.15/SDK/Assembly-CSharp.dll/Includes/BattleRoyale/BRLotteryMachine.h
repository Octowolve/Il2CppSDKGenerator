#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLotteryMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLotteryMachine"));
	}

	template <typename T = float> T& OpenAniDelay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_OpenEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_OpenAniTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAniDelayUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E370))(this);
	}
	template <typename T = void> T OpenAniDelayUpdate() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E420))(this);
	}
	template <typename T = void> T OnOpenAni() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E504))(this);
	}
	template <typename T = void> T OnCloseAni() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E81C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpenAni() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseAni() {
		return ((T (*)(BRLotteryMachine*))(Il2CppBase() + 0x194E82C))(this);
	}

};

}
