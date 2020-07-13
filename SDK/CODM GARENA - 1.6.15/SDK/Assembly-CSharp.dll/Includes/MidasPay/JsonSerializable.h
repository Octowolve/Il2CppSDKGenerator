#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MidasPay {

class JsonSerializable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MidasPay", "JsonSerializable"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToUnityString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_JsonDict() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x41D6788))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_UnityJsonDict() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x41D718C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x41D7B70))(this);
	}
	template <typename T = Il2CppString*> T ToUnityString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x41D7C1C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x41D7CC8))(this);
	}

};

}
