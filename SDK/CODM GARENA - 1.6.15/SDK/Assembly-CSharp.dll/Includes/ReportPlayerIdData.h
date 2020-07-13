#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportPlayerIdData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportPlayerIdData"));
	}

	template <typename T = Il2CppString*> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(ReportPlayerIdData*))(Il2CppBase() + 0x23C1588))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(ReportPlayerIdData*, Il2CppString*))(Il2CppBase() + 0x23C1590))(this, value);
	}

};

}
