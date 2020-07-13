#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InGameMessageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InGameMessageView"));
	}

	template <typename T = uintptr_t> T& NewGuideCommonText_Top() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideCommonText_Bottom() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& messageAreaList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& countDown() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& countDownMessage() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& playCountDownSnd() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMessageArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTopMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTopLowerMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBottomMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBottomLowerMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerShowCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountDownMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0A700))(this);
	}
	template <typename T = uintptr_t> T GetMessageArea(uintptr_t inPos) {
		return ((T (*)(InGameMessageView*, uintptr_t))(Il2CppBase() + 0x1F0A8B4))(this, inPos);
	}
	template <typename T = void> T ShowMessage(uintptr_t pos, Il2CppString* message, int32_t duration) {
		return ((T (*)(InGameMessageView*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1F09CE4))(this, pos, message, duration);
	}
	template <typename T = void> T ClearTopMessage() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0AA2C))(this);
	}
	template <typename T = void> T ClearTopLowerMessage() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0AB84))(this);
	}
	template <typename T = void> T ClearBottomMessage() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0ACDC))(this);
	}
	template <typename T = void> T ClearBottomLowerMessage() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0AE34))(this);
	}
	template <typename T = void> T ShowCountDown(int32_t count, Il2CppString* message, bool playSound) {
		return ((T (*)(InGameMessageView*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x1F09FF0))(this, count, message, playSound);
	}
	template <typename T = void> T TimerShowCountDown() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0B10C))(this);
	}
	template <typename T = Il2CppString*> T GetCountDownMessage() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0AF8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(InGameMessageView*))(Il2CppBase() + 0x1F0B3BC))(this);
	}

};

}
