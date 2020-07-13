#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ElectronicSportsDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElectronicSportsDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ElectronicSportsDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetElectronicSportsConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetElectronicSportsConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_ElectronicSportsDS() {
		return ((T (*)(ElectronicSportsDataAgent*))(Il2CppBase() + 0x4BC1188))(this);
	}
	template <typename T = void> T ReqGetElectronicSportsConf() {
		return ((T (*)(ElectronicSportsDataAgent*))(Il2CppBase() + 0x4BC1238))(this);
	}
	template <typename T = bool> T OnGetElectronicSportsConf(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ElectronicSportsDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4BC1368))(this, message, errStr);
	}

};

}
