#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalInfoTagClickReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalInfoTagClickReport"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& mButtonId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(PersonalInfoTagClickReport*))(Il2CppBase() + 0x4949B40))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SetTLogArgs(int32_t buttonId) {
		return ((T (*)(PersonalInfoTagClickReport*, int32_t))(Il2CppBase() + 0x4949BB8))(this, buttonId);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(PersonalInfoTagClickReport*))(Il2CppBase() + 0x4949CA4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(PersonalInfoTagClickReport*))(Il2CppBase() + 0x4949F68))(this);
	}

};

}
