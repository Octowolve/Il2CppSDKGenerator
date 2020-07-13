#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVS {

class PVSProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVS", "PVSProfile"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& m_ProfileDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T ResetProfile() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DA5FEC))(0);
	}
	template <typename T = void> static T BeginProfile(uintptr_t profile) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DA146C))(0, profile);
	}
	template <typename T = void> static T EndProfile(uintptr_t profile) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3DA22E4))(0, profile);
	}
	template <typename T = void> static T PrintProfile() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DA61C4))(0);
	}

};

}
