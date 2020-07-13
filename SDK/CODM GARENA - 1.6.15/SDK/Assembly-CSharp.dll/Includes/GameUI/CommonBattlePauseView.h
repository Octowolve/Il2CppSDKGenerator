#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CommonBattlePauseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CommonBattlePauseView"));
	}

	template <typename T = uintptr_t> T& m_ResumeButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SettingButton() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_QuitButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_WindowGameObject() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_CountGameObject() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_CountDownLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Tweeners() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& ResumeCountDownTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& m_CountDownTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& m_IsEnterResumeCountDown() {
		return *(T*)((uintptr_t)this + 0xCC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResumeGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResumeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMode_OnlyResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DEF814))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DEFAB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DEFEF8))(this);
	}
	template <typename T = void> T ResumeGame() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF0168))(this);
	}
	template <typename T = void> T TickCountDown() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DEFFA8))(this);
	}
	template <typename T = void> T StartResume() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF030C))(this);
	}
	template <typename T = void> T OnResumeClick() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF04A0))(this);
	}
	template <typename T = void> T OnSettingClick() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF0668))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DEFCA8))(this);
	}
	template <typename T = void> T SetMode_OnlyResume() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF0800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF0984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CommonBattlePauseView*))(Il2CppBase() + 0x3DF098C))(this);
	}

};

}
