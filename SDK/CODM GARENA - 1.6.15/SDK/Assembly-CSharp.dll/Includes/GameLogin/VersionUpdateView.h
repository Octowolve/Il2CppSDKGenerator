#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionUpdateView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionUpdateView"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_UpdateMsgLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_UpdateProgressBar() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_DownloadPercentageLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_DownloadState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_LastPercents() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_LastTickTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> static T& kTickInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideStateText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetController(uintptr_t controller) {
		return ((T (*)(VersionUpdateView*, uintptr_t))(Il2CppBase() + 0x25472B4))(this, controller);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x254735C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x254747C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x2547524))(this);
	}
	template <typename T = void> T DisplayView(bool display) {
		return ((T (*)(VersionUpdateView*, bool))(Il2CppBase() + 0x25475CC))(this, display);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x25477B0))(this);
	}
	template <typename T = void> T SetDownloadState(uintptr_t state) {
		return ((T (*)(VersionUpdateView*, uintptr_t))(Il2CppBase() + 0x2547AF0))(this, state);
	}
	template <typename T = void> T HideStateText() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x2547D3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x2547E50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x2547E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(VersionUpdateView*))(Il2CppBase() + 0x2547E60))(this);
	}

};

}
