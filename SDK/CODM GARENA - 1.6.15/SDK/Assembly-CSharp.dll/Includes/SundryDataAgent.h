#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SundryDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SundryDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSundryDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetSundryConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetSundryConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetLoadingBackGroundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetLoadingBackGroundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_SundryDS() {
		return ((T (*)(SundryDataAgent*))(Il2CppBase() + 0x3F2E488))(this);
	}
	template <typename T = void> T ReqGetSundryConf() {
		return ((T (*)(SundryDataAgent*))(Il2CppBase() + 0x3F2E538))(this);
	}
	template <typename T = bool> T OnResGetSundryConf(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(SundryDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3F2E668))(this, message, errStr);
	}
	template <typename T = void> T ReqGetLoadingBackGroundConfig() {
		return ((T (*)(SundryDataAgent*))(Il2CppBase() + 0x3F2F554))(this);
	}
	template <typename T = bool> T OnResGetLoadingBackGroundConfig(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(SundryDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3F2F684))(this, message, errStr);
	}

};

}
