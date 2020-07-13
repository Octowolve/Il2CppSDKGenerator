#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginResDownView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginResDownView"));
	}

	template <typename T = uintptr_t> T& m_DownLoadMsgLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_DownLoadProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_DownLoadPercentageLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_DownloadState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E794C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E7A6C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E7B14))(this);
	}
	template <typename T = void> T SetDownloadViewInfo(Il2CppString* Label, float percent) {
		return ((T (*)(LoginResDownView*, Il2CppString*, float))(Il2CppBase() + 0x33E7BBC))(this, Label, percent);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E7DB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E7DBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(LoginResDownView*))(Il2CppBase() + 0x33E7DC4))(this);
	}

};

}
