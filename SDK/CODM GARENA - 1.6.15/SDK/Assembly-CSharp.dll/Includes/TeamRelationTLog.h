#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TeamRelationTLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamRelationTLog"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
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
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BC90))(this);
	}
	template <typename T = void> T SetInfo(int32_t _Source, int32_t _Type) {
		return ((T (*)(TeamRelationTLog*, int32_t, int32_t))(Il2CppBase() + 0x495BD08))(this, _Source, _Type);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BDFC))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BE34))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BE40))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BE4C))(this);
	}
	template <typename T = Il2CppString*> T get_playerID() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BE58))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495BF28))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(TeamRelationTLog*))(Il2CppBase() + 0x495C234))(this);
	}

};

}
