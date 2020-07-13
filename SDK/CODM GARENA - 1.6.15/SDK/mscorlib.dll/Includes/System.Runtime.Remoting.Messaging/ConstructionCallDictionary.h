#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ConstructionCallDictionary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& InternalKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map23() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map24() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetMethodProperty(Il2CppString* key) {
		return ((T (*)(ConstructionCallDictionary*, Il2CppString*))(Il2CppBase() + 0x4B34FF8))(this, key);
	}
	template <typename T = void> T SetMethodProperty(Il2CppString* key, uintptr_t value) {
		return ((T (*)(ConstructionCallDictionary*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B35CDC))(this, key, value);
	}

};

}
