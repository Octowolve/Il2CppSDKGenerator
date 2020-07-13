#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FireModeProneTLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireMode_ProneTLog"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& IsFireMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& FireModeValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IsProne() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ProneValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x46761F0))(this);
	}
	template <typename T = void> T SetInfo(int32_t _IsFireMode, int32_t _FireModeValue, int32_t _IsProne, int32_t _ProneValue) {
		return ((T (*)(FireModeProneTLog*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4676268))(this, _IsFireMode, _FireModeValue, _IsProne, _ProneValue);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x4676370))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x4676394))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x4676398))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x467639C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x46763A0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(FireModeProneTLog*))(Il2CppBase() + 0x4676694))(this);
	}

};

}
