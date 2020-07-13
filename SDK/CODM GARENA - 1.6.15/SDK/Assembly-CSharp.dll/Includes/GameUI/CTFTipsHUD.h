#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CTFTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CTFTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TipsRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Tips_Red() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Tips_Blue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RedRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BlueRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TipsAddOneRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TipsAddOne_Red() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TipsAddOne_Blue() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RedAddOneRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BlueAddOneRoot() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips_AddOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CTFTipsHUD*))(Il2CppBase() + 0x3E005CC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CTFTipsHUD*))(Il2CppBase() + 0x3E006C4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CTFTipsHUD*))(Il2CppBase() + 0x3E006CC))(this);
	}
	template <typename T = void> T ShowTips(Il2CppString* TipsStr, bool bRed) {
		return ((T (*)(CTFTipsHUD*, Il2CppString*, bool))(Il2CppBase() + 0x3E006D8))(this, TipsStr, bRed);
	}
	template <typename T = void> T ShowTips_AddOne(Il2CppString* TipsStr, bool bRed) {
		return ((T (*)(CTFTipsHUD*, Il2CppString*, bool))(Il2CppBase() + 0x3E008F4))(this, TipsStr, bRed);
	}
	template <typename T = void> T HideTips() {
		return ((T (*)(CTFTipsHUD*))(Il2CppBase() + 0x3E00B10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFTipsHUD*))(Il2CppBase() + 0x3E00BFC))(this);
	}

};

}
