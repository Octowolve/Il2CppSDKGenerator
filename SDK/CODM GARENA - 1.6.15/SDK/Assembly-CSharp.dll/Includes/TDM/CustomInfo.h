#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TDM {

class CustomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TDM", "CustomInfo"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& KVInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(CustomInfo*, uintptr_t))(Il2CppBase() + 0x4650D04))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(CustomInfo*, uintptr_t))(Il2CppBase() + 0x4650DE4))(this, reader);
	}

};

}
