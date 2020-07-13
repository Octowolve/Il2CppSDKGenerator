#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EnumString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EnumString"));
	}

	template <typename T = Il2CppString*> T& ValueString() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_ParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ParseInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ParseInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ParseInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T ParseEnum(uintptr_t container, Il2CppString* fieldName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x51BB2E8))(0, container, fieldName);
	}
	template <typename T = int32_t> static T ParseInt(uintptr_t container, Il2CppString* fieldName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x51BB6C8))(0, container, fieldName);
	}
	template <typename T = uintptr_t> T ParseEnum_1() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x51BB7BC))(this);
	}
	template <typename T = uintptr_t> T ParseEnum_2() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DE948))(this);
	}
	template <typename T = uintptr_t> T ParseEnum_3() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DE658))(this);
	}
	template <typename T = uintptr_t> T ParseEnum_4() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DE21C))(this);
	}
	template <typename T = int32_t> T ParseInt_1() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DF4E4))(this);
	}
	template <typename T = int32_t> T ParseInt_2() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DF380))(this);
	}
	template <typename T = int32_t> T ParseInt_3() {
		return ((T (*)(EnumString*))(Il2CppBase() + 0x21DF21C))(this);
	}

};

}
