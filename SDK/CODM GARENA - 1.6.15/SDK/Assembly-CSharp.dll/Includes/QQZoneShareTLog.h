#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QQZoneShareTLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QQZoneShareTLog"));
	}

	template <typename T = int32_t> T& ShareCancel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ShareFailure() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ShareSuccess() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetInfo(int32_t _ShareCancel, int32_t _ShareFailure, int32_t _ShareSuccess) {
		return ((T (*)(QQZoneShareTLog*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x494CBD8))(this, _ShareCancel, _ShareFailure, _ShareSuccess);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CCA8))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CD20))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CD58))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CD64))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CD70))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CD7C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(QQZoneShareTLog*))(Il2CppBase() + 0x494CFD0))(this);
	}

};

}
