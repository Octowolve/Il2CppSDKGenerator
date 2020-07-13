#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class JsonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "JsonInfo"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& jsonFields() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& constructors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void*> static T GetInfo(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41D5B48))(0, target);
	}
	template <typename T = uintptr_t> static T InstantiateType(uintptr_t type, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x41D6068))(0, type, value);
	}

};

}
