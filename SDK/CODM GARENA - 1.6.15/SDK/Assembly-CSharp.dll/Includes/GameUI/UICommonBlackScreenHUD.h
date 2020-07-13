#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonBlackScreenHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonBlackScreenHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& BlackScreen() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_BlackTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_BlackToWhiteTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MediaPlayer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Adaptor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& JumpOverBtn() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CenterWidget() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& CenterDescLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_CountDownTotalTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _isPrinting() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _dialogContent() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& _printInteral() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBlackScreenBackOutEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBlackScreenTweenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopCG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJumpOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopVedio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginBlackFadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeHideHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForcePrintAllDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D2E10))(this);
	}
	template <typename T = void> T PlayBlackScreenBackOutEffect(float blackTime, float blackToWhiteTime, Il2CppString* descContent) {
		return ((T (*)(UICommonBlackScreenHUD*, float, float, Il2CppString*))(Il2CppBase() + 0x29D2FD8))(this, blackTime, blackToWhiteTime, descContent);
	}
	template <typename T = void> T PlayBlackScreenTweenEffect(float inTotalTime, float inWhiteToBlackTime, float inBlackToWhileTime, Il2CppString* inDescCount) {
		return ((T (*)(UICommonBlackScreenHUD*, float, float, float, Il2CppString*))(Il2CppBase() + 0x29D33AC))(this, inTotalTime, inWhiteToBlackTime, inBlackToWhileTime, inDescCount);
	}
	template <typename T = void> T PlayCountDown(float inTotalTime) {
		return ((T (*)(UICommonBlackScreenHUD*, float))(Il2CppBase() + 0x29D3630))(this, inTotalTime);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D3760))(this);
	}
	template <typename T = void> T PlayVideo(Il2CppString* URL, float hideTime) {
		return ((T (*)(UICommonBlackScreenHUD*, Il2CppString*, float))(Il2CppBase() + 0x29D3848))(this, URL, hideTime);
	}
	template <typename T = bool> T ShouldStopCG() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D3E80))(this);
	}
	template <typename T = uintptr_t> T PlayCG(float duration) {
		return ((T (*)(UICommonBlackScreenHUD*, float))(Il2CppBase() + 0x29D3FEC))(this, duration);
	}
	template <typename T = void> T OnJumpOver(uintptr_t Obj) {
		return ((T (*)(UICommonBlackScreenHUD*, uintptr_t))(Il2CppBase() + 0x29D40F0))(this, Obj);
	}
	template <typename T = void> T StopVedio() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D41C4))(this);
	}
	template <typename T = void> T BeginBlackFadeOut() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D42A8))(this);
	}
	template <typename T = void> T InvokeHideHUD() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D454C))(this);
	}
	template <typename T = bool> T get_IsPrinting() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D4630))(this);
	}
	template <typename T = uintptr_t> T PrintDialog(float displayInterval, Il2CppString* content) {
		return ((T (*)(UICommonBlackScreenHUD*, float, Il2CppString*))(Il2CppBase() + 0x29D3298))(this, displayInterval, content);
	}
	template <typename T = bool> T ForcePrintAllDialog() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D4438))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UICommonBlackScreenHUD*))(Il2CppBase() + 0x29D4640))(this);
	}

};

}
