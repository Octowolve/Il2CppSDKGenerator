#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GUIControlProgressbar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GUIControl_Progressbar"));
	}

	template <typename T = uintptr_t> T& m_ProgressBar_BG() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ProgressBarInstance() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_ShowBG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_ProgressBG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_ProgressFont() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& EventCountdownCompleted() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_ProgressBarValue() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_BeginProgress() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_GodTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_EndTime() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_EventCountdownCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_EventCountdownCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgressbarTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T get_ProgressFront() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED81FC))(this);
	}
	template <typename T = void> T set_ProgressFront(Il2CppString* value) {
		return ((T (*)(GUIControlProgressbar*, Il2CppString*))(Il2CppBase() + 0x1ED8204))(this, value);
	}
	template <typename T = uintptr_t> T get_Foreground() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED834C))(this);
	}
	template <typename T = void> T add_EventCountdownCompleted(uintptr_t value) {
		return ((T (*)(GUIControlProgressbar*, uintptr_t))(Il2CppBase() + 0x1ED8424))(this, value);
	}
	template <typename T = void> T remove_EventCountdownCompleted(uintptr_t value) {
		return ((T (*)(GUIControlProgressbar*, uintptr_t))(Il2CppBase() + 0x1ED861C))(this, value);
	}
	template <typename T = float> T get_ProgressBarValue() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED8814))(this);
	}
	template <typename T = void> T set_ProgressBarValue(float value) {
		return ((T (*)(GUIControlProgressbar*, float))(Il2CppBase() + 0x1ED881C))(this, value);
	}
	template <typename T = float> T get_ProgressAlpha() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED884C))(this);
	}
	template <typename T = void> T set_ProgressAlpha(float value) {
		return ((T (*)(GUIControlProgressbar*, float))(Il2CppBase() + 0x1ED8878))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED88A4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED8948))(this);
	}
	template <typename T = void> T TimeCountdown(float fTime) {
		return ((T (*)(GUIControlProgressbar*, float))(Il2CppBase() + 0x1ED8C18))(this, fTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED8D60))(this);
	}
	template <typename T = uintptr_t> T GetProgressbarTransform() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED8FC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED9090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GUIControlProgressbar*))(Il2CppBase() + 0x1ED9098))(this);
	}

};

}
