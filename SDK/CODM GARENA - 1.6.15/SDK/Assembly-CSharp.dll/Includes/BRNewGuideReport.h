#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRNewGuideReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRNewGuideReport"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4673538))(0);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(BRNewGuideReport*))(Il2CppBase() + 0x4673694))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(BRNewGuideReport*))(Il2CppBase() + 0x467370C))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(BRNewGuideReport*))(Il2CppBase() + 0x4673730))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(BRNewGuideReport*))(Il2CppBase() + 0x4673734))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(BRNewGuideReport*))(Il2CppBase() + 0x4673738))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(Il2CppString* newGuideType, int32_t endType) {
		return ((T (*)(BRNewGuideReport*, Il2CppString*, int32_t))(Il2CppBase() + 0x467373C))(this, newGuideType, endType);
	}

};

}
