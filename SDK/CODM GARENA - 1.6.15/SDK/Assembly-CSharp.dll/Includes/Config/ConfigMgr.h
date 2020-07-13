#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigMgr"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& m_FreeActionDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T RegisterConfig(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E7BA3C))(0, action);
	}
	template <typename T = void> static T ClearConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7B7D4))(0);
	}
	template <typename T = void> static T ClearAllConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4638EC0))(0);
	}
	template <typename T = bool> static T GetBytes(uintptr_t type, Il2CppArray<uintptr_t>** data, uintptr_t* count) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x4639168))(0, type, data, count);
	}

};

}
