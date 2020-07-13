#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class JsonSerializable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "JsonSerializable"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ToJsonString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Fill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_JsonDict() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x46B4A8C))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_UnityJsonDict() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x46B5648))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x46B6030))(this);
	}
	template <typename T = Il2CppString*> T ToJsonString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x46B617C))(this);
	}
	template <typename T = void> T Fill(Il2CppString* json) {
		return ((T (*)(JsonSerializable*, Il2CppString*))(Il2CppBase() + 0x46B6228))(this, json);
	}
	template <typename T = void> T Fill_1(uintptr_t json) {
		return ((T (*)(JsonSerializable*, uintptr_t))(Il2CppBase() + 0x46B379C))(this, json);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(JsonSerializable*))(Il2CppBase() + 0x46B62E0))(this);
	}

};

}
